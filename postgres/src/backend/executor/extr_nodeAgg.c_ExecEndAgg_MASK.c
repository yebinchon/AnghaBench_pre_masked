
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ss_ScanTupleSlot; int ps; } ;
struct TYPE_8__ {int numtrans; TYPE_1__ ss; scalar_t__ hashcontext; scalar_t__* aggcontexts; TYPE_2__* pertrans; scalar_t__ sort_out; scalar_t__ sort_in; int maxsets; } ;
struct TYPE_7__ {scalar_t__* sortstates; } ;
typedef int PlanState ;
typedef TYPE_2__* AggStatePerTrans ;
typedef TYPE_3__ AggState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(AggState *VAR_0)
{
 PlanState *VAR_1;
 int VAR_2;
 int VAR_3 = FUNC_3(VAR_0->maxsets, 1);
 int VAR_4;



 if (VAR_0->sort_in)
  FUNC_6(VAR_0->sort_in);
 if (VAR_0->sort_out)
  FUNC_6(VAR_0->sort_out);

 for (VAR_2 = 0; VAR_2 < VAR_0->numtrans; VAR_2++)
 {
  AggStatePerTrans VAR_5 = &VAR_0->pertrans[VAR_2];

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  {
   if (VAR_5->sortstates[VAR_4])
    FUNC_6(VAR_5->sortstates[VAR_4]);
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_4(VAR_0->aggcontexts[VAR_4]);
 if (VAR_0->hashcontext)
  FUNC_4(VAR_0->hashcontext);






 FUNC_2(&VAR_0->ss.ps);


 FUNC_0(VAR_0->ss.ss_ScanTupleSlot);

 VAR_1 = FUNC_5(VAR_0);
 FUNC_1(VAR_1);
}
