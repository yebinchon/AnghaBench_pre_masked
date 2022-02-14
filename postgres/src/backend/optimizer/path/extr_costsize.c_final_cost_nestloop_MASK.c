
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_21__ {double outer_match_frac; double match_count; } ;
struct TYPE_27__ {TYPE_3__ semifactors; scalar_t__ inner_unique; } ;
struct TYPE_18__ {double rows; scalar_t__ parallel_workers; double startup_cost; double total_cost; TYPE_5__* pathtarget; TYPE_2__* parent; TYPE_1__* param_info; } ;
struct TYPE_26__ {scalar_t__ jointype; TYPE_12__ path; int joinrestrictinfo; TYPE_7__* innerjoinpath; TYPE_7__* outerjoinpath; } ;
struct TYPE_25__ {double rows; } ;
struct TYPE_24__ {double startup; double per_tuple; } ;
struct TYPE_22__ {double startup; int per_tuple; } ;
struct TYPE_23__ {TYPE_4__ cost; } ;
struct TYPE_20__ {double rows; } ;
struct TYPE_19__ {double ppi_rows; } ;
struct TYPE_17__ {double startup_cost; double run_cost; double inner_run_cost; double inner_rescan_run_cost; } ;
typedef double Selectivity ;
typedef TYPE_6__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_7__ Path ;
typedef TYPE_8__ NestPath ;
typedef TYPE_9__ JoinPathExtraData ;
typedef TYPE_10__ JoinCostWorkspace ;
typedef double Cost ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (double) ;
 int FUNC_1 (TYPE_6__*,int ,int *) ;
 double VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 double FUNC_2 (TYPE_12__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (double) ;
 double FUNC_5 (double) ;

void
FUNC_6(PlannerInfo *VAR_5, NestPath *VAR_6,
     JoinCostWorkspace *VAR_7,
     JoinPathExtraData *VAR_8)
{
 Path *VAR_9 = VAR_6->outerjoinpath;
 Path *VAR_10 = VAR_6->innerjoinpath;
 double VAR_11 = VAR_9->rows;
 double VAR_12 = VAR_10->rows;
 Cost VAR_13 = VAR_7->startup_cost;
 Cost VAR_14 = VAR_7->run_cost;
 Cost VAR_15;
 QualCost VAR_16;
 double VAR_17;


 if (VAR_11 <= 0 || FUNC_4(VAR_11))
  VAR_11 = 1;
 if (VAR_12 <= 0 || FUNC_4(VAR_12))
  VAR_12 = 1;


 if (VAR_6->path.param_info)
  VAR_6->path.rows = VAR_6->path.param_info->ppi_rows;
 else
  VAR_6->path.rows = VAR_6->path.parent->rows;


 if (VAR_6->path.parallel_workers > 0)
 {
  double VAR_18 = FUNC_2(&VAR_6->path);

  VAR_6->path.rows =
   FUNC_0(VAR_6->path.rows / VAR_18);
 }






 if (!VAR_4)
  VAR_13 += VAR_3;



 if (VAR_6->jointype == VAR_1 || VAR_6->jointype == VAR_0 ||
  VAR_8->inner_unique)
 {




  Cost VAR_19 = VAR_7->inner_run_cost;
  Cost VAR_20 = VAR_7->inner_rescan_run_cost;
  double VAR_21;
  double VAR_22;
  Selectivity VAR_23;
  VAR_21 = FUNC_5(VAR_11 * VAR_8->semifactors.outer_match_frac);
  VAR_22 = VAR_11 - VAR_21;
  VAR_23 = 2.0 / (VAR_8->semifactors.match_count + 1.0);





  VAR_17 = VAR_21 * VAR_12 * VAR_23;
  if (FUNC_3(VAR_6))
  {
   VAR_14 += VAR_19 * VAR_23;
   if (VAR_21 > 1)
    VAR_14 += (VAR_21 - 1) * VAR_20 * VAR_23;







   VAR_14 += VAR_22 *
    VAR_20 / VAR_12;





  }
  else
  {
   VAR_17 += VAR_22 * VAR_12;


   VAR_14 += VAR_19;
   if (VAR_22 >= 1)
    VAR_22 -= 1;
   else
    VAR_21 -= 1;


   if (VAR_21 > 0)
    VAR_14 += VAR_21 * VAR_20 * VAR_23;


   if (VAR_22 > 0)
    VAR_14 += VAR_22 * VAR_20;
  }
 }
 else
 {



  VAR_17 = VAR_11 * VAR_12;
 }


 FUNC_1(&VAR_16, VAR_6->joinrestrictinfo, VAR_5);
 VAR_13 += VAR_16.startup;
 VAR_15 = VAR_2 + VAR_16.per_tuple;
 VAR_14 += VAR_15 * VAR_17;


 VAR_13 += VAR_6->path.pathtarget->cost.startup;
 VAR_14 += VAR_6->path.pathtarget->cost.per_tuple * VAR_6->path.rows;

 VAR_6->path.startup_cost = VAR_13;
 VAR_6->path.total_cost = VAR_13 + VAR_14;
}
