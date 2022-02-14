
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;
typedef int json_t ;


 int FUNC_0 (int *,int *,char const*) ;
 int * FUNC_1 (int *,char const*,char const**) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char const*) ;
 int * FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char const*,char const*) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static bool FUNC_8(obs_properties_t *VAR_0, obs_property_t *VAR_1,
        obs_data_t *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2, "service");
 json_t *VAR_4 = FUNC_5(VAR_0);
 json_t *VAR_5;
 const char *VAR_6;

 if (!VAR_3 || !*VAR_3)
  return 0;

 VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_6);
 if (!VAR_5) {
  const char *VAR_7 = FUNC_2(VAR_2, "server");

  FUNC_6(VAR_1, 0, VAR_3, VAR_3);
  FUNC_7(VAR_1, 0, 1);

  VAR_1 = FUNC_4(VAR_0, "server");
  FUNC_6(VAR_1, 0, VAR_7, VAR_7);
  FUNC_7(VAR_1, 0, 1);
  return 1;
 }
 if (VAR_6) {
  VAR_3 = VAR_6;
  FUNC_3(VAR_2, "service", VAR_3);
 }

 FUNC_0(FUNC_4(VAR_0, "server"), VAR_5, VAR_3);

 return 1;
}
