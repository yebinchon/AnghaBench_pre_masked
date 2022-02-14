
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ut8 FUNC_2 (char *VAR_0, ut8 *VAR_1) {
 const char VAR_2[] = {'c', 'x', 's', 'f', 0};
 int VAR_3 = 0;
 int VAR_4, VAR_5;
 if (FUNC_0 (VAR_0, "spsr_")) {
  *VAR_1 = 1;
 } else {
  *VAR_1 = 0;
 }

 if (FUNC_0 (VAR_0, "apsr_")) {
  if (!(FUNC_1 (VAR_0+5, "g"))) {
   return 0x4;
  }
  if (!(FUNC_1 (VAR_0+5, "nzcvq"))) {
   return 0x8;
  }
  if (!(FUNC_1 (VAR_0+5, "nzcvqg"))) {
   return 0xc;
  }
 }
 if (FUNC_0 (VAR_0, "cpsr_") || FUNC_0 (VAR_0, "spsr_")) {
  for (VAR_4 = 0; VAR_0[5+VAR_4]; VAR_4++) {
   for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
    if (VAR_0[5+VAR_4] == VAR_2[VAR_5]) {
     break;
    }
   }
   if (!(VAR_2[VAR_5])) {
    return 0;
   }
   VAR_3 |= 1 << VAR_5;
  }
  return VAR_3;
 }
 return 0;
}
