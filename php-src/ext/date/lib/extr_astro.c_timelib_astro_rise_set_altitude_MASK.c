
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int h; int i; int s; scalar_t__ sse; int d; int m; int y; } ;
typedef TYPE_1__ timelib_time ;
typedef scalar_t__ timelib_sll ;


 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (scalar_t__) ;
 int FUNC_4 (double,double*,double*,double*) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int *) ;

int FUNC_11(timelib_time *VAR_0, double VAR_1, double VAR_2, double VAR_3, int VAR_4, double *VAR_5, double *VAR_6, timelib_sll *VAR_7, timelib_sll *VAR_8, timelib_sll *VAR_9)
{
 double VAR_10,
 VAR_11,
 VAR_12,
 VAR_13,
 VAR_14,
 VAR_15,
 VAR_16,
 VAR_17;
 timelib_time *VAR_18;
 timelib_sll VAR_19, VAR_20;

 int VAR_21 = 0;


 VAR_20 = VAR_0->sse;
 VAR_0->h = 12;
 VAR_0->i = VAR_0->s = 0;
 FUNC_10(VAR_0, ((void*)0));



 VAR_18 = FUNC_7();
 VAR_18->y = VAR_0->y;
 VAR_18->m = VAR_0->m;
 VAR_18->d = VAR_0->d;
 VAR_18->h = VAR_18->i = VAR_18->s = 0;
 FUNC_10(VAR_18, ((void*)0));


 VAR_19 = VAR_18->sse;
 VAR_10 = FUNC_9(VAR_19) + 2 - VAR_1/360.0;


 VAR_17 = FUNC_3(FUNC_1(VAR_10) + 180.0 + VAR_1);


 FUNC_4( VAR_10, &VAR_12, &VAR_13, &VAR_11 );


 VAR_16 = 12.0 - FUNC_2(VAR_17 - VAR_12) / 15.0;


 VAR_14 = 0.2666 / VAR_11;


 if (VAR_4) {
  VAR_3 -= VAR_14;
 }



 {
  double VAR_22;
  VAR_22 = (FUNC_6(VAR_3) - FUNC_6(VAR_2) * FUNC_6(VAR_13)) / (FUNC_5(VAR_2) * FUNC_5(VAR_13));
  *VAR_9 = VAR_18->sse + (VAR_16 * 3600);
  if (VAR_22 >= 1.0) {
   VAR_21 = -1;
   VAR_15 = 0.0;

   *VAR_7 = *VAR_8 = VAR_18->sse + (VAR_16 * 3600);
  } else if (VAR_22 <= -1.0) {
   VAR_21 = +1;
   VAR_15 = 12.0;

   *VAR_7 = VAR_0->sse - (12 * 3600);
   *VAR_8 = VAR_0->sse + (12 * 3600);
  } else {
   VAR_15 = FUNC_0(VAR_22) / 15.0;


   *VAR_7 = ((VAR_16 - VAR_15) * 3600) + VAR_18->sse;
   *VAR_8 = ((VAR_16 + VAR_15) * 3600) + VAR_18->sse;

   *VAR_5 = (VAR_16 - VAR_15);
   *VAR_6 = (VAR_16 + VAR_15);
  }
 }


 FUNC_8(VAR_18);
 VAR_0->sse = VAR_20;

 return VAR_21;
}
