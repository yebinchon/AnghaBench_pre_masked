
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_6__ {struct TYPE_6__* aux_fmstate; } ;
struct TYPE_5__ {TYPE_2__* ri_FdwState; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ PgFdwModifyState ;
typedef int EState ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_1(EState *VAR_1,
        ResultRelInfo *VAR_2,
        TupleTableSlot *VAR_3,
        TupleTableSlot *VAR_4)
{
 PgFdwModifyState *VAR_5 = (PgFdwModifyState *) VAR_2->ri_FdwState;
 TupleTableSlot *VAR_6;





 if (VAR_5->aux_fmstate)
  VAR_2->ri_FdwState = VAR_5->aux_fmstate;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0,
           VAR_3, VAR_4);

 if (VAR_5->aux_fmstate)
  VAR_2->ri_FdwState = VAR_5;

 return VAR_6;
}
