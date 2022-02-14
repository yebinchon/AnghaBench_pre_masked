
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* aux_fmstate; } ;
struct TYPE_5__ {scalar_t__ ri_FdwState; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ PgFdwModifyState ;
typedef int EState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(EState *VAR_0,
       ResultRelInfo *VAR_1)
{
 PgFdwModifyState *VAR_2 = (PgFdwModifyState *) VAR_1->ri_FdwState;

 FUNC_0(VAR_2 != ((void*)0));





 if (VAR_2->aux_fmstate)
  VAR_2 = VAR_2->aux_fmstate;


 FUNC_1(VAR_2);
}
