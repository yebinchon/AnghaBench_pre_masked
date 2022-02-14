
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static bool FUNC_5(obs_properties_t *VAR_2, obs_property_t *VAR_3,
        obs_data_t *VAR_4)
{
 const char *VAR_5 = FUNC_1(VAR_4, VAR_0);
 bool VAR_6 = FUNC_4(VAR_5, "custom") == 0;

 FUNC_3(FUNC_2(VAR_2, VAR_1),
     VAR_6);

 FUNC_0(VAR_3);
 return 1;
}
