
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 char* FUNC_0 (char const*) ;

char *FUNC_1(ut32 VAR_0) {
 const char *VAR_1 = ((void*)0);
 switch (VAR_0) {
 case 0: VAR_1 = "=="; break;
 case 1: VAR_1 = "!="; break;
 case 2: VAR_1 = "<"; break;
 case 3: VAR_1 = ">="; break;
 }
 return VAR_1? FUNC_0 (VAR_1): ((void*)0);
}
