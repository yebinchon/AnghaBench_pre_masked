
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ patype; int havingQual; } ;
struct TYPE_24__ {double rows; int width; void* total_cost; void* startup_cost; int local_conds; int local_conds_cost; int local_conds_sel; int user; int server; int table; TYPE_1__* outerrel; } ;
struct TYPE_23__ {int hasHavingQual; TYPE_2__* parse; } ;
struct TYPE_22__ {int hasAggs; int groupingSets; int groupClause; } ;
struct TYPE_21__ {int reltarget; TYPE_4__* fdw_private; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerInfo ;
typedef TYPE_4__ PgFdwRelationInfo ;
typedef int Path ;
typedef TYPE_5__ GroupPathExtraData ;
typedef int ForeignPath ;
typedef void* Cost ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ,TYPE_3__*) ;
 int * FUNC_4 (TYPE_3__*,TYPE_1__*,int ,double,void*,void*,int ,int *,int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,int ,int ,int *,double*,int*,void**,void**) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*,int *) ;

__attribute__((used)) static void
FUNC_8(PlannerInfo *VAR_4, RelOptInfo *VAR_5,
         RelOptInfo *VAR_6,
         GroupPathExtraData *VAR_7)
{
 Query *VAR_8 = VAR_4->parse;
 PgFdwRelationInfo *VAR_9 = VAR_5->fdw_private;
 PgFdwRelationInfo *VAR_10 = VAR_6->fdw_private;
 ForeignPath *VAR_11;
 double VAR_12;
 int VAR_13;
 Cost VAR_14;
 Cost VAR_15;


 if (!VAR_8->groupClause && !VAR_8->groupingSets && !VAR_8->hasAggs &&
  !VAR_4->hasHavingQual)
  return;

 FUNC_0(VAR_7->patype == VAR_3 ||
     VAR_7->patype == VAR_2);


 VAR_10->outerrel = VAR_5;





 VAR_10->table = VAR_9->table;
 VAR_10->server = VAR_9->server;
 VAR_10->user = VAR_9->user;
 FUNC_7(VAR_10, VAR_9, ((void*)0));







 if (!FUNC_6(VAR_4, VAR_6, VAR_7->havingQual))
  return;
 VAR_10->local_conds_sel = FUNC_2(VAR_4,
              VAR_10->local_conds,
              0,
              VAR_0,
              ((void*)0));

 FUNC_3(&VAR_10->local_conds_cost, VAR_10->local_conds, VAR_4);


 FUNC_5(VAR_4, VAR_6, VAR_1, VAR_1, ((void*)0),
       &VAR_12, &VAR_13, &VAR_14, &VAR_15);


 VAR_10->rows = VAR_12;
 VAR_10->width = VAR_13;
 VAR_10->startup_cost = VAR_14;
 VAR_10->total_cost = VAR_15;


 VAR_11 = FUNC_4(VAR_4,
            VAR_6,
            VAR_6->reltarget,
            VAR_12,
            VAR_14,
            VAR_15,
            VAR_1,
            ((void*)0),
            VAR_1);


 FUNC_1(VAR_6, (Path *) VAR_11);
}
