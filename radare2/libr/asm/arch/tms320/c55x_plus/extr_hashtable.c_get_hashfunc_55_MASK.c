
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 if ((VAR_1 & 0x8000)) {
  if ((unsigned short)(VAR_1 & 0x8000) == 32768) {
   VAR_2 = 295;
  } else {
   VAR_2 = VAR_0;
  }
 } else {
  VAR_2 = 294;
 }
 return VAR_2;
}
