
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_t ;


 int * FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*) ;

list_t *FUNC_5(const char *VAR_0, const char *VAR_1) {
 list_t *VAR_2 = FUNC_0();
 char *VAR_3 = FUNC_3(VAR_0);

 char *VAR_4 = FUNC_4(VAR_3, VAR_1);
 while (VAR_4) {
  FUNC_2(VAR_2, FUNC_3(VAR_4));
  VAR_4 = FUNC_4(((void*)0), VAR_1);
 }
 FUNC_1(VAR_3);
 return VAR_2;
}
