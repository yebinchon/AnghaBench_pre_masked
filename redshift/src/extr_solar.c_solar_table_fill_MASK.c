
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double* VAR_3 ;
 double FUNC_4 (double,double,double,double,double) ;
 double FUNC_5 (double,double) ;

void
FUNC_6(double VAR_4, double VAR_5, double VAR_6, double *VAR_7)
{

 double VAR_8 = FUNC_2(VAR_4);


 double VAR_9 = FUNC_3(VAR_8);
 double VAR_10 = FUNC_1(VAR_9);


 double VAR_11 = FUNC_5(VAR_10, VAR_6);
 double VAR_12 = VAR_9 - 0.5 + VAR_11/1440.0;
 double VAR_13 = FUNC_1(VAR_12);
 VAR_7[VAR_2] = FUNC_0(VAR_12);


 VAR_7[VAR_1] = FUNC_0(VAR_12 + 0.5);


 for (int VAR_14 = 2; VAR_14 < VAR_0; VAR_14++) {
  double VAR_15 = VAR_3[VAR_14];
  double VAR_16 =
   FUNC_4(VAR_10, VAR_13, VAR_5, VAR_6, VAR_15);
  VAR_7[VAR_14] = FUNC_0(VAR_9 - 0.5 + VAR_16/1440.0);
 }
}
