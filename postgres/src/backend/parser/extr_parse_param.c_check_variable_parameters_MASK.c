
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* numParams; } ;
typedef TYPE_1__ VarParamState ;
struct TYPE_5__ {scalar_t__ p_ref_hook_state; } ;
typedef int Query ;
typedef TYPE_2__ ParseState ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*,int ) ;

void
FUNC_1(ParseState *VAR_1, Query *VAR_2)
{
 VarParamState *VAR_3 = (VarParamState *) VAR_1->p_ref_hook_state;


 if (*VAR_3->numParams > 0)
  (void) FUNC_0(VAR_2,
         VAR_0,
         (void *) VAR_1, 0);
}
