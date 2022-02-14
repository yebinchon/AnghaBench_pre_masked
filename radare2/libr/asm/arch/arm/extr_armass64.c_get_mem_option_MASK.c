
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0) {

 const char *VAR_1[] = {"sy", "st", "ld", "xxx", "ish", "ishst",
                          "ishld", "xxx", "nsh", "nshst", "nshld",
                          "xxx", "osh", "oshst", "oshld", ((void*)0)};
 int VAR_2 = 0;
 while (VAR_1[VAR_2]) {
  if (!FUNC_0 (VAR_0, VAR_1[VAR_2])) {
   return 15 - VAR_2;
  }
  VAR_2++;
 }
 return -1;
}
