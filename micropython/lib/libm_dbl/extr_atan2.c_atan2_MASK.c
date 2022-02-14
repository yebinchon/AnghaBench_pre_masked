
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 scalar_t__ FUNC_3 (double) ;
 double VAR_0 ;
 int VAR_1 ;

double FUNC_4(double VAR_2, double VAR_3)
{
 double VAR_4;
 uint32_t VAR_5,VAR_6,VAR_7,VAR_8,VAR_9;

 if (FUNC_3(VAR_3) || FUNC_3(VAR_2))
  return VAR_3+VAR_2;
 FUNC_0(VAR_8, VAR_6, VAR_3);
 FUNC_0(VAR_9, VAR_7, VAR_2);
 if (((VAR_8-0x3ff00000) | VAR_6) == 0)
  return FUNC_1(VAR_2);
 VAR_5 = ((VAR_9>>31)&1) | ((VAR_8>>30)&2);
 VAR_8 = VAR_8 & 0x7fffffff;
 VAR_9 = VAR_9 & 0x7fffffff;


 if ((VAR_9|VAR_7) == 0) {
  switch(VAR_5) {
  case 0:
  case 1: return VAR_2;
  case 2: return VAR_0;
  case 3: return -VAR_0;
  }
 }

 if ((VAR_8|VAR_6) == 0)
  return VAR_5&1 ? -VAR_0/2 : VAR_0/2;

 if (VAR_8 == 0x7ff00000) {
  if (VAR_9 == 0x7ff00000) {
   switch(VAR_5) {
   case 0: return VAR_0/4;
   case 1: return -VAR_0/4;
   case 2: return 3*VAR_0/4;
   case 3: return -3*VAR_0/4;
   }
  } else {
   switch(VAR_5) {
   case 0: return 0.0;
   case 1: return -0.0;
   case 2: return VAR_0;
   case 3: return -VAR_0;
   }
  }
 }

 if (VAR_8+(64<<20) < VAR_9 || VAR_9 == 0x7ff00000)
  return VAR_5&1 ? -VAR_0/2 : VAR_0/2;


 if ((VAR_5&2) && VAR_9+(64<<20) < VAR_8)
  VAR_4 = 0;
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
