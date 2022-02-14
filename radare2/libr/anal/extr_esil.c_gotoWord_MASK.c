
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, int VAR_1) {
 const char *VAR_2 = VAR_0;
 int VAR_3 = 0;
 while (*VAR_0) {
  if (VAR_3 == VAR_1) {
   return VAR_2;
  }
  VAR_0++;
  if (*VAR_0 == ',') {
   VAR_2 = VAR_0 + 1;
   VAR_3++;
  }
 }
 return ((void*)0);
}
