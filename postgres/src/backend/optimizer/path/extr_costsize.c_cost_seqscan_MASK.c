
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {double ppi_rows; } ;
struct TYPE_18__ {double rows; scalar_t__ parallel_workers; double startup_cost; double total_cost; TYPE_2__* pathtarget; } ;
struct TYPE_17__ {double startup; double per_tuple; } ;
struct TYPE_16__ {scalar_t__ relid; scalar_t__ rtekind; double rows; double pages; double tuples; int reltablespace; } ;
struct TYPE_14__ {double startup; double per_tuple; } ;
struct TYPE_15__ {TYPE_1__ cost; } ;
typedef TYPE_3__ RelOptInfo ;
typedef TYPE_4__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_5__ Path ;
typedef TYPE_6__ ParamPathInfo ;
typedef double Cost ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 double FUNC_1 (double) ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 double FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_6__*,TYPE_4__*) ;
 int FUNC_4 (int ,int *,double*) ;

void
FUNC_5(Path *VAR_4, PlannerInfo *VAR_5,
    RelOptInfo *VAR_6, ParamPathInfo *VAR_7)
{
 Cost VAR_8 = 0;
 Cost VAR_9;
 Cost VAR_10;
 double VAR_11;
 QualCost VAR_12;
 Cost VAR_13;


 FUNC_0(VAR_6->relid > 0);
 FUNC_0(VAR_6->rtekind == VAR_0);


 if (VAR_7)
  VAR_4->rows = VAR_7->ppi_rows;
 else
  VAR_4->rows = VAR_6->rows;

 if (!VAR_3)
  VAR_8 += VAR_2;


 FUNC_4(VAR_6->reltablespace,
         ((void*)0),
         &VAR_11);




 VAR_10 = VAR_11 * VAR_6->pages;


 FUNC_3(VAR_5, VAR_6, VAR_7, &VAR_12);

 VAR_8 += VAR_12.startup;
 VAR_13 = VAR_1 + VAR_12.per_tuple;
 VAR_9 = VAR_13 * VAR_6->tuples;

 VAR_8 += VAR_4->pathtarget->cost.startup;
 VAR_9 += VAR_4->pathtarget->cost.per_tuple * VAR_4->rows;


 if (VAR_4->parallel_workers > 0)
 {
  double VAR_14 = FUNC_2(VAR_4);


  VAR_9 /= VAR_14;
  VAR_4->rows = FUNC_1(VAR_4->rows / VAR_14);
 }

 VAR_4->startup_cost = VAR_8;
 VAR_4->total_cost = VAR_8 + VAR_9 + VAR_10;
}
