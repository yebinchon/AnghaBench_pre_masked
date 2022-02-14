
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_effect_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,int *) ;
 char* FUNC_2 (char const*) ;

gs_effect_t *FUNC_3(gs_effect_t **VAR_0, const char *VAR_1)
{
 if (!*VAR_0) {
  char *VAR_2 = FUNC_2(VAR_1);
  *VAR_0 = FUNC_1(VAR_2, ((void*)0));
  FUNC_0(VAR_2);
 }

 return *VAR_0;
}
