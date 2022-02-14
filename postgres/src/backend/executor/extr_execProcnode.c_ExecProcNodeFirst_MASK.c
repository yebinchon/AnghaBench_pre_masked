
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_5__ {int * (* ExecProcNode ) (TYPE_1__*) ;int * (* ExecProcNodeReal ) (TYPE_1__*) ;scalar_t__ instrument; } ;
typedef TYPE_1__ PlanState ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static TupleTableSlot *
FUNC_3(PlanState *VAR_0)
{







 FUNC_1();






 if (VAR_0->instrument)
  VAR_0->ExecProcNode = FUNC_0;
 else
  VAR_0->ExecProcNode = VAR_0->ExecProcNodeReal;

 return VAR_0->ExecProcNode(VAR_0);
}
