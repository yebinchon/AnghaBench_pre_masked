
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_6__ {scalar_t__ interpolation_id; int trueColor; scalar_t__ (* interpolation ) (double) ;} ;


 double FUNC_0 (double,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int) ;
 double FUNC_2 (int const) ;
 double FUNC_3 (int const) ;
 double FUNC_4 (int const) ;
 double FUNC_5 (int const) ;
 int FUNC_6 (TYPE_1__*,double const,double const,int const) ;
 int FUNC_7 (TYPE_1__*,int const,int const,int const) ;
 int FUNC_8 (TYPE_1__*,int const,int const,int const) ;
 scalar_t__ FUNC_9 (double) ;
 scalar_t__ FUNC_10 (double) ;

int FUNC_11(gdImagePtr VAR_5, const double VAR_6, const double VAR_7, const int VAR_8)
{
 const int VAR_9=(int)((VAR_6) < 0 ? VAR_6 - 1: VAR_6);
 const int VAR_10=(int)((VAR_7) < 0 ? VAR_7 - 1: VAR_7);
 int VAR_11;
 int VAR_12;
 double VAR_13, VAR_14;
 double VAR_15[12], VAR_16[4];
 double VAR_17 = 0.0f, VAR_18 = 0.0f, VAR_19 = 0.0f, VAR_20 = 0.0f;


 if (VAR_5->interpolation_id == VAR_1 || VAR_5->interpolation_id == VAR_0 || VAR_5->interpolation_id == VAR_2) {
  return -1;
 }

 if (VAR_5->interpolation_id == VAR_3) {
  return FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);
 }

 if (VAR_5->interpolation_id == VAR_2) {
  if (VAR_5->trueColor == 1) {
   return FUNC_8(VAR_5, VAR_9, VAR_10, VAR_8);
  } else {
   return FUNC_7(VAR_5, VAR_9, VAR_10, VAR_8);
  }
 }
 if (VAR_5->interpolation) {
  for (VAR_12=0; VAR_12<4; VAR_12++) {
   VAR_15[VAR_12] = (double) VAR_5->interpolation((double)(VAR_9+VAR_12-1-VAR_6));
   VAR_16[VAR_12] = (double) VAR_5->interpolation((double)(VAR_10+VAR_12-1-VAR_7));
  }
 } else {
  return -1;
 }





 for (VAR_11 = VAR_10-1; VAR_11 < VAR_10+3; VAR_11++) {
  int VAR_21;
  VAR_14 = VAR_16[VAR_11-(VAR_10-1)];
  if (VAR_5->trueColor) {
   for (VAR_21=VAR_9-1; VAR_21<VAR_9+3; VAR_21++) {
    const int VAR_22 = FUNC_8(VAR_5, VAR_21, VAR_11, VAR_8);

    VAR_13 = VAR_14 * VAR_15[VAR_21-(VAR_9-1)];
    VAR_17 += VAR_13 * FUNC_5(VAR_22);
    VAR_18 += VAR_13 * FUNC_4(VAR_22);
    VAR_19 += VAR_13 * FUNC_3(VAR_22);
    VAR_20 += VAR_13 * FUNC_2(VAR_22);
   }
  } else {
   for (VAR_21=VAR_9-1; VAR_21<VAR_9+3; VAR_21++) {
    const int VAR_23 = FUNC_7(VAR_5, VAR_21, VAR_11, VAR_8);

    VAR_13 = VAR_14 * VAR_15[VAR_21-(VAR_9-1)];
    VAR_17 += VAR_13 * FUNC_5(VAR_23);
    VAR_18 += VAR_13 * FUNC_4(VAR_23);
    VAR_19 += VAR_13 * FUNC_3(VAR_23);
    VAR_20 += VAR_13 * FUNC_2(VAR_23);
   }
  }
 }

 VAR_17 = FUNC_0(VAR_17, 0, 255);
 VAR_18 = FUNC_0(VAR_18, 0, 255);
 VAR_19 = FUNC_0(VAR_19, 0, 255);
 VAR_20 = FUNC_0(VAR_20, 0, VAR_4);

 return FUNC_1(((int)VAR_17), ((int)VAR_18), ((int)VAR_19), ((int)VAR_20));
}
