
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static bool FUNC_6(obs_properties_t *VAR_0, obs_property_t *VAR_1,
        obs_data_t *VAR_2)
{
 bool VAR_3 = FUNC_1(VAR_2, "relative");

 FUNC_4(FUNC_3(VAR_0, "left"),
         VAR_3 ? FUNC_2("Crop.Left")
           : "X");
 FUNC_4(FUNC_3(VAR_0, "top"),
         VAR_3 ? FUNC_2("Crop.Top")
           : "Y");

 FUNC_5(FUNC_3(VAR_0, "right"), VAR_3);
 FUNC_5(FUNC_3(VAR_0, "bottom"), VAR_3);
 FUNC_5(FUNC_3(VAR_0, "cx"), !VAR_3);
 FUNC_5(FUNC_3(VAR_0, "cy"), !VAR_3);

 FUNC_0(VAR_1);
 return 1;
}
