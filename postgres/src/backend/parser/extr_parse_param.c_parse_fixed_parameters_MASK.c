
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numParams; int * paramTypes; } ;
struct TYPE_5__ {int p_paramref_hook; void* p_ref_hook_state; } ;
typedef TYPE_1__ ParseState ;
typedef int Oid ;
typedef TYPE_2__ FixedParamState ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

void
FUNC_1(ParseState *VAR_1,
        Oid *VAR_2, int VAR_3)
{
 FixedParamState *VAR_4 = FUNC_0(sizeof(FixedParamState));

 VAR_4->paramTypes = VAR_2;
 VAR_4->numParams = VAR_3;
 VAR_1->p_ref_hook_state = (void *) VAR_4;
 VAR_1->p_paramref_hook = VAR_0;

}
