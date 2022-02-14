
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,int *,int) ;

int FUNC_4(const char *VAR_0, int *VAR_1, int *VAR_2, bool VAR_3) {
 char *VAR_4;
 if (VAR_3 && *VAR_0 == 'p') {
  VAR_0++;
  if (!(VAR_4 = FUNC_2 (VAR_0, '.'))) {
   return -1;
  }
  VAR_4++;
  if (FUNC_1 (VAR_0, "-1")) {
   if (FUNC_1 (VAR_4, "-1")) {
    *VAR_1 = *VAR_2 = -1;
    return 0;
   }
   return -1;
  }
  if (!FUNC_0 (*VAR_0)) {
   return -1;
  }
  if (FUNC_1 (VAR_4, "-1")) {
   *VAR_1 = (int) FUNC_3 (VAR_0, ((void*)0), 16);
   *VAR_2 = -1;
   return 0;
  }
  if (!FUNC_0 (*VAR_4)) {
   return -1;
  }
  *VAR_1 = (int) FUNC_3 (VAR_0, ((void*)0), 16);
  *VAR_2 = (int) FUNC_3 (VAR_4, ((void*)0), 16);
  return 0;
 }
 if (FUNC_1 (VAR_0, "-1")) {
  *VAR_2 = -1;
  return 0;
 }
 if (!FUNC_0 (*VAR_0)) {
  return -1;
 }
 *VAR_1 = *VAR_2 = (int) FUNC_3 (VAR_0, ((void*)0), 16);
 return 0;
}
