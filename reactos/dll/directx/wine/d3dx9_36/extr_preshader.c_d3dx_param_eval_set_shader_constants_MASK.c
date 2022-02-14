
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_regstore {int dummy; } ;
struct d3dx_preshader {int inputs; struct d3dx_regstore regs; } ;
struct d3dx_param_eval {int param_type; int shader_inputs; int version_counter; struct d3dx_preshader pres; } ;
struct IDirect3DDevice9 {int dummy; } ;
typedef int ULONG64 ;
typedef int ID3DXEffectStateManager ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct IDirect3DDevice9*,struct d3dx_param_eval*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct d3dx_preshader*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct d3dx_regstore*,int *,int ,int *,struct IDirect3DDevice9*,int ,int ,int ) ;

HRESULT FUNC_6(ID3DXEffectStateManager *VAR_3, struct IDirect3DDevice9 *VAR_4,
        struct d3dx_param_eval *VAR_5, BOOL VAR_6)
{
    HRESULT VAR_7;
    struct d3dx_preshader *VAR_8 = &VAR_5->pres;
    struct d3dx_regstore *VAR_9 = &VAR_8->regs;
    ULONG64 VAR_10 = FUNC_4(VAR_5->version_counter);
    BOOL VAR_11 = VAR_0;

    FUNC_1("device %p, peval %p, param_type %u.\n", VAR_4, VAR_5, VAR_5->param_type);

    if (FUNC_3(&VAR_8->inputs, VAR_2))
    {
        FUNC_5(VAR_9, &VAR_8->inputs, VAR_10,
                ((void*)0), ((void*)0), VAR_5->param_type, VAR_0, VAR_0);
        if (FUNC_0(VAR_7 = FUNC_2(VAR_8)))
            return VAR_7;
        VAR_11 = VAR_1;
    }

    return FUNC_5(VAR_9, &VAR_5->shader_inputs, VAR_10,
            VAR_3, VAR_4, VAR_5->param_type, VAR_6, VAR_11);
}
