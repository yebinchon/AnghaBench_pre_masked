
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ numCols; int grpColIdx; scalar_t__ groupingSets; } ;
struct TYPE_9__ {scalar_t__ plan; } ;
struct TYPE_10__ {TYPE_1__ ps; } ;
struct TYPE_11__ {TYPE_2__ ss; } ;
typedef int List ;
typedef int ExplainState ;
typedef TYPE_3__ AggState ;
typedef TYPE_4__ Agg ;


 int * FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_4__*,int *,int *) ;
 int FUNC_4 (int ,char*,scalar_t__,int ,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(AggState *VAR_0, List *VAR_1,
     ExplainState *VAR_2)
{
 Agg *VAR_3 = (Agg *) VAR_0->ss.ps.plan;

 if (VAR_3->numCols > 0 || VAR_3->groupingSets)
 {

  VAR_1 = FUNC_0(VAR_0, VAR_1);

  if (VAR_3->groupingSets)
   FUNC_3(FUNC_2(VAR_0), VAR_3, VAR_1, VAR_2);
  else
   FUNC_4(FUNC_2(VAR_0), "Group Key",
         VAR_3->numCols, VAR_3->grpColIdx,
         ((void*)0), ((void*)0), ((void*)0),
         VAR_1, VAR_2);

  VAR_1 = FUNC_1(VAR_1);
 }
}
