
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ri_FdwState; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef int PgFdwModifyState ;
typedef int EState ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(EState *VAR_0,
       ResultRelInfo *VAR_1)
{
 PgFdwModifyState *VAR_2 = (PgFdwModifyState *) VAR_1->ri_FdwState;


 if (VAR_2 == ((void*)0))
  return;


 FUNC_0(VAR_2);
}
