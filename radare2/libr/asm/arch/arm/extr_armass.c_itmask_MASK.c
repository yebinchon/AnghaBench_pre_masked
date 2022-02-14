
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ut32 FUNC_3(char *VAR_0) {
 ut32 VAR_1 = 0;
 ut32 VAR_2, VAR_3;
 FUNC_0 (VAR_0, 0);
 if (2 > FUNC_2 (VAR_0)) {
  return 0;
 }
 if (FUNC_1 (VAR_0, "it")) {
  VAR_0 += 2;
  VAR_1 |= 1;
  if (FUNC_2(VAR_0) > 3) {
   return 0;
  }
  VAR_1 |= (FUNC_2 (VAR_0) & 0x3) << 4;
  VAR_3 = FUNC_2 (VAR_0);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++, VAR_0++ ) {
   if (*VAR_0 == 'e') {
    VAR_1 |= 1 << (3 - VAR_2);
    continue;
   }
   if (*VAR_0 == 't') {
    continue;
   }
   return 0;
  }
  return VAR_1;
 }
 return 0;
}
