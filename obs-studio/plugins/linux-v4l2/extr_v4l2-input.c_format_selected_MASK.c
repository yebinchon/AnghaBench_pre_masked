
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int,int,int*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,scalar_t__,int *) ;
 int FUNC_11 (int,int *) ;

__attribute__((used)) static bool FUNC_12(obs_properties_t *VAR_4, obs_property_t *VAR_5,
       obs_data_t *VAR_6)
{
 FUNC_0(VAR_5);
 int VAR_7 = FUNC_9(FUNC_2(VAR_6, "device_id"),
       VAR_1 | VAR_0);
 if (VAR_7 == -1)
  return 0;

 int VAR_8 = (int)FUNC_1(VAR_6, "input");
 uint32_t VAR_9 = 0;
 if (FUNC_8(VAR_7, VAR_8, &VAR_9) < 0)
  return 0;
 VAR_9 &= VAR_3 | VAR_2;

 obs_property_t *VAR_10 = FUNC_3(VAR_4, "resolution");
 obs_property_t *VAR_11 = FUNC_3(VAR_4, "framerate");
 obs_property_t *VAR_12 = FUNC_3(VAR_4, "standard");
 obs_property_t *VAR_13 = FUNC_3(VAR_4, "dv_timing");

 FUNC_5(VAR_10, (!VAR_9) ? 1 : 0);
 FUNC_5(VAR_11, (!VAR_9) ? 1 : 0);
 FUNC_5(VAR_12,
     (VAR_9 & VAR_3) ? 1 : 0);
 FUNC_5(
  VAR_13, (VAR_9 & VAR_2) ? 1 : 0);

 if (!VAR_9) {
  FUNC_10(VAR_7,
         FUNC_1(VAR_6, "pixelformat"),
         VAR_10);
 }
 if (VAR_9 & VAR_3)
  FUNC_11(VAR_7, VAR_12);
 if (VAR_9 & VAR_2)
  FUNC_7(VAR_7, VAR_13);

 FUNC_6(VAR_7);

 if (!VAR_9)
  FUNC_4(VAR_10, VAR_6);
 if (VAR_9 & VAR_3)
  FUNC_4(VAR_12, VAR_6);
 if (VAR_9 & VAR_2)
  FUNC_4(VAR_13, VAR_6);

 return 1;
}
