
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double rows; double startup_cost; double total_cost; } ;
struct TYPE_11__ {scalar_t__ num_workers; TYPE_1__ path; } ;
struct TYPE_10__ {double ppi_rows; } ;
struct TYPE_9__ {double rows; } ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_3__ ParamPathInfo ;
typedef TYPE_4__ GatherMergePath ;
typedef double Cost ;


 int FUNC_0 (int) ;
 double FUNC_1 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;

void
FUNC_2(GatherMergePath *VAR_5, PlannerInfo *VAR_6,
      RelOptInfo *VAR_7, ParamPathInfo *VAR_8,
      Cost VAR_9, Cost VAR_10,
      double *VAR_11)
{
 Cost VAR_12 = 0;
 Cost VAR_13 = 0;
 Cost VAR_14;
 double VAR_15;
 double VAR_16;


 if (VAR_11)
  VAR_5->path.rows = *VAR_11;
 else if (VAR_8)
  VAR_5->path.rows = VAR_8->ppi_rows;
 else
  VAR_5->path.rows = VAR_7->rows;

 if (!VAR_2)
  VAR_12 += VAR_1;






 FUNC_0(VAR_5->num_workers > 0);
 VAR_15 = (double) VAR_5->num_workers + 1;
 VAR_16 = FUNC_1(VAR_15);


 VAR_14 = 2.0 * VAR_0;


 VAR_12 += VAR_14 * VAR_15 * VAR_16;


 VAR_13 += VAR_5->path.rows * VAR_14 * VAR_16;


 VAR_13 += VAR_0 * VAR_5->path.rows;







 VAR_12 += VAR_3;
 VAR_13 += VAR_4 * VAR_5->path.rows * 1.05;

 VAR_5->path.startup_cost = VAR_12 + VAR_9;
 VAR_5->path.total_cost = (VAR_12 + VAR_13 + VAR_10);
}
