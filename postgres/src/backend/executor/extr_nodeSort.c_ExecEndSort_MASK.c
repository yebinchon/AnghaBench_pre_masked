
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Tuplesortstate ;
struct TYPE_6__ {int ps_ResultTupleSlot; } ;
struct TYPE_7__ {TYPE_1__ ps; int ss_ScanTupleSlot; } ;
struct TYPE_8__ {int * tuplesortstate; TYPE_2__ ss; } ;
typedef TYPE_3__ SortState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(SortState *VAR_0)
{
 FUNC_2("ExecEndSort: %s\n",
      "shutting down sort node");




 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);

 FUNC_0(VAR_0->ss.ps.ps_ResultTupleSlot);




 if (VAR_0->tuplesortstate != ((void*)0))
  FUNC_4((Tuplesortstate *) VAR_0->tuplesortstate);
 VAR_0->tuplesortstate = ((void*)0);




 FUNC_1(FUNC_3(VAR_0));

 FUNC_2("ExecEndSort: %s\n",
      "sort node shutdown");
}
