
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
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4(obs_properties_t *VAR_0,
       obs_property_t *VAR_1, obs_data_t *VAR_2)
{
 FUNC_0(VAR_1);

 bool VAR_3 = FUNC_1(VAR_2, "is_local_file");
 obs_property_t *VAR_4 = FUNC_2(VAR_0, "input");
 obs_property_t *VAR_5 =
  FUNC_2(VAR_0, "input_format");
 obs_property_t *VAR_6 = FUNC_2(VAR_0, "local_file");
 obs_property_t *VAR_7 = FUNC_2(VAR_0, "looping");
 obs_property_t *VAR_8 = FUNC_2(VAR_0, "buffering_mb");
 obs_property_t *VAR_9 =
  FUNC_2(VAR_0, "close_when_inactive");
 obs_property_t *VAR_10 = FUNC_2(VAR_0, "seekable");
 obs_property_t *VAR_11 = FUNC_2(VAR_0, "speed_percent");
 FUNC_3(VAR_4, !VAR_3);
 FUNC_3(VAR_5, !VAR_3);
 FUNC_3(VAR_8, !VAR_3);
 FUNC_3(VAR_9, VAR_3);
 FUNC_3(VAR_6, VAR_3);
 FUNC_3(VAR_7, VAR_3);
 FUNC_3(VAR_11, VAR_3);
 FUNC_3(VAR_10, !VAR_3);

 return 1;
}
