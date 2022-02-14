
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float) ;
 float VAR_0 ;
 int VAR_1 ;

float FUNC_4(float VAR_2, float VAR_3)
{
 float VAR_4;
 uint32_t VAR_5,VAR_6,VAR_7;

 if (FUNC_3(VAR_3) || FUNC_3(VAR_2))
  return VAR_3+VAR_2;
 FUNC_0(VAR_6, VAR_3);
 FUNC_0(VAR_7, VAR_2);
 if (VAR_6 == 0x3f800000)
  return FUNC_1(VAR_2);
 VAR_5 = ((VAR_7>>31)&1) | ((VAR_6>>30)&2);
 VAR_6 &= 0x7fffffff;
 VAR_7 &= 0x7fffffff;


 if (VAR_7 == 0) {
  switch (VAR_5) {
  case 0:
  case 1: return VAR_2;
  case 2: return VAR_0;
  case 3: return -VAR_0;
  }
 }

 if (VAR_6 == 0)
  return VAR_5&1 ? -VAR_0/2 : VAR_0/2;

 if (VAR_6 == 0x7f800000) {
  if (VAR_7 == 0x7f800000) {
   switch (VAR_5) {
   case 0: return VAR_0/4;
   case 1: return -VAR_0/4;
   case 2: return 3*VAR_0/4;
   case 3: return -3*VAR_0/4;
   }
  } else {
   switch (VAR_5) {
   case 0: return 0.0f;
   case 1: return -0.0f;
   case 2: return VAR_0;
   case 3: return -VAR_0;
   }
  }
 }

 if (VAR_6+(26<<23) < VAR_7 || VAR_7 == 0x7f800000)
  return VAR_5&1 ? -VAR_0/2 : VAR_0/2;


 if ((VAR_5&2) && VAR_7+(26<<23) < VAR_6)
  VAR_4 = 0.0;
 else
  VAR_4 = FUNC_1(FUNC_2(VAR_2/VAR_3));
 switch (VAR_5) {
 case 0: return VAR_4;
 case 1: return -VAR_4;
 case 2: return VAR_0 - (VAR_4-VAR_1);
 default:
  return (VAR_4-VAR_1) - VAR_0;
 }
}
