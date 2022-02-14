
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static ut64 FUNC_1(char **VAR_3) {
 ut64 VAR_4 = 0;
 int VAR_5;
 ut8 VAR_6 = 0;

 const char *VAR_7[] = {
  "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
  "hi", "ls", "ge", "lt", "gt", "le", "al", "nv", 0
 };
 for (VAR_5 = 0; VAR_7[VAR_5]; VAR_5++) {
  if (FUNC_0 (*VAR_3, VAR_7[VAR_5])) {
   VAR_4 |= VAR_0;
   VAR_4 |= VAR_5 << 2;
   *VAR_3 += 2;
   VAR_6 += 2;
   break;
  }
 }
 if (FUNC_0 (*VAR_3, ".n")) {
  VAR_4 |= VAR_1;
  *VAR_3 += 2;
  VAR_6 += 2;
 } else
 if (FUNC_0 (*VAR_3, ".w")) {
  VAR_4 |= VAR_2;
  *VAR_3 += 2;
  VAR_6 += 2;
 }

 if (**VAR_3 == '\0') {
  return VAR_4;
 }
 *VAR_3 -= VAR_6;
 return 0;
}
