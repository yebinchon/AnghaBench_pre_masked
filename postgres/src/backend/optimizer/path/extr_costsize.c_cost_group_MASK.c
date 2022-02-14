
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double rows; double startup_cost; double total_cost; } ;
struct TYPE_5__ {double per_tuple; scalar_t__ startup; } ;
typedef TYPE_1__ QualCost ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef int List ;
typedef double Cost ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int *,int *,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 double VAR_1 ;

void
FUNC_3(Path *VAR_2, PlannerInfo *VAR_3,
     int VAR_4, double VAR_5,
     List *VAR_6,
     Cost VAR_7, Cost VAR_8,
     double VAR_9)
{
 double VAR_10;
 Cost VAR_11;
 Cost VAR_12;

 VAR_10 = VAR_5;
 VAR_11 = VAR_7;
 VAR_12 = VAR_8;





 VAR_12 += VAR_1 * VAR_9 * VAR_4;





 if (VAR_6)
 {
  QualCost VAR_13;

  FUNC_2(&VAR_13, VAR_6, VAR_3);
  VAR_11 += VAR_13.startup;
  VAR_12 += VAR_13.startup + VAR_10 * VAR_13.per_tuple;

  VAR_10 = FUNC_0(VAR_10 *
           FUNC_1(VAR_3,
                VAR_6,
                0,
                VAR_0,
                ((void*)0)));
 }

 VAR_2->rows = VAR_10;
 VAR_2->startup_cost = VAR_11;
 VAR_2->total_cost = VAR_12;
}
