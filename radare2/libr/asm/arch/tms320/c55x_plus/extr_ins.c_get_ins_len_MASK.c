
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;



ut32 FUNC_0(ut8 VAR_0) {
 ut32 VAR_1 = (VAR_0 >> 4) & 0xF;
 ut32 VAR_2 = 0;

 switch (VAR_1) {
 case 0:
 case 1:
  VAR_2 = 2;
  break;
 case 2:
 case 3:
  VAR_2 = 1;
  break;
 case 4:
 case 5:
 case 6:
 case 7:
  VAR_2 = 3;
  break;
 case 8:
 case 9:
 case 10:
  VAR_2 = 4;
  break;
 case 11:
 case 12:
 case 13:
  VAR_2 = 5;
  break;
 case 14:
  VAR_2 = 6;
  break;
 case 15:
  VAR_2 = 7;
  break;
 }

 return VAR_2;
}
