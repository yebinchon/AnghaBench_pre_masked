
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_5__ {int trueColor; double const* red; double const* green; double const* blue; double const* alpha; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,int,int) ;
 double const FUNC_2 (int const) ;
 double const FUNC_3 (int const) ;
 double const FUNC_4 (int const) ;
 double const FUNC_5 (int const) ;
 int FUNC_6 (TYPE_1__*,int,int,int const) ;
 int FUNC_7 (TYPE_1__*,int,int,int const) ;

__attribute__((used)) static int FUNC_8(gdImagePtr VAR_1, const double VAR_2, const double VAR_3, const int VAR_4)
{

 int VAR_5 = (int)(VAR_2);
 int VAR_6 = (int)(VAR_3);
 const double VAR_7 = VAR_2 - (double)VAR_5;
 const double VAR_8 = VAR_3 - (double)VAR_6;
 const double VAR_9 = (double) 1.0 - VAR_7;
 const double VAR_10 = (double) 1.0 - VAR_8;
 const double VAR_11 = VAR_7 * VAR_8;
 const double VAR_12 = VAR_9 * VAR_8;
 const double VAR_13 = VAR_7 * VAR_10;
 const double VAR_14 = VAR_9 * VAR_10;


 const int VAR_15 = VAR_1->trueColor == 1 ? FUNC_7(VAR_1, VAR_5, VAR_6, VAR_4) : FUNC_6(VAR_1, VAR_5, VAR_6, VAR_4);
 const int VAR_16 = VAR_1->trueColor == 1 ? FUNC_7(VAR_1, VAR_5 - 1, VAR_6, VAR_4) : FUNC_6(VAR_1, VAR_5 - 1, VAR_6, VAR_4);
 const int VAR_17 = VAR_1->trueColor == 1 ? FUNC_7(VAR_1, VAR_5, VAR_6 - 1, VAR_4) : FUNC_6(VAR_1, VAR_5, VAR_6 - 1, VAR_4);
 const int VAR_18 = VAR_1->trueColor == 1 ? FUNC_7(VAR_1, VAR_5 - 1, VAR_6 - 1, VAR_4) : FUNC_6(VAR_1, VAR_5, VAR_6 - 1, VAR_4);
 int VAR_19, VAR_20, VAR_21, VAR_22;

 if (VAR_2 < 0) VAR_5--;
 if (VAR_3 < 0) VAR_6--;


 if (VAR_1->trueColor) {
  VAR_19 = (int)(VAR_11*FUNC_5(VAR_15) + VAR_12*FUNC_5(VAR_16) + VAR_13*FUNC_5(VAR_17) + VAR_14*FUNC_5(VAR_18));
  VAR_20 = (int)(VAR_11*FUNC_4(VAR_15) + VAR_12*FUNC_4(VAR_16) + VAR_13*FUNC_4(VAR_17) + VAR_14*FUNC_4(VAR_18));
  VAR_21 = (int)(VAR_11*FUNC_3(VAR_15) + VAR_12*FUNC_3(VAR_16) + VAR_13*FUNC_3(VAR_17) + VAR_14*FUNC_3(VAR_18));
  VAR_22 = (int)(VAR_11*FUNC_2(VAR_15) + VAR_12*FUNC_2(VAR_16) + VAR_13*FUNC_2(VAR_17) + VAR_14*FUNC_2(VAR_18));
 } else {
  VAR_19 = (int)(VAR_11*VAR_1->red[(VAR_15)] + VAR_12*VAR_1->red[(VAR_16)] + VAR_13*VAR_1->red[(VAR_17)] + VAR_14*VAR_1->red[(VAR_18)]);
  VAR_20 = (int)(VAR_11*VAR_1->green[(VAR_15)] + VAR_12*VAR_1->green[(VAR_16)] + VAR_13*VAR_1->green[(VAR_17)] + VAR_14*VAR_1->green[(VAR_18)]);
  VAR_21 = (int)(VAR_11*VAR_1->blue[(VAR_15)] + VAR_12*VAR_1->blue[(VAR_16)] + VAR_13*VAR_1->blue[(VAR_17)] + VAR_14*VAR_1->blue[(VAR_18)]);
  VAR_22 = (int)(VAR_11*VAR_1->alpha[(VAR_15)] + VAR_12*VAR_1->alpha[(VAR_16)] + VAR_13*VAR_1->alpha[(VAR_17)] + VAR_14*VAR_1->alpha[(VAR_18)]);
 }

 VAR_19 = FUNC_0(VAR_19, 0, 255);
 VAR_20 = FUNC_0(VAR_20, 0, 255);
 VAR_21 = FUNC_0(VAR_21, 0, 255);
 VAR_22 = FUNC_0(VAR_22, 0, VAR_0);
 return FUNC_1(VAR_19, VAR_20, VAR_21, VAR_22);
}
