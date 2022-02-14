
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* plan; } ;
struct TYPE_7__ {int parallel_aware; } ;
typedef int SeqScanState ;
typedef TYPE_2__ PlanState ;
typedef int ParallelContext ;
typedef int IndexScanState ;
typedef int IndexOnlyScanState ;
typedef int HashJoinState ;
typedef int ForeignScanState ;
typedef int CustomScanState ;
typedef int BitmapHeapScanState ;
typedef int AppendState ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int (*) (TYPE_2__*,int *),int *) ;

__attribute__((used)) static bool
FUNC_10(PlanState *VAR_0,
       ParallelContext *VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;




 switch (FUNC_8(VAR_0))
 {
  case 129:
   if (VAR_0->plan->parallel_aware)
    FUNC_7((SeqScanState *) VAR_0,
             VAR_1);
   break;
  case 130:
   if (VAR_0->plan->parallel_aware)
    FUNC_6((IndexScanState *) VAR_0,
            VAR_1);
   break;
  case 131:
   if (VAR_0->plan->parallel_aware)
    FUNC_5((IndexOnlyScanState *) VAR_0,
             VAR_1);
   break;
  case 134:
   if (VAR_0->plan->parallel_aware)
    FUNC_3((ForeignScanState *) VAR_0,
              VAR_1);
   break;
  case 137:
   if (VAR_0->plan->parallel_aware)
    FUNC_0((AppendState *) VAR_0, VAR_1);
   break;
  case 135:
   if (VAR_0->plan->parallel_aware)
    FUNC_2((CustomScanState *) VAR_0,
             VAR_1);
   break;
  case 136:
   if (VAR_0->plan->parallel_aware)
    FUNC_1((BitmapHeapScanState *) VAR_0,
             VAR_1);
   break;
  case 133:
   if (VAR_0->plan->parallel_aware)
    FUNC_4((HashJoinState *) VAR_0,
           VAR_1);
   break;
  case 132:
  case 128:

   break;

  default:
   break;
 }

 return FUNC_9(VAR_0, FUNC_10, VAR_1);
}
