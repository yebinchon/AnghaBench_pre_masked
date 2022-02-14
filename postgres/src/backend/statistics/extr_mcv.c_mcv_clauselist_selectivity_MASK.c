
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nitems; TYPE_1__* items; } ;
struct TYPE_8__ {int keys; int statOid; } ;
struct TYPE_7__ {scalar_t__ frequency; scalar_t__ base_frequency; } ;
typedef TYPE_2__ StatisticExtInfo ;
typedef int SpecialJoinInfo ;
typedef double Selectivity ;
typedef int RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ MCVList ;
typedef int List ;
typedef int JoinType ;


 int* FUNC_0 (int *,int *,int ,TYPE_3__*,int) ;
 TYPE_3__* FUNC_1 (int ) ;

Selectivity
FUNC_2(PlannerInfo *VAR_0, StatisticExtInfo *VAR_1,
         List *VAR_2, int VAR_3,
         JoinType VAR_4, SpecialJoinInfo *VAR_5,
         RelOptInfo *VAR_6,
         Selectivity *VAR_7, Selectivity *VAR_8)
{
 int VAR_9;
 MCVList *VAR_10;
 Selectivity VAR_11 = 0.0;


 bool *VAR_12 = ((void*)0);


 VAR_10 = FUNC_1(VAR_1->statOid);


 VAR_12 = FUNC_0(VAR_0, VAR_2, VAR_1->keys, VAR_10, 0);


 *VAR_7 = 0.0;
 *VAR_8 = 0.0;
 for (VAR_9 = 0; VAR_9 < VAR_10->nitems; VAR_9++)
 {
  *VAR_8 += VAR_10->items[VAR_9].frequency;

  if (VAR_12[VAR_9] != 0)
  {

   *VAR_7 += VAR_10->items[VAR_9].base_frequency;
   VAR_11 += VAR_10->items[VAR_9].frequency;
  }
 }

 return VAR_11;
}
