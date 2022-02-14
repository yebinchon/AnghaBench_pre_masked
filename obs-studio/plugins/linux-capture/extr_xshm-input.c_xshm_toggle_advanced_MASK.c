
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_0, obs_property_t *VAR_1,
     obs_data_t *VAR_2)
{
 FUNC_0(VAR_1);
 const bool VAR_3 = FUNC_1(VAR_2, "advanced");
 obs_property_t *VAR_4 = FUNC_2(VAR_0, "server");

 FUNC_4(VAR_4, VAR_3);


 FUNC_3(VAR_4, VAR_2);

 return 1;
}
