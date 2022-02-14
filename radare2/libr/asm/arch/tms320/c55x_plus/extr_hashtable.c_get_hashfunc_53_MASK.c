
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2 = VAR_1 & 0x8200;
 st32 VAR_3;

 if (VAR_1 & 0x8200) {
  if (VAR_2 == 512) {
   VAR_3 = 530;
  } else {
   VAR_3 = (VAR_2==0x8000)? 297: VAR_0;
  }
 } else {
  VAR_3 = 355;
 }
 return VAR_3;
}
