
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int grouping_sets_data ;
typedef int child_extra ;
struct TYPE_25__ {int * havingQual; int target_parallel_safe; scalar_t__ patype; int * targetList; } ;
struct TYPE_24__ {int * exprs; } ;
struct TYPE_23__ {int nparts; scalar_t__ pathlist; int relids; struct TYPE_23__** part_rels; TYPE_2__* reltarget; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ PathTarget ;
typedef scalar_t__ PartitionwiseAggregateType ;
typedef int Node ;
typedef int List ;
typedef TYPE_3__ GroupPathExtraData ;
typedef int AppendRelInfo ;
typedef int AggClauseCosts ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int,int **) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_1__*,int const*,int *,TYPE_3__*,TYPE_1__**) ;
 int ** FUNC_6 (int *,int ,int*) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int *,TYPE_1__*,TYPE_2__*,int ,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_12(PlannerInfo *VAR_4,
         RelOptInfo *VAR_5,
         RelOptInfo *VAR_6,
         RelOptInfo *VAR_7,
         const AggClauseCosts *VAR_8,
         grouping_sets_data *VAR_9,
         PartitionwiseAggregateType VAR_10,
         GroupPathExtraData *VAR_11)
{
 int VAR_12 = VAR_5->nparts;
 int VAR_13;
 List *VAR_14 = VAR_0;
 List *VAR_15 = VAR_0;
 PathTarget *VAR_16 = VAR_6->reltarget;
 bool VAR_17 = 1;

 FUNC_0(VAR_10 != VAR_2);
 FUNC_0(VAR_10 != VAR_3 ||
     VAR_7 != ((void*)0));


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
 {
  RelOptInfo *VAR_18 = VAR_5->part_rels[VAR_13];
  PathTarget *VAR_19 = FUNC_4(VAR_16);
  AppendRelInfo **VAR_20;
  int VAR_21;
  GroupPathExtraData VAR_22;
  RelOptInfo *VAR_23;
  RelOptInfo *VAR_24;


  if (VAR_18 == ((void*)0) || FUNC_1(VAR_18))
   continue;





  FUNC_9(&VAR_22, VAR_11, sizeof(VAR_22));

  VAR_20 = FUNC_6(VAR_4, VAR_18->relids,
             &VAR_21);

  VAR_19->exprs = (List *)
   FUNC_3(VAR_4,
           (Node *) VAR_16->exprs,
           VAR_21, VAR_20);


  VAR_22.havingQual = (Node *)
   FUNC_3(VAR_4,
           VAR_11->havingQual,
           VAR_21, VAR_20);
  VAR_22.targetList = (List *)
   FUNC_3(VAR_4,
           (Node *) VAR_11->targetList,
           VAR_21, VAR_20);






  VAR_22.patype = VAR_10;





  VAR_23 = FUNC_8(VAR_4, VAR_18,
             VAR_19,
             VAR_11->target_parallel_safe,
             VAR_22.havingQual);


  FUNC_5(VAR_4, VAR_18,
            VAR_23,
            VAR_8, VAR_9, &VAR_22,
            &VAR_24);

  if (VAR_24)
  {
   VAR_15 =
    FUNC_7(VAR_15,
      VAR_24);
  }
  else
   VAR_17 = 0;

  if (VAR_10 == VAR_1)
  {
   FUNC_11(VAR_23);
   VAR_14 = FUNC_7(VAR_14,
           VAR_23);
  }

  FUNC_10(VAR_20);
 }
 if (VAR_7 && VAR_17)
 {
  FUNC_0(VAR_15 != VAR_0);

  FUNC_2(VAR_4, VAR_7,
        VAR_15);





  if (VAR_7->pathlist)
   FUNC_11(VAR_7);
 }


 if (VAR_10 == VAR_1)
 {
  FUNC_0(VAR_14 != VAR_0);

  FUNC_2(VAR_4, VAR_6, VAR_14);
 }
}
