
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ rollups; scalar_t__ any_hashable; } ;
typedef TYPE_1__ grouping_sets_data ;
struct TYPE_22__ {scalar_t__ numOrderedAggs; } ;
struct TYPE_21__ {int flags; int target_parallel_safe; int partial_costs_set; int patype; int targetList; int havingQual; } ;
struct TYPE_20__ {TYPE_2__* parse; } ;
struct TYPE_19__ {scalar_t__ groupClause; int groupingSets; int targetList; int havingQual; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerInfo ;
typedef int PathTarget ;
typedef TYPE_4__ GroupPathExtraData ;
typedef TYPE_5__ AggClauseCosts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__ const*) ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int *,TYPE_5__ const*,TYPE_1__*,TYPE_4__*,int **) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (TYPE_3__*,int *,int *,int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static RelOptInfo *
FUNC_8(PlannerInfo *VAR_7,
       RelOptInfo *VAR_8,
       PathTarget *VAR_9,
       bool VAR_10,
       const AggClauseCosts *VAR_11,
       grouping_sets_data *VAR_12)
{
 Query *VAR_13 = VAR_7->parse;
 RelOptInfo *VAR_14;
 RelOptInfo *VAR_15;





 VAR_14 = FUNC_6(VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_13->havingQual);





 if (FUNC_5(VAR_7))
  FUNC_1(VAR_7, VAR_8, VAR_14);
 else
 {
  int VAR_16 = 0;
  GroupPathExtraData VAR_17;
  if ((VAR_12 && VAR_12->rollups != VAR_3)
   || FUNC_4(VAR_13->groupClause))
   VAR_16 |= VAR_2;
  if ((VAR_13->groupClause != VAR_3 &&
    VAR_11->numOrderedAggs == 0 &&
    (VAR_12 ? VAR_12->any_hashable : FUNC_3(VAR_13->groupClause))))
   VAR_16 |= VAR_1;




  if (FUNC_0(VAR_7, VAR_11))
   VAR_16 |= VAR_0;

  VAR_17.flags = VAR_16;
  VAR_17.target_parallel_safe = VAR_10;
  VAR_17.havingQual = VAR_13->havingQual;
  VAR_17.targetList = VAR_13->targetList;
  VAR_17.partial_costs_set = 0;







  if (VAR_6 && !VAR_13->groupingSets)
   VAR_17.patype = VAR_4;
  else
   VAR_17.patype = VAR_5;

  FUNC_2(VAR_7, VAR_8, VAR_14,
            VAR_11, VAR_12, &VAR_17,
            &VAR_15);
 }

 FUNC_7(VAR_14);
 return VAR_14;
}
