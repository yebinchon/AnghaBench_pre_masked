
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_script_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int * FUNC_1 (char const*,int *) ;
 int * FUNC_2 (char const*,int *) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*,char) ;

obs_script_t *FUNC_6(const char *VAR_2, obs_data_t *VAR_3)
{
 obs_script_t *VAR_4 = ((void*)0);
 const char *VAR_5;

 if (!VAR_1)
  return ((void*)0);
 if (!FUNC_3(VAR_2))
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_2, '.');
 if (!VAR_5)
  return ((void*)0);
 {
  FUNC_0(VAR_0, "Unsupported/unknown script type: %s", VAR_2);
 }

 return VAR_4;
}
