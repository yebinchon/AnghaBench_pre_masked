
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int regset2table; } ;
struct TYPE_9__ {int table_sizes; } ;
struct TYPE_10__ {TYPE_2__ regs; } ;
struct d3dx_param_eval {int param_type; TYPE_1__ shader_inputs; TYPE_3__ pres; int * version_counter; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int ULONG64 ;
typedef struct d3dx_param_eval* HRESULT ;
typedef int D3DXPARAMETER_TYPE ;
typedef scalar_t__ BOOL ;


 struct d3dx_param_eval* VAR_0 ;


 struct d3dx_param_eval* VAR_1 ;
 struct d3dx_param_eval* VAR_2 ;
 scalar_t__ FUNC_0 (struct d3dx_param_eval*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 struct d3dx_param_eval* FUNC_3 (int ,int ,int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (char*) ;
 int VAR_9 ;
 int FUNC_7 (struct d3dx_param_eval*) ;
 int FUNC_8 (void*,unsigned int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*) ;
 unsigned int* FUNC_11 (unsigned int*,unsigned int,int ,unsigned int*) ;
 struct d3dx_param_eval* FUNC_12 (unsigned int*,TYPE_1__*,struct d3dx9_base_effect*,char const**,unsigned int,TYPE_3__*) ;
 struct d3dx_param_eval* FUNC_13 (TYPE_3__*,unsigned int*,unsigned int,struct d3dx9_base_effect*) ;
 struct d3dx_param_eval* FUNC_14 (TYPE_2__*,unsigned int) ;
 int VAR_10 ;
 int FUNC_15 (int ,TYPE_1__*) ;

HRESULT FUNC_16(struct d3dx9_base_effect *VAR_11, void *VAR_12, unsigned int VAR_13,
        D3DXPARAMETER_TYPE VAR_14, struct d3dx_param_eval **VAR_15, ULONG64 *VAR_16,
        const char **VAR_17, unsigned int VAR_18)
{
    struct d3dx_param_eval *VAR_19;
    unsigned int *VAR_20, *VAR_21 = ((void*)0);
    unsigned int VAR_22;
    BOOL VAR_23;
    unsigned int VAR_24, VAR_25;
    HRESULT VAR_26;

    FUNC_4("base_effect %p, byte_code %p, byte_code_size %u, type %u, peval_out %p.\n",
            VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

    VAR_24 = VAR_13 / sizeof(unsigned int);
    if (!VAR_12 || !VAR_24)
    {
        *VAR_15 = ((void*)0);
        return VAR_1;
    }

    VAR_19 = FUNC_3(FUNC_2(), VAR_5, sizeof(*VAR_19));
    if (!VAR_19)
    {
        VAR_26 = VAR_2;
        goto err_out;
    }
    VAR_19->version_counter = VAR_16;

    VAR_19->param_type = VAR_14;
    switch (VAR_14)
    {
        case 128:
        case 129:
            VAR_23 = VAR_8;
            break;
        default:
            VAR_23 = VAR_3;
            break;
    }
    VAR_19->shader_inputs.regset2table = VAR_10;

    VAR_20 = (unsigned int *)VAR_12;
    if (VAR_23)
    {
        if ((*VAR_20 & 0xfffe0000) != 0xfffe0000)
        {
            FUNC_1("Invalid shader signature %#x.\n", *VAR_20);
            VAR_26 = VAR_0;
            goto err_out;
        }
        FUNC_4("Shader version %#x.\n", *VAR_20 & 0xffff);
        VAR_21 = VAR_20;
        VAR_20 = FUNC_11(VAR_20 + 1, VAR_24 - 1, VAR_4, &VAR_25);
        if (!VAR_20)
            FUNC_4("No preshader found.\n");
    }
    else
    {
        VAR_25 = VAR_24;
    }

    if (VAR_20 && FUNC_0(VAR_26 = FUNC_13(&VAR_19->pres, VAR_20, VAR_25, VAR_11)))
    {
        FUNC_1("Failed parsing preshader, byte code for analysis follows.\n");
        FUNC_8(VAR_12, VAR_13);
        goto err_out;
    }

    if (VAR_23)
    {
        if (FUNC_0(VAR_26 = FUNC_12(VAR_21, &VAR_19->shader_inputs, VAR_11,
                VAR_17, VAR_18, &VAR_19->pres)))
        {
            FUNC_4("Could not get shader constant table, hr %#x.\n", VAR_26);
            goto err_out;
        }
        FUNC_15(VAR_19->pres.regs.table_sizes, &VAR_19->shader_inputs);
    }

    for (VAR_22 = VAR_7; VAR_22 < VAR_6; ++VAR_22)
    {
        if (FUNC_0(VAR_26 = FUNC_14(&VAR_19->pres.regs, VAR_22)))
            goto err_out;
    }

    if (FUNC_5(VAR_9))
    {
        FUNC_8(VAR_12, VAR_13);
        FUNC_9(&VAR_19->pres);
        if (VAR_23)
        {
            FUNC_4("// Shader registers:\n");
            FUNC_10(&VAR_19->shader_inputs);
        }
    }
    *VAR_15 = VAR_19;
    FUNC_4("Created parameter evaluator %p.\n", *VAR_15);
    return VAR_1;

err_out:
    FUNC_6("Error creating parameter evaluator.\n");
    if (FUNC_5(VAR_9))
        FUNC_8(VAR_12, VAR_13);

    FUNC_7(VAR_19);
    *VAR_15 = ((void*)0);
    return VAR_26;
}
