
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;



__attribute__((used)) static ut32 FUNC_0(ut64 VAR_0) {
 ut64 VAR_1 = 0;
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < 64; VAR_2 += 8) {
  ut8 VAR_4 = (VAR_0 >> VAR_2) & 0xff;
  if (!VAR_4) {
   VAR_1 += 8;
  } else {
   for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
    if (!((VAR_4 >> VAR_3) & 1)) {
     VAR_1++;
    } else {
     break;
    }
   }
   break;
  }
 }
 return VAR_1;
}
