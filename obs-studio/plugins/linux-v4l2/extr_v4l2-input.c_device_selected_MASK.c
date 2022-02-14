
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_7(obs_properties_t *VAR_2, obs_property_t *VAR_3,
       obs_data_t *VAR_4)
{
 int VAR_5 = FUNC_5(FUNC_0(VAR_4, "device_id"),
       VAR_1 | VAR_0);

 FUNC_6(VAR_2, VAR_3, (VAR_5 == -1) ? 0 : 1);

 if (VAR_5 == -1)
  return 0;

 obs_property_t *VAR_6 = FUNC_1(VAR_2, "input");
 FUNC_4(VAR_5, VAR_6);
 FUNC_3(VAR_5);

 FUNC_2(VAR_6, VAR_4);

 return 1;
}
