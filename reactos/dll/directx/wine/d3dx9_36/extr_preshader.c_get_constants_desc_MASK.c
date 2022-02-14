
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d3dx_preshader {int dummy; } ;
struct d3dx_parameter {scalar_t__ class; int element_count; int type; } ;
struct d3dx_const_tab {unsigned int input_count; int const_set_count; int const_set_size; struct d3dx_const_param_eval_output* const_set; struct d3dx_parameter** inputs_param; TYPE_1__* inputs; } ;
struct d3dx_const_param_eval_output {scalar_t__ constant_class; scalar_t__ table; scalar_t__ register_index; scalar_t__ register_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int WORD ;
struct TYPE_6__ {int Constants; } ;
struct TYPE_5__ {scalar_t__ Class; scalar_t__ RegisterSet; scalar_t__ RegisterCount; int Name; } ;
typedef int ID3DXConstantTable ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;
typedef TYPE_1__ D3DXCONSTANT_DESC ;
typedef TYPE_2__ D3DXCONSTANTTABLE_DESC ;


 int D3DERR_INVALIDCALL ;
 int D3DXGetShaderConstantTable (unsigned int*,int **) ;
 scalar_t__ D3DXPC_FORCE_DWORD ;
 scalar_t__ D3DXPC_OBJECT ;
 scalar_t__ D3DXRS_SAMPLER ;
 int D3D_OK ;
 int E_FAIL ;
 int E_OUTOFMEMORY ;
 scalar_t__ FAILED (int ) ;
 int FIXME (char*,...) ;
 int GetProcessHeap () ;
 void* HeapAlloc (int ,int ,int) ;
 struct d3dx_const_param_eval_output* HeapReAlloc (int ,int ,struct d3dx_const_param_eval_output*,int) ;
 int ID3DXConstantTable_GetConstant (int *,int *,unsigned int) ;
 int ID3DXConstantTable_GetDesc (int *,TYPE_2__*) ;
 int ID3DXConstantTable_Release (int *) ;
 int TRACE (char*,int ,...) ;
 int WARN (char*,...) ;
 int append_pres_const_sets_for_shader_input (struct d3dx_const_tab*,struct d3dx_preshader*) ;
 int assert (int) ;
 int compare_const_set ;
 int debugstr_a (int ) ;
 int get_ctab_constant_desc (int *,int ,TYPE_1__*,int *) ;
 struct d3dx_parameter* get_parameter_by_name (struct d3dx9_base_effect*,int *,int ) ;
 int init_set_constants_param (struct d3dx_const_tab*,int *,int ,struct d3dx_parameter*) ;
 int is_param_type_sampler (int ) ;
 int is_top_level_parameter (struct d3dx_parameter*) ;
 scalar_t__ max (int ,int) ;
 int memmove (struct d3dx_const_param_eval_output*,struct d3dx_const_param_eval_output*,int) ;
 int qsort (struct d3dx_const_param_eval_output*,int,int,int ) ;
 int strcmp (int ,char const*) ;

__attribute__((used)) static HRESULT get_constants_desc(unsigned int *byte_code, struct d3dx_const_tab *out,
        struct d3dx9_base_effect *base, const char **skip_constants,
        unsigned int skip_constants_count, struct d3dx_preshader *pres)
{
    ID3DXConstantTable *ctab;
    D3DXCONSTANT_DESC *cdesc;
    struct d3dx_parameter **inputs_param;
    D3DXCONSTANTTABLE_DESC desc;
    HRESULT hr;
    D3DXHANDLE hc;
    unsigned int i, j;

    hr = D3DXGetShaderConstantTable(byte_code, &ctab);
    if (FAILED(hr) || !ctab)
    {
        TRACE("Could not get CTAB data, hr %#x.\n", hr);

        return D3D_OK;
    }
    if (FAILED(hr = ID3DXConstantTable_GetDesc(ctab, &desc)))
    {
        FIXME("Could not get CTAB desc, hr %#x.\n", hr);
        goto cleanup;
    }

    out->inputs = cdesc = HeapAlloc(GetProcessHeap(), 0, sizeof(*cdesc) * desc.Constants);
    out->inputs_param = inputs_param = HeapAlloc(GetProcessHeap(), 0, sizeof(*inputs_param) * desc.Constants);
    if (!cdesc || !inputs_param)
    {
        hr = E_OUTOFMEMORY;
        goto cleanup;
    }

    for (i = 0; i < desc.Constants; ++i)
    {
        unsigned int index = out->input_count;
        WORD constantinfo_reserved;

        hc = ID3DXConstantTable_GetConstant(ctab, ((void*)0), i);
        if (!hc)
        {
            FIXME("Null constant handle.\n");
            goto cleanup;
        }
        if (FAILED(hr = get_ctab_constant_desc(ctab, hc, &cdesc[index], &constantinfo_reserved)))
            goto cleanup;
        inputs_param[index] = get_parameter_by_name(base, ((void*)0), cdesc[index].Name);
        if (!inputs_param[index])
        {
            WARN("Could not find parameter %s in effect.\n", cdesc[index].Name);
            continue;
        }
        if (cdesc[index].Class == D3DXPC_OBJECT)
        {
            TRACE("Object %s, parameter %p.\n", cdesc[index].Name, inputs_param[index]);
            if (cdesc[index].RegisterSet != D3DXRS_SAMPLER || inputs_param[index]->class != D3DXPC_OBJECT
                    || !is_param_type_sampler(inputs_param[index]->type))
            {
                WARN("Unexpected object type, constant %s.\n", debugstr_a(cdesc[index].Name));
                hr = D3DERR_INVALIDCALL;
                goto cleanup;
            }
            if (max(inputs_param[index]->element_count, 1) < cdesc[index].RegisterCount)
            {
                WARN("Register count exceeds parameter size, constant %s.\n", debugstr_a(cdesc[index].Name));
                hr = D3DERR_INVALIDCALL;
                goto cleanup;
            }
        }
        if (!is_top_level_parameter(inputs_param[index]))
        {
            WARN("Expected top level parameter '%s'.\n", debugstr_a(cdesc[index].Name));
            hr = E_FAIL;
            goto cleanup;
        }

        for (j = 0; j < skip_constants_count; ++j)
        {
            if (!strcmp(cdesc[index].Name, skip_constants[j]))
            {
                if (!constantinfo_reserved)
                {
                    WARN("skip_constants parameter %s is not register bound.\n",
                            cdesc[index].Name);
                    hr = D3DERR_INVALIDCALL;
                    goto cleanup;
                }
                TRACE("Skipping constant %s.\n", cdesc[index].Name);
                break;
            }
        }
        if (j < skip_constants_count)
            continue;
        ++out->input_count;
        if (inputs_param[index]->class == D3DXPC_OBJECT)
            continue;
        if (FAILED(hr = init_set_constants_param(out, ctab, hc, inputs_param[index])))
            goto cleanup;
    }
    if (pres)
        append_pres_const_sets_for_shader_input(out, pres);
    if (out->const_set_count)
    {
        struct d3dx_const_param_eval_output *new_alloc;

        qsort(out->const_set, out->const_set_count, sizeof(*out->const_set), compare_const_set);

        i = 0;
        while (i < out->const_set_count - 1)
        {
            if (out->const_set[i].constant_class == D3DXPC_FORCE_DWORD
                    && out->const_set[i + 1].constant_class == D3DXPC_FORCE_DWORD
                    && out->const_set[i].table == out->const_set[i + 1].table
                    && out->const_set[i].register_index + out->const_set[i].register_count
                    >= out->const_set[i + 1].register_index)
            {
                assert(out->const_set[i].register_index + out->const_set[i].register_count
                        <= out->const_set[i + 1].register_index + 1);
                out->const_set[i].register_count = out->const_set[i + 1].register_index + 1
                        - out->const_set[i].register_index;
                memmove(&out->const_set[i + 1], &out->const_set[i + 2], sizeof(out->const_set[i])
                        * (out->const_set_count - i - 2));
                --out->const_set_count;
            }
            else
            {
                ++i;
            }
        }

        new_alloc = HeapReAlloc(GetProcessHeap(), 0, out->const_set,
                sizeof(*out->const_set) * out->const_set_count);
        if (new_alloc)
        {
            out->const_set = new_alloc;
            out->const_set_size = out->const_set_count;
        }
        else
        {
            WARN("Out of memory.\n");
        }
    }
cleanup:
    ID3DXConstantTable_Release(ctab);
    return hr;
}
