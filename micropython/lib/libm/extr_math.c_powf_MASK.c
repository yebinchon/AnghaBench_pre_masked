
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 int FUNC_1 (float,int) ;
 float* VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float* VAR_15 ;
 float* VAR_16 ;
 float FUNC_2 (float) ;
 float VAR_17 ;
 float VAR_18 ;
 float VAR_19 ;
 float VAR_20 ;
 float VAR_21 ;
 float VAR_22 ;
 float VAR_23 ;
 float VAR_24 ;
 float FUNC_3 (float,int) ;
 float FUNC_4 (float) ;
 float VAR_25 ;
 float VAR_26 ;

float FUNC_5(float VAR_27, float VAR_28)
{
 float VAR_29,VAR_30,VAR_31,VAR_32,VAR_33,VAR_34;
 float VAR_35,VAR_36,VAR_37,VAR_38,VAR_39,VAR_40,VAR_41,VAR_42,VAR_43,VAR_44;
 int32_t VAR_45,VAR_46,VAR_47,VAR_48,VAR_49;
 int32_t VAR_50,VAR_51,VAR_52,VAR_53,VAR_54;

 FUNC_0(VAR_50, VAR_27);
 FUNC_0(VAR_51, VAR_28);
 VAR_52 = VAR_50 & 0x7fffffff;
 VAR_53 = VAR_51 & 0x7fffffff;


 if (VAR_53 == 0)
  return 1.0f;

 if (VAR_50 == 0x3f800000)
  return 1.0f;

 if (VAR_52 > 0x7f800000 || VAR_53 > 0x7f800000)
  return VAR_27 + VAR_28;






 VAR_48 = 0;
 if (VAR_50 < 0) {
  if (VAR_53 >= 0x4b800000)
   VAR_48 = 2;
  else if (VAR_53 >= 0x3f800000) {
   VAR_47 = (VAR_53>>23) - 0x7f;
   VAR_46 = VAR_53>>(23-VAR_47);
   if ((VAR_46<<(23-VAR_47)) == VAR_53)
    VAR_48 = 2 - (VAR_46 & 1);
  }
 }


 if (VAR_53 == 0x7f800000) {
  if (VAR_52 == 0x3f800000)
   return 1.0f;
  else if (VAR_52 > 0x3f800000)
   return VAR_51 >= 0 ? VAR_28 : 0.0f;
  else if (VAR_52 != 0)
   return VAR_51 >= 0 ? 0.0f: -VAR_28;
 }
 if (VAR_53 == 0x3f800000)
  return VAR_51 >= 0 ? VAR_27 : 1.0f/VAR_27;
 if (VAR_51 == 0x40000000)
  return VAR_27*VAR_27;
 if (VAR_51 == 0x3f000000) {
  if (VAR_50 >= 0)
   return FUNC_4(VAR_27);
 }

 VAR_30 = FUNC_2(VAR_27);

 if (VAR_52 == 0x7f800000 || VAR_52 == 0 || VAR_52 == 0x3f800000) {
  VAR_29 = VAR_30;
  if (VAR_51 < 0)
   VAR_29 = 1.0f/VAR_29;
  if (VAR_50 < 0) {
   if (((VAR_52-0x3f800000)|VAR_48) == 0) {
    VAR_29 = (VAR_29-VAR_29)/(VAR_29-VAR_29);
   } else if (VAR_48 == 1)
    VAR_29 = -VAR_29;
  }
  return VAR_29;
 }

 VAR_40 = 1.0f;
 if (VAR_50 < 0) {
  if (VAR_48 == 0)
   return (VAR_27-VAR_27)/(VAR_27-VAR_27);
  if (VAR_48 == 1)
   VAR_40 = -1.0f;
 }


 if (VAR_53 > 0x4d000000) {

  if (VAR_52 < 0x3f7ffff8)
   return VAR_51 < 0 ? VAR_40*VAR_17*VAR_17 : VAR_40*VAR_25*VAR_25;
  if (VAR_52 > 0x3f800007)
   return VAR_51 > 0 ? VAR_40*VAR_17*VAR_17 : VAR_40*VAR_25*VAR_25;


  VAR_41 = VAR_30 - 1;
  VAR_44 = (VAR_41*VAR_41)*(0.5f - VAR_41*(0.333333333333f - VAR_41*0.25f));
  VAR_42 = VAR_19*VAR_41;
  VAR_43 = VAR_41*VAR_20 - VAR_44*VAR_18;
  VAR_36 = VAR_42 + VAR_43;
  FUNC_0(VAR_54, VAR_36);
  FUNC_1(VAR_36, VAR_54 & 0xfffff000);
  VAR_37 = VAR_43 - (VAR_36-VAR_42);
 } else {
  float VAR_55,VAR_56,VAR_57,VAR_58,VAR_59;
  VAR_49 = 0;

  if (VAR_52 < 0x00800000) {
   VAR_30 *= VAR_26;
   VAR_49 -= 24;
   FUNC_0(VAR_52, VAR_30);
  }
  VAR_49 += ((VAR_52)>>23) - 0x7f;
  VAR_46 = VAR_52 & 0x007fffff;

  VAR_52 = VAR_46 | 0x3f800000;
  if (VAR_46 <= 0x1cc471)
   VAR_47 = 0;
  else if (VAR_46 < 0x5db3d7)
   VAR_47 = 1;
  else {
   VAR_47 = 0;
   VAR_49 += 1;
   VAR_52 -= 0x00800000;
  }
  FUNC_1(VAR_30, VAR_52);


  VAR_42 = VAR_30 - VAR_11[VAR_47];
  VAR_43 = 1.0f/(VAR_30+VAR_11[VAR_47]);
  VAR_39 = VAR_42*VAR_43;
  VAR_56 = VAR_39;
  FUNC_0(VAR_54, VAR_56);
  FUNC_1(VAR_56, VAR_54 & 0xfffff000);

  VAR_54 = ((VAR_52>>1) & 0xfffff000) | 0x20000000;
  FUNC_1(VAR_58, VAR_54 + 0x00400000 + (VAR_47<<21));
  VAR_59 = VAR_30 - (VAR_58 - VAR_11[VAR_47]);
  VAR_57 = VAR_43*((VAR_42 - VAR_56*VAR_58) - VAR_56*VAR_59);

  VAR_55 = VAR_39*VAR_39;
  VAR_38 = VAR_55*VAR_55*(VAR_0+VAR_55*(VAR_1+VAR_55*(VAR_2+VAR_55*(VAR_3+VAR_55*(VAR_4+VAR_55*VAR_5)))));
  VAR_38 += VAR_57*(VAR_56+VAR_39);
  VAR_55 = VAR_56*VAR_56;
  VAR_58 = 3.0f + VAR_55 + VAR_38;
  FUNC_0(VAR_54, VAR_58);
  FUNC_1(VAR_58, VAR_54 & 0xfffff000);
  VAR_59 = VAR_38 - ((VAR_58 - 3.0f) - VAR_55);

  VAR_42 = VAR_56*VAR_58;
  VAR_43 = VAR_57*VAR_58 + VAR_59*VAR_39;

  VAR_33 = VAR_42 + VAR_43;
  FUNC_0(VAR_54, VAR_33);
  FUNC_1(VAR_33, VAR_54 & 0xfffff000);
  VAR_34 = VAR_43 - (VAR_33 - VAR_42);
  VAR_31 = VAR_13*VAR_33;
  VAR_32 = VAR_14*VAR_33 + VAR_34*VAR_12+VAR_16[VAR_47];

  VAR_41 = (float)VAR_49;
  VAR_36 = (((VAR_31 + VAR_32) + VAR_15[VAR_47]) + VAR_41);
  FUNC_0(VAR_54, VAR_36);
  FUNC_1(VAR_36, VAR_54 & 0xfffff000);
  VAR_37 = VAR_32 - (((VAR_36 - VAR_41) - VAR_15[VAR_47]) - VAR_31);
 }


 FUNC_0(VAR_54, VAR_28);
 FUNC_1(VAR_35, VAR_54 & 0xfffff000);
 VAR_34 = (VAR_28-VAR_35)*VAR_36 + VAR_28*VAR_37;
 VAR_33 = VAR_35*VAR_36;
 VAR_29 = VAR_34 + VAR_33;
 FUNC_0(VAR_46, VAR_29);
 if (VAR_46 > 0x43000000)
  return VAR_40*VAR_17*VAR_17;
 else if (VAR_46 == 0x43000000) {
  if (VAR_34 + VAR_24 > VAR_29 - VAR_33)
   return VAR_40*VAR_17*VAR_17;
 } else if ((VAR_46&0x7fffffff) > 0x43160000)
  return VAR_40*VAR_25*VAR_25;
 else if (VAR_46 == 0xc3160000) {
  if (VAR_34 <= VAR_29-VAR_33)
   return VAR_40*VAR_25*VAR_25;
 }



 VAR_45 = VAR_46 & 0x7fffffff;
 VAR_47 = (VAR_45>>23) - 0x7f;
 VAR_49 = 0;
 if (VAR_45 > 0x3f000000) {
  VAR_49 = VAR_46 + (0x00800000>>(VAR_47+1));
  VAR_47 = ((VAR_49&0x7fffffff)>>23) - 0x7f;
  FUNC_1(VAR_41, VAR_49 & ~(0x007fffff>>VAR_47));
  VAR_49 = ((VAR_49&0x007fffff)|0x00800000)>>(23-VAR_47);
  if (VAR_46 < 0)
   VAR_49 = -VAR_49;
  VAR_33 -= VAR_41;
 }
 VAR_41 = VAR_34 + VAR_33;
 FUNC_0(VAR_54, VAR_41);
 FUNC_1(VAR_41, VAR_54 & 0xffff8000);
 VAR_42 = VAR_41*VAR_22;
 VAR_43 = (VAR_34-(VAR_41-VAR_33))*VAR_21 + VAR_41*VAR_23;
 VAR_29 = VAR_42 + VAR_43;
 VAR_44 = VAR_43 - (VAR_29 - VAR_42);
 VAR_41 = VAR_29*VAR_29;
 VAR_36 = VAR_29 - VAR_41*(VAR_6+VAR_41*(VAR_7+VAR_41*(VAR_8+VAR_41*(VAR_9+VAR_41*VAR_10))));
 VAR_38 = (VAR_29*VAR_36)/(VAR_36-2.0f) - (VAR_44+VAR_29*VAR_44);
 VAR_29 = 1.0f - (VAR_38 - VAR_29);
 FUNC_0(VAR_46, VAR_29);
 VAR_46 += VAR_49<<23;
 if ((VAR_46>>23) <= 0)
  VAR_29 = FUNC_3(VAR_29, VAR_49);
 else
  FUNC_1(VAR_29, VAR_46);
 return VAR_40*VAR_29;
}
