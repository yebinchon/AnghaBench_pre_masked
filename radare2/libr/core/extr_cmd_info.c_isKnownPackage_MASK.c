
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0) {
 if (*VAR_0 == 'L') {
  if (FUNC_0 (VAR_0, "Lkotlin")) {
   return 1;
  }
  if (FUNC_0 (VAR_0, "Lcom/google")) {
   return 1;
  }
  if (FUNC_0 (VAR_0, "Lcom/facebook")) {
   return 1;
  }
  if (FUNC_0 (VAR_0, "Lokhttp")) {
   return 1;
  }
  if (FUNC_0 (VAR_0, "Landroid")) {
   return 1;
  }
  if (FUNC_0 (VAR_0, "Lokio")) {
   return 1;
  }
 }
 return 0;
}
