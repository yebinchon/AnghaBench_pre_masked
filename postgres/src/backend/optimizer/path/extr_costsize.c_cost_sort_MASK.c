
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double rows; double startup_cost; double total_cost; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Path ;
typedef int List ;
typedef double Cost ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 double FUNC_2 (double) ;
 double VAR_4 ;
 double FUNC_3 (double,int) ;
 double VAR_5 ;
 double FUNC_4 (long) ;

void
FUNC_5(Path *VAR_6, PlannerInfo *VAR_7,
    List *VAR_8, Cost VAR_9, double VAR_10, int VAR_11,
    Cost VAR_12, int VAR_13,
    double VAR_14)
{
 Cost VAR_15 = VAR_9;
 Cost VAR_16 = 0;
 double VAR_17 = FUNC_3(VAR_10, VAR_11);
 double VAR_18;
 double VAR_19;
 long VAR_20 = VAR_13 * 1024L;

 if (!VAR_3)
  VAR_15 += VAR_2;

 VAR_6->rows = VAR_10;





 if (VAR_10 < 2.0)
  VAR_10 = 2.0;


 VAR_12 += 2.0 * VAR_1;


 if (VAR_14 > 0 && VAR_14 < VAR_10)
 {
  VAR_19 = VAR_14;
  VAR_18 = FUNC_3(VAR_19, VAR_11);
 }
 else
 {
  VAR_19 = VAR_10;
  VAR_18 = VAR_17;
 }

 if (VAR_18 > VAR_20)
 {



  double VAR_21 = FUNC_1(VAR_17 / VAR_0);
  double VAR_22 = VAR_17 / VAR_20;
  double VAR_23 = FUNC_4(VAR_20);
  double VAR_24;
  double VAR_25;






  VAR_15 += VAR_12 * VAR_10 * FUNC_0(VAR_10);




  if (VAR_22 > VAR_23)
   VAR_24 = FUNC_1(FUNC_2(VAR_22) / FUNC_2(VAR_23));
  else
   VAR_24 = 1.0;
  VAR_25 = 2.0 * VAR_21 * VAR_24;

  VAR_15 += VAR_25 *
   (VAR_5 * 0.75 + VAR_4 * 0.25);
 }
 else if (VAR_10 > 2 * VAR_19 || VAR_17 > VAR_20)
 {






  VAR_15 += VAR_12 * VAR_10 * FUNC_0(2.0 * VAR_19);
 }
 else
 {

  VAR_15 += VAR_12 * VAR_10 * FUNC_0(VAR_10);
 }
 VAR_16 += VAR_1 * VAR_10;

 VAR_6->startup_cost = VAR_15;
 VAR_6->total_cost = VAR_15 + VAR_16;
}
