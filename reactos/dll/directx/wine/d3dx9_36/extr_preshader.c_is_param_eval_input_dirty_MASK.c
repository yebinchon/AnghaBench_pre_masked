
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inputs; } ;
struct d3dx_param_eval {int shader_inputs; TYPE_1__ pres; } ;
typedef int ULONG64 ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int ) ;

BOOL FUNC_1(struct d3dx_param_eval *VAR_0, ULONG64 VAR_1)
{
    return FUNC_0(&VAR_0->pres.inputs, VAR_1)
            || FUNC_0(&VAR_0->shader_inputs, VAR_1);
}
