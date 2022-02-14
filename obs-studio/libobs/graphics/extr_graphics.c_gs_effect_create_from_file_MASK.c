
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gs_effect_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int * FUNC_2 (char const*) ;
 int * FUNC_3 (char*,char const*,char**) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*) ;

gs_effect_t *FUNC_6(const char *VAR_1, char **VAR_2)
{
 char *VAR_3;
 gs_effect_t *VAR_4 = ((void*)0);

 if (!FUNC_4("gs_effect_create_from_file", VAR_1))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_0, "Could not load effect file '%s'", VAR_1);
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_3);

 return VAR_4;
}
