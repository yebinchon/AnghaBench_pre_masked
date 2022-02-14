
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static bool FUNC_6(obs_properties_t *VAR_0, obs_property_t *VAR_1,
     obs_data_t *VAR_2)
{
 FUNC_0(VAR_1);
 bool VAR_3 = 0;
 const char *VAR_4 = FUNC_1(VAR_2, "device_id");

 if (FUNC_5(VAR_4, "__custom__") == 0)
  VAR_3 = 1;

 obs_property_t *VAR_5 = FUNC_2(VAR_0, "custom_pcm");

 FUNC_4(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_2);

 return 1;
}
