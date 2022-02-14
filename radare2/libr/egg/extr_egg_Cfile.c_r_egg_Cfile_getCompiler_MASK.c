
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char* FUNC_6(void) {
 size_t VAR_0;
 const char *VAR_1[] = {"llvm-gcc", "clang", "gcc"};
 char *VAR_2 = FUNC_3 ("CC");

 if (VAR_2) {
  return VAR_2;
 }

 for (VAR_0 = 0; VAR_0 < 3; VAR_0++) {
  VAR_2 = FUNC_2 (VAR_1[VAR_0]);
  if (FUNC_4 (VAR_2, VAR_1[VAR_0])) {
   FUNC_1 (VAR_2);
   return FUNC_5 (VAR_1[VAR_0]);
  }
  FUNC_1 (VAR_2);
 }

 FUNC_0 ("Couldn't find a compiler ! Please, set CC.\n");
 return ((void*)0);
}
