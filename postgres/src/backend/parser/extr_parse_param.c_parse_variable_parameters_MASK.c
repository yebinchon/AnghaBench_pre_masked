
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* numParams; int ** paramTypes; } ;
typedef TYPE_1__ VarParamState ;
struct TYPE_6__ {int p_coerce_param_hook; int p_paramref_hook; void* p_ref_hook_state; } ;
typedef TYPE_2__ ParseState ;
typedef int Oid ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(ParseState *VAR_2,
        Oid **VAR_3, int *VAR_4)
{
 VarParamState *VAR_5 = FUNC_0(sizeof(VarParamState));

 VAR_5->paramTypes = VAR_3;
 VAR_5->numParams = VAR_4;
 VAR_2->p_ref_hook_state = (void *) VAR_5;
 VAR_2->p_paramref_hook = VAR_1;
 VAR_2->p_coerce_param_hook = VAR_0;
}
