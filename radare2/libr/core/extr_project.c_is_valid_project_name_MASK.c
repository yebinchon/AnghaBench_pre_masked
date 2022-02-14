
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0) {
 int VAR_1;
 if (FUNC_1 (VAR_0, ".zip")) {
  return 0;
 }
 for (VAR_1 = 0; VAR_0[VAR_1]; VAR_1++) {
  switch (VAR_0[VAR_1]) {
  case '\\':
  case '.':
  case '_':
  case ':':
  case '-':
   continue;
  }
  if (VAR_0[VAR_1] >= 'a' && VAR_0[VAR_1] <= 'z') {
   continue;
  }
  if (VAR_0[VAR_1] >= 'A' && VAR_0[VAR_1] <= 'Z') {
   continue;
  }
  if (FUNC_0 (VAR_0[VAR_1])) {
   continue;
  }
  return 0;
 }
 return 1;
}
