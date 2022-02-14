
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef double double_t ;


 int FUNC_0 (double,int ) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 double VAR_15 ;
 double VAR_16 ;
 double VAR_17 ;
 double VAR_18 ;
 double VAR_19 ;
 double VAR_20 ;
 double VAR_21 ;
 double VAR_22 ;
 double VAR_23 ;
 double VAR_24 ;
 double VAR_25 ;
 double VAR_26 ;
 double VAR_27 ;
 double VAR_28 ;
 double VAR_29 ;

__attribute__((used)) static double FUNC_4(uint32_t VAR_30, double VAR_31)
{
 double_t VAR_32,VAR_33,VAR_34;
 double VAR_35;

 if (VAR_30 < 0x3ff40000)
  return FUNC_1(VAR_31);

 VAR_31 = FUNC_3(VAR_31);
 VAR_32 = 1/(VAR_31*VAR_31);
 if (VAR_30 < 0x4006db6d) {
  VAR_33 = VAR_0+VAR_32*(VAR_1+VAR_32*(VAR_2+VAR_32*(VAR_3+VAR_32*(VAR_4+VAR_32*(
       VAR_5+VAR_32*(VAR_6+VAR_32*VAR_7))))));
  VAR_34 = 1.0+VAR_32*(VAR_15+VAR_32*(VAR_16+VAR_32*(VAR_17+VAR_32*(VAR_18+VAR_32*(
       VAR_19+VAR_32*(VAR_20+VAR_32*(VAR_21+VAR_32*VAR_22)))))));
 } else {
  VAR_33 = VAR_8+VAR_32*(VAR_9+VAR_32*(VAR_10+VAR_32*(VAR_11+VAR_32*(VAR_12+VAR_32*(
       VAR_13+VAR_32*VAR_14)))));
  VAR_34 = 1.0+VAR_32*(VAR_23+VAR_32*(VAR_24+VAR_32*(VAR_25+VAR_32*(VAR_26+VAR_32*(
       VAR_27+VAR_32*(VAR_28+VAR_32*VAR_29))))));
 }
 VAR_35 = VAR_31;
 FUNC_0(VAR_35,0);
 return FUNC_2(-VAR_35*VAR_35-0.5625)*FUNC_2((VAR_35-VAR_31)*(VAR_35+VAR_31)+VAR_33/VAR_34)/VAR_31;
}
