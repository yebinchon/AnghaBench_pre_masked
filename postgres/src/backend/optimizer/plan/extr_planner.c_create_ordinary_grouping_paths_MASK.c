
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_6__ ;
typedef struct TYPE_50__ TYPE_5__ ;
typedef struct TYPE_49__ TYPE_4__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;


typedef int grouping_sets_data ;
struct TYPE_51__ {scalar_t__ patype; int flags; int targetList; } ;
struct TYPE_50__ {int rows; } ;
struct TYPE_49__ {TYPE_1__* parse; } ;
struct TYPE_48__ {scalar_t__ pathlist; TYPE_2__* fdwroutine; scalar_t__ partial_pathlist; TYPE_5__* cheapest_total_path; } ;
struct TYPE_47__ {int (* GetForeignUpperPaths ) (TYPE_4__*,int ,TYPE_3__*,TYPE_3__*,TYPE_6__*) ;} ;
struct TYPE_46__ {int groupClause; } ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ PlannerInfo ;
typedef TYPE_5__ Path ;
typedef scalar_t__ PartitionwiseAggregateType ;
typedef TYPE_6__ GroupPathExtraData ;
typedef int AggClauseCosts ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int const*,int *,double,TYPE_6__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int *,TYPE_6__*,int) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,int const*,int *,scalar_t__,TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_3__*,TYPE_3__*,TYPE_6__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*) ;
 double FUNC_11 (TYPE_4__*,int ,int *,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_4__*,int ,TYPE_3__*,TYPE_3__*,TYPE_6__*) ;
 int FUNC_15 (TYPE_4__*,int ,TYPE_3__*,TYPE_3__*,TYPE_6__*) ;

__attribute__((used)) static void
FUNC_16(PlannerInfo *VAR_8, RelOptInfo *VAR_9,
          RelOptInfo *VAR_10,
          const AggClauseCosts *VAR_11,
          grouping_sets_data *VAR_12,
          GroupPathExtraData *VAR_13,
          RelOptInfo **VAR_14)
{
 Path *VAR_15 = VAR_9->cheapest_total_path;
 RelOptInfo *VAR_16 = ((void*)0);
 double VAR_17;
 PartitionwiseAggregateType VAR_18 = VAR_5;







 if (VAR_13->patype != VAR_5 &&
  FUNC_1(VAR_9))
 {
  if (VAR_13->patype == VAR_4 &&
   FUNC_12(VAR_9, VAR_13->targetList,
         VAR_8->parse->groupClause))
   VAR_18 = VAR_4;
  else if ((VAR_13->flags & VAR_2) != 0)
   VAR_18 = VAR_6;
  else
   VAR_18 = VAR_5;
 }






 if ((VAR_13->flags & VAR_2) != 0)
 {
  bool VAR_19;






  VAR_19 = (VAR_18 == VAR_6);

  VAR_16 =
   FUNC_3(VAR_8,
            VAR_10,
            VAR_9,
            VAR_12,
            VAR_13,
            VAR_19);
 }


 *VAR_14 = VAR_16;


 if (VAR_18 != VAR_5)
  FUNC_4(VAR_8, VAR_9, VAR_10,
           VAR_16, VAR_11,
           VAR_12, VAR_18, VAR_13);


 if (VAR_13->patype == VAR_6)
 {
  FUNC_0(VAR_16);

  if (VAR_16->pathlist)
   FUNC_13(VAR_16);

  return;
 }


 if (VAR_16 && VAR_16->partial_pathlist)
 {
  FUNC_10(VAR_8, VAR_16);
  FUNC_13(VAR_16);
 }




 VAR_17 = FUNC_11(VAR_8,
           VAR_15->rows,
           VAR_12,
           VAR_13->targetList);


 FUNC_2(VAR_8, VAR_9, VAR_10,
         VAR_16, VAR_11, VAR_12,
         VAR_17, VAR_13);


 if (VAR_10->pathlist == VAR_3)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_9("could not implement GROUP BY"),
     FUNC_8("Some of the datatypes only support hashing, while others only support sorting.")));





 if (VAR_10->fdwroutine &&
  VAR_10->fdwroutine->GetForeignUpperPaths)
  VAR_10->fdwroutine->GetForeignUpperPaths(VAR_8, VAR_7,
               VAR_9, VAR_10,
               VAR_13);


 if (&FUNC_5)
  FUNC_5) (VAR_8, VAR_7,
         VAR_9, VAR_10,
         VAR_13);
}
