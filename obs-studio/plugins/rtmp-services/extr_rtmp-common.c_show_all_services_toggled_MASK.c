
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;
typedef int json_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int,char const*) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(obs_properties_t *VAR_0, obs_property_t *VAR_1,
          obs_data_t *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_2, "service");
 bool VAR_4 = FUNC_2(VAR_2, "show_all");

 json_t *VAR_5 = FUNC_5(VAR_0);
 if (!VAR_5)
  return 0;

 FUNC_1(FUNC_4(VAR_0, "service"), VAR_5, VAR_4,
      VAR_3);

 FUNC_0(VAR_1);
 return 1;
}
