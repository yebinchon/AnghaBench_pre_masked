
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0) {
 if (FUNC_0(VAR_0) != 7 || VAR_0[0] != '#') {
  return 0;
 }

 char *VAR_1 = ((void*)0);
 FUNC_1(&VAR_0[1], &VAR_1, 16);
 return *VAR_1 == '\0';
}
