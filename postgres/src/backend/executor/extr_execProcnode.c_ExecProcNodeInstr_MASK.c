
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_4__ {int instrument; int * (* ExecProcNodeReal ) (TYPE_1__*) ;} ;
typedef TYPE_1__ PlanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,double) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_4(PlanState *VAR_0)
{
 TupleTableSlot *VAR_1;

 FUNC_0(VAR_0->instrument);

 VAR_1 = VAR_0->ExecProcNodeReal(VAR_0);

 FUNC_1(VAR_0->instrument, FUNC_2(VAR_1) ? 0.0 : 1.0);

 return VAR_1;
}
