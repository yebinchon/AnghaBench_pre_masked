
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
bool FUNC_0(struct device *VAR_18, unsigned int VAR_19)
{
 switch (VAR_19) {
 case 128:
 case 141:
 case 140:
 case 135:
 case 134:
 case 133:
 case 132:
 case 138:
 case 137:
 case 136:
 case 130:
 case 129:
 case 139:
 case 131:
  return 1;
 default:
  if ((VAR_19 >= VAR_2 && VAR_19 <= VAR_3) ||
      (VAR_19 >= VAR_4 && VAR_19 <= VAR_5) ||
      (VAR_19 >= VAR_0 && VAR_19 <= VAR_1) ||
      (VAR_19 >= VAR_8 && VAR_19 <= VAR_9) ||
      (VAR_19 >= VAR_10 && VAR_19 <= VAR_11) ||
      (VAR_19 >= VAR_6 && VAR_19 <= VAR_7) ||
      (VAR_19 >= VAR_14 && VAR_19 <= VAR_15) ||
      (VAR_19 >= VAR_16 && VAR_19 <= VAR_17) ||
      (VAR_19 >= VAR_12 && VAR_19 <= VAR_13))
   return 1;
  else
   return 0;
 }
}
