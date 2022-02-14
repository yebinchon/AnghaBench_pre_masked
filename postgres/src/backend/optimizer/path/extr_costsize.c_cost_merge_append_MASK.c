
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double startup_cost; double total_cost; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Path ;
typedef int List ;
typedef double Cost ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double VAR_1 ;
 double VAR_2 ;

void
FUNC_1(Path *VAR_3, PlannerInfo *VAR_4,
      List *VAR_5, int VAR_6,
      Cost VAR_7, Cost VAR_8,
      double VAR_9)
{
 Cost VAR_10 = 0;
 Cost VAR_11 = 0;
 Cost VAR_12;
 double VAR_13;
 double VAR_14;




 VAR_13 = (VAR_6 < 2) ? 2.0 : (double) VAR_6;
 VAR_14 = FUNC_0(VAR_13);


 VAR_12 = 2.0 * VAR_1;


 VAR_10 += VAR_12 * VAR_13 * VAR_14;


 VAR_11 += VAR_9 * VAR_12 * VAR_14;





 VAR_11 += VAR_2 * VAR_0 * VAR_9;

 VAR_3->startup_cost = VAR_10 + VAR_7;
 VAR_3->total_cost = VAR_10 + VAR_11 + VAR_8;
}
