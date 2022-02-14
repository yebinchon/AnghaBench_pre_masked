
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RList ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,void*) ;
 int * FUNC_2 (int (*) (char*)) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static RList* FUNC_6 (const char *VAR_0) {
 RList *VAR_1;
 char *VAR_2, *VAR_3, *VAR_4, *VAR_5;

 if (!VAR_0) {
  return ((void*)0);
 }

 VAR_5 = FUNC_4 (VAR_0);
 VAR_1 = FUNC_2 (FUNC_0);
 if (!VAR_1) {
  FUNC_0 (VAR_5);
  return ((void*)0);
 }
 VAR_2 = FUNC_5 (VAR_5, "\n");
 VAR_3 = FUNC_3 (VAR_2, '=');

 VAR_4 = FUNC_5 (VAR_3 + 1, ",");

 while (VAR_4) {
  FUNC_1 (VAR_1, (void*)FUNC_4 (VAR_4));
  VAR_4 = FUNC_5 (((void*)0), ",");
 }

 FUNC_0 (VAR_5);
 return VAR_1;
}
