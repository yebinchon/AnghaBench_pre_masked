
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {double inner_run_cost; double inner_rescan_run_cost; double startup_cost; double total_cost; double run_cost; } ;
struct TYPE_10__ {scalar_t__ inner_unique; } ;
struct TYPE_9__ {double rows; double startup_cost; double total_cost; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Path ;
typedef scalar_t__ JoinType ;
typedef TYPE_2__ JoinPathExtraData ;
typedef TYPE_3__ JoinCostWorkspace ;
typedef double Cost ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,double*,double*) ;

void
FUNC_1(PlannerInfo *VAR_2, JoinCostWorkspace *VAR_3,
       JoinType VAR_4,
       Path *VAR_5, Path *VAR_6,
       JoinPathExtraData *VAR_7)
{
 Cost VAR_8 = 0;
 Cost VAR_9 = 0;
 double VAR_10 = VAR_5->rows;
 Cost VAR_11;
 Cost VAR_12;
 Cost VAR_13;
 Cost VAR_14;


 FUNC_0(VAR_2, VAR_6,
    &VAR_11,
    &VAR_12);
 VAR_8 += VAR_5->startup_cost + VAR_6->startup_cost;
 VAR_9 += VAR_5->total_cost - VAR_5->startup_cost;
 if (VAR_10 > 1)
  VAR_9 += (VAR_10 - 1) * VAR_11;

 VAR_13 = VAR_6->total_cost - VAR_6->startup_cost;
 VAR_14 = VAR_12 - VAR_11;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0 ||
  VAR_7->inner_unique)
 {
  VAR_3->inner_run_cost = VAR_13;
  VAR_3->inner_rescan_run_cost = VAR_14;
 }
 else
 {

  VAR_9 += VAR_13;
  if (VAR_10 > 1)
   VAR_9 += (VAR_10 - 1) * VAR_14;
 }




 VAR_3->startup_cost = VAR_8;
 VAR_3->total_cost = VAR_8 + VAR_9;

 VAR_3->run_cost = VAR_9;
}
