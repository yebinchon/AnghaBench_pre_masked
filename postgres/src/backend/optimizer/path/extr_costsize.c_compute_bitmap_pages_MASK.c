
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double tuples; int pages; } ;
typedef double Selectivity ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int Cost ;


 double FUNC_0 (int ,double) ;
 double FUNC_1 (double,int) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 int FUNC_4 (int *,int *,double*) ;
 int FUNC_5 (int *) ;
 double FUNC_6 (double,int,int ,int *) ;
 long FUNC_7 (long) ;
 long VAR_0 ;

double
FUNC_8(PlannerInfo *VAR_1, RelOptInfo *VAR_2, Path *VAR_3,
      int VAR_4, Cost *VAR_5, double *VAR_6)
{
 Cost VAR_7;
 Selectivity VAR_8;
 double VAR_9;
 double VAR_10;
 double VAR_11;
 double VAR_12;
 long VAR_13;





 FUNC_4(VAR_3, &VAR_7, &VAR_8);




 VAR_11 = FUNC_3(VAR_8 * VAR_2->tuples);

 VAR_9 = (VAR_2->pages > 1) ? (double) VAR_2->pages : 1.0;






 VAR_10 = (2.0 * VAR_9 * VAR_11) / (2.0 * VAR_9 + VAR_11);
 VAR_12 = FUNC_1(VAR_10, VAR_2->pages);
 VAR_13 = FUNC_7(VAR_0 * 1024L);

 if (VAR_4 > 1)
 {






  VAR_10 = FUNC_6(VAR_11 * VAR_4,
           VAR_2->pages,
           FUNC_5(VAR_3),
           VAR_1);
  VAR_10 /= VAR_4;
 }

 if (VAR_10 >= VAR_9)
  VAR_10 = VAR_9;
 else
  VAR_10 = FUNC_2(VAR_10);

 if (VAR_13 < VAR_12)
 {
  double VAR_14;
  double VAR_15;
  VAR_15 = FUNC_0(0, VAR_12 - VAR_13 / 2);
  VAR_14 = VAR_12 - VAR_15;
  if (VAR_15 > 0)
   VAR_11 =
    FUNC_3(VAR_8 *
         (VAR_14 / VAR_12) * VAR_2->tuples +
         (VAR_15 / VAR_12) * VAR_2->tuples);
 }

 if (VAR_5)
  *VAR_5 = VAR_7;
 if (VAR_6)
  *VAR_6 = VAR_11;

 return VAR_10;
}
