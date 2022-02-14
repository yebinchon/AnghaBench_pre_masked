
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d3dx_sampler {unsigned int state_count; int * states; } ;
struct d3dx_pass {int dummy; } ;
struct d3dx_parameter {scalar_t__ class; int name; struct d3dx_sampler* data; TYPE_2__* members; scalar_t__ element_count; int type; TYPE_4__* param_eval; } ;
struct ID3DXEffectImpl {int device; int manager; } ;
struct TYPE_5__ {unsigned int input_count; TYPE_3__* inputs; struct d3dx_parameter** inputs_param; } ;
struct TYPE_8__ {TYPE_1__ shader_inputs; } ;
struct TYPE_7__ {unsigned int RegisterCount; scalar_t__ RegisterIndex; } ;
struct TYPE_6__ {struct d3dx_sampler* data; } ;
typedef int HRESULT ;
typedef TYPE_3__ D3DXCONSTANT_DESC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,scalar_t__,unsigned int) ;
 int FUNC_3 (struct ID3DXEffectImpl*,struct d3dx_pass*,int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_4__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static HRESULT FUNC_7(struct ID3DXEffectImpl *VAR_4, struct d3dx_pass *VAR_5,
        struct d3dx_parameter *VAR_6, BOOL VAR_7, BOOL VAR_8)
{
    HRESULT VAR_9, VAR_10;
    struct d3dx_parameter **VAR_11;
    D3DXCONSTANT_DESC *VAR_12;
    unsigned int VAR_13;
    unsigned int VAR_14, VAR_15;

    if (!VAR_6->param_eval)
    {
        FUNC_1("param_eval structure is null.\n");
        return VAR_0;
    }
    if (FUNC_0(VAR_9 = FUNC_4(VAR_4->manager, VAR_4->device,
            VAR_6->param_eval, VAR_8)))
        return VAR_9;
    VAR_11 = VAR_6->param_eval->shader_inputs.inputs_param;
    VAR_12 = VAR_6->param_eval->shader_inputs.inputs;
    VAR_13 = VAR_6->param_eval->shader_inputs.input_count;
    VAR_10 = VAR_3;
    for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14)
    {
        if (VAR_11[VAR_14] && VAR_11[VAR_14]->class == VAR_2 && FUNC_6(VAR_11[VAR_14]->type))
        {
            struct d3dx_sampler *VAR_16;
            unsigned int VAR_17;

            for (VAR_17 = 0; VAR_17 < VAR_12[VAR_14].RegisterCount; ++VAR_17)
            {
                VAR_16 = VAR_11[VAR_14]->element_count ? VAR_11[VAR_14]->members[VAR_17].data : VAR_11[VAR_14]->data;
                FUNC_2("sampler %s, register index %u, state count %u.\n", FUNC_5(VAR_11[VAR_14]->name),
                        VAR_12[VAR_14].RegisterIndex, VAR_16->state_count);
                for (VAR_15 = 0; VAR_15 < VAR_16->state_count; ++VAR_15)
                {
                    if (FUNC_0(VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_16->states[VAR_15],
                            VAR_12[VAR_14].RegisterIndex + VAR_17 + (VAR_7 ? VAR_1 : 0),
                            VAR_8)))
                        VAR_10 = VAR_9;
                }
            }
        }
    }
    return VAR_10;
}
