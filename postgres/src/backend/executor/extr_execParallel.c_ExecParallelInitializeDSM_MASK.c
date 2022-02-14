
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {size_t nnodes; int pcxt; TYPE_1__* instrumentation; } ;
struct TYPE_14__ {TYPE_2__* plan; } ;
struct TYPE_13__ {int parallel_aware; int plan_node_id; } ;
struct TYPE_12__ {int * plan_node_id; } ;
typedef int SortState ;
typedef int SeqScanState ;
typedef TYPE_3__ PlanState ;
typedef int IndexScanState ;
typedef int IndexOnlyScanState ;
typedef int HashState ;
typedef int HashJoinState ;
typedef int ForeignScanState ;
typedef TYPE_4__ ExecParallelInitializeDSMContext ;
typedef int CustomScanState ;
typedef int BitmapHeapScanState ;
typedef int AppendState ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int (*) (TYPE_3__*,TYPE_4__*),TYPE_4__*) ;

__attribute__((used)) static bool
FUNC_12(PlanState *VAR_0,
        ExecParallelInitializeDSMContext *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;


 if (VAR_1->instrumentation != ((void*)0))
  VAR_1->instrumentation->plan_node_id[VAR_1->nnodes] =
   VAR_0->plan->plan_node_id;


 VAR_1->nnodes++;
 switch (FUNC_10(VAR_0))
 {
  case 129:
   if (VAR_0->plan->parallel_aware)
    FUNC_8((SeqScanState *) VAR_0,
           VAR_1->pcxt);
   break;
  case 130:
   if (VAR_0->plan->parallel_aware)
    FUNC_7((IndexScanState *) VAR_0,
             VAR_1->pcxt);
   break;
  case 131:
   if (VAR_0->plan->parallel_aware)
    FUNC_6((IndexOnlyScanState *) VAR_0,
              VAR_1->pcxt);
   break;
  case 134:
   if (VAR_0->plan->parallel_aware)
    FUNC_3((ForeignScanState *) VAR_0,
            VAR_1->pcxt);
   break;
  case 137:
   if (VAR_0->plan->parallel_aware)
    FUNC_0((AppendState *) VAR_0,
          VAR_1->pcxt);
   break;
  case 135:
   if (VAR_0->plan->parallel_aware)
    FUNC_2((CustomScanState *) VAR_0,
           VAR_1->pcxt);
   break;
  case 136:
   if (VAR_0->plan->parallel_aware)
    FUNC_1((BitmapHeapScanState *) VAR_0,
           VAR_1->pcxt);
   break;
  case 133:
   if (VAR_0->plan->parallel_aware)
    FUNC_5((HashJoinState *) VAR_0,
            VAR_1->pcxt);
   break;
  case 132:

   FUNC_4((HashState *) VAR_0, VAR_1->pcxt);
   break;
  case 128:

   FUNC_9((SortState *) VAR_0, VAR_1->pcxt);
   break;

  default:
   break;
 }

 return FUNC_11(VAR_0, FUNC_12, VAR_1);
}
