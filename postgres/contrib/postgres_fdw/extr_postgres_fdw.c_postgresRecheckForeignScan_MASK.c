
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_7__ {scalar_t__ plan; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;
struct TYPE_10__ {TYPE_2__ ss; } ;
struct TYPE_9__ {scalar_t__ scanrelid; } ;
typedef TYPE_3__ Scan ;
typedef int PlanState ;
typedef scalar_t__ Index ;
typedef TYPE_4__ ForeignScanState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static bool
FUNC_5(ForeignScanState *VAR_0, TupleTableSlot *VAR_1)
{
 Index VAR_2 = ((Scan *) VAR_0->ss.ps.plan)->scanrelid;
 PlanState *VAR_3 = FUNC_4(VAR_0);
 TupleTableSlot *VAR_4;


 if (VAR_2 > 0)
  return 1;

 FUNC_0(VAR_3 != ((void*)0));


 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_3(VAR_4))
  return 0;


 FUNC_1(VAR_1, VAR_4);

 return 1;
}
