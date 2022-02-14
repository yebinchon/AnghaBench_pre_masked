
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_22__ {int ppi_rows; } ;
struct TYPE_21__ {int startup; int per_tuple; } ;
struct TYPE_20__ {scalar_t__ relid; scalar_t__ rtekind; int rows; int tuples; } ;
struct TYPE_18__ {int rows; int total_cost; int startup_cost; TYPE_3__* pathtarget; } ;
struct TYPE_19__ {TYPE_4__ path; TYPE_1__* subpath; } ;
struct TYPE_16__ {int startup; int per_tuple; } ;
struct TYPE_17__ {TYPE_2__ cost; } ;
struct TYPE_15__ {int total_cost; int startup_cost; } ;
typedef TYPE_5__ SubqueryScanPath ;
typedef TYPE_6__ RelOptInfo ;
typedef TYPE_7__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_8__ ParamPathInfo ;
typedef int Cost ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_6__*,TYPE_8__*,TYPE_7__*) ;

void
FUNC_2(SubqueryScanPath *VAR_2, PlannerInfo *VAR_3,
      RelOptInfo *VAR_4, ParamPathInfo *VAR_5)
{
 Cost VAR_6;
 Cost VAR_7;
 QualCost VAR_8;
 Cost VAR_9;


 FUNC_0(VAR_4->relid > 0);
 FUNC_0(VAR_4->rtekind == VAR_0);


 if (VAR_5)
  VAR_2->path.rows = VAR_5->ppi_rows;
 else
  VAR_2->path.rows = VAR_4->rows;







 VAR_2->path.startup_cost = VAR_2->subpath->startup_cost;
 VAR_2->path.total_cost = VAR_2->subpath->total_cost;

 FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);

 VAR_6 = VAR_8.startup;
 VAR_9 = VAR_1 + VAR_8.per_tuple;
 VAR_7 = VAR_9 * VAR_4->tuples;


 VAR_6 += VAR_2->path.pathtarget->cost.startup;
 VAR_7 += VAR_2->path.pathtarget->cost.per_tuple * VAR_2->path.rows;

 VAR_2->path.startup_cost += VAR_6;
 VAR_2->path.total_cost += VAR_6 + VAR_7;
}
