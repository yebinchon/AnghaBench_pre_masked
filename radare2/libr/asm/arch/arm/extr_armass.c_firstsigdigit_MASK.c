
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



__attribute__((used)) static st32 FUNC_0 (ut32 VAR_0) {
 st32 VAR_1 = -1;
 st32 VAR_2 = -1;
 ut32 VAR_3 = 0x80000000;
 ut32 VAR_4 = 0x1;
 ut32 VAR_5;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++ ) {
  if ( (VAR_3 & VAR_0) && (VAR_1 == -1)) {
   VAR_1 = VAR_5;
  }
  if ( (VAR_4 & VAR_0) && (VAR_2 == -1)) {
   VAR_2 = 32-VAR_5;
  }
  VAR_3 >>= 1;
  VAR_4 <<= 1;
 }

 if ((VAR_2-VAR_1) < 9) {
  return VAR_1;
 }
 return -1;
}
