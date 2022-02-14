
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_32__ {int * sjinfo; } ;
struct TYPE_31__ {int pushdown_safe; double rows; int width; void* total_cost; void* startup_cost; int jointype; int joinclauses; void* joinclause_sel; int use_remote_estimate; int local_conds; int local_conds_cost; void* local_conds_sel; int * attrs_used; } ;
struct TYPE_30__ {scalar_t__ rowMarks; TYPE_1__* parse; } ;
struct TYPE_29__ {double rows; int lateral_relids; TYPE_2__* reltarget; TYPE_5__* fdw_private; } ;
struct TYPE_28__ {int width; } ;
struct TYPE_27__ {scalar_t__ commandType; } ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ PlannerInfo ;
typedef TYPE_5__ PgFdwRelationInfo ;
typedef int Path ;
typedef int JoinType ;
typedef TYPE_6__ JoinPathExtraData ;
typedef int ForeignPath ;
typedef void* Cost ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int *) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (TYPE_4__*,int ,int ,int ,int *) ;
 int FUNC_5 (int *,int ,TYPE_4__*) ;
 int * FUNC_6 (TYPE_4__*,TYPE_3__*,int *,double,void*,void*,int ,int ,int *,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int ,int ,int *,double*,int*,void**,void**) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int ,TYPE_3__*,TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(PlannerInfo *VAR_5,
       RelOptInfo *VAR_6,
       RelOptInfo *VAR_7,
       RelOptInfo *VAR_8,
       JoinType VAR_9,
       JoinPathExtraData *VAR_10)
{
 PgFdwRelationInfo *VAR_11;
 ForeignPath *VAR_12;
 double VAR_13;
 int VAR_14;
 Cost VAR_15;
 Cost VAR_16;
 Path *VAR_17;





 if (VAR_6->fdw_private)
  return;





 if (!FUNC_3(VAR_6->lateral_relids))
  return;
 VAR_11 = (PgFdwRelationInfo *) FUNC_10(sizeof(PgFdwRelationInfo));
 VAR_11->pushdown_safe = 0;
 VAR_6->fdw_private = VAR_11;

 VAR_11->attrs_used = ((void*)0);
 if (VAR_5->parse->commandType == VAR_0 ||
  VAR_5->parse->commandType == VAR_1 ||
  VAR_5->rowMarks)
 {
  VAR_17 = FUNC_0(VAR_6);
  if (!VAR_17)
  {
   FUNC_7(VAR_2, "could not push down foreign join because a local path suitable for EPQ checks was not found");
   return;
  }
 }
 else
  VAR_17 = ((void*)0);

 if (!FUNC_9(VAR_5, VAR_6, VAR_9, VAR_7, VAR_8, VAR_10))
 {

  if (VAR_17)
   FUNC_11(VAR_17);
  return;
 }
 VAR_11->local_conds_sel = FUNC_4(VAR_5,
              VAR_11->local_conds,
              0,
              VAR_3,
              ((void*)0));
 FUNC_5(&VAR_11->local_conds_cost, VAR_11->local_conds, VAR_5);





 if (!VAR_11->use_remote_estimate)
  VAR_11->joinclause_sel = FUNC_4(VAR_5, VAR_11->joinclauses,
              0, VAR_11->jointype,
              VAR_10->sjinfo);


 FUNC_8(VAR_5, VAR_6, VAR_4, VAR_4, ((void*)0),
       &VAR_13, &VAR_14, &VAR_15, &VAR_16);

 VAR_6->rows = VAR_13;
 VAR_6->reltarget->width = VAR_14;
 VAR_11->rows = VAR_13;
 VAR_11->width = VAR_14;
 VAR_11->startup_cost = VAR_15;
 VAR_11->total_cost = VAR_16;





 VAR_12 = FUNC_6(VAR_5,
          VAR_6,
          ((void*)0),
          VAR_13,
          VAR_15,
          VAR_16,
          VAR_4,
          VAR_6->lateral_relids,
          VAR_17,
          VAR_4);


 FUNC_1(VAR_6, (Path *) VAR_12);


 FUNC_2(VAR_5, VAR_6, VAR_17);


}
