
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const char *VAR_1, size_t VAR_2) {
 size_t VAR_3, VAR_4 = VAR_2;
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  char VAR_5 = VAR_1[VAR_3];
  if (VAR_5 == '\n' || VAR_5 == '\r' || VAR_5 == '\t' ||
   VAR_5 == '\f' || VAR_5 == '\v' || VAR_5 == '\\' || VAR_5 == VAR_0) {
   VAR_4 += 1;
  } else if (VAR_5 < 32 || VAR_5 > 126) {
   VAR_4 += 3;
  }
 }
 return VAR_4;
}
