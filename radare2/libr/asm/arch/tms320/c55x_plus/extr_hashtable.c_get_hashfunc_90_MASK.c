
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;
 st32 VAR_4;

 VAR_2 = VAR_1 & 0x1F901B9;
 if ( (VAR_1 & 0x1F901B9u) <= 0x1810101 ) {
  if ((VAR_1 & 0x1F901B9) == 25231617) {
   return 498;
  }
  if ( (ut32)VAR_2 <= 0x1000180 ) {
   if ( VAR_2 != 16777600 ) {
    if (VAR_2 == 8454401) {
     return 497;
    }
    if (VAR_2 == 8454529) {
     return 499;
    }
    return VAR_0;
   }
   return 489;
  }
  if (VAR_2 == 20971904) {
   return 489;
  }
  return VAR_0;
 }
 VAR_3 = VAR_2 - 25231744;
 if ( VAR_3 ) {
  VAR_4 = VAR_3 - 1;
  if (!VAR_4) {
   return 500;
  }


  VAR_4 -= 0x3FFFFF;
  if(VAR_4 != 0) {
   return VAR_0;
  }




 }
 return 496;
}
