
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum background_mode { ____Placeholder_background_mode } background_mode ;
typedef int cairo_t ;
typedef int cairo_surface_t ;
typedef int cairo_pattern_t ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 double FUNC_1 (int *) ;
 double FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,double,double) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,double,double) ;

void FUNC_11(cairo_t *VAR_1, cairo_surface_t *VAR_2,
  enum background_mode VAR_3, int VAR_4, int VAR_5) {
 double VAR_6 = FUNC_2(VAR_2);
 double VAR_7 = FUNC_1(VAR_2);

 FUNC_7(VAR_1);
 switch (VAR_3) {
 case 129:
  FUNC_8(VAR_1,
    (double)VAR_4 / VAR_6,
    (double)VAR_5 / VAR_7);
  FUNC_10(VAR_1, VAR_2, 0, 0);
  break;
 case 133: {
  double VAR_8 = (double)VAR_4 / VAR_5;
  double VAR_9 = VAR_6 / VAR_7;

  if (VAR_8 > VAR_9) {
   double VAR_10 = (double)VAR_4 / VAR_6;
   FUNC_8(VAR_1, VAR_10, VAR_10);
   FUNC_10(VAR_1, VAR_2,
     0, (double)VAR_5 / 2 / VAR_10 - VAR_7 / 2);
  } else {
   double VAR_11 = (double)VAR_5 / VAR_7;
   FUNC_8(VAR_1, VAR_11, VAR_11);
   FUNC_10(VAR_1, VAR_2,
     (double)VAR_4 / 2 / VAR_11 - VAR_6 / 2, 0);
  }
  break;
 }
 case 132: {
  double VAR_12 = (double)VAR_4 / VAR_5;
  double VAR_13 = VAR_6 / VAR_7;

  if (VAR_12 > VAR_13) {
   double VAR_14 = (double)VAR_5 / VAR_7;
   FUNC_8(VAR_1, VAR_14, VAR_14);
   FUNC_10(VAR_1, VAR_2,
     (double)VAR_4 / 2 / VAR_14 - VAR_6 / 2, 0);
  } else {
   double VAR_15 = (double)VAR_4 / VAR_6;
   FUNC_8(VAR_1, VAR_15, VAR_15);
   FUNC_10(VAR_1, VAR_2,
     0, (double)VAR_5 / 2 / VAR_15 - VAR_7 / 2);
  }
  break;
 }
 case 134:
  FUNC_10(VAR_1, VAR_2,
    (double)VAR_4 / 2 - VAR_6 / 2,
    (double)VAR_5 / 2 - VAR_7 / 2);
  break;
 case 128: {
  cairo_pattern_t *VAR_16 = FUNC_4(VAR_2);
  FUNC_5(VAR_16, VAR_0);
  FUNC_9(VAR_1, VAR_16);
  break;
 }
 case 130:
 case 131:
  FUNC_0(0);
  break;
 }
 FUNC_3(VAR_1);
 FUNC_6(VAR_1);
}
