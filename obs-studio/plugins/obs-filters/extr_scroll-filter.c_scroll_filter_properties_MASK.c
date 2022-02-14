
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,double,double,double) ;
 int FUNC_4 (int *,char*,int ,int,int,int) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static obs_properties_t *FUNC_7(void *VAR_2)
{
 obs_properties_t *VAR_3 = FUNC_5();
 obs_property_t *VAR_4;

 FUNC_3(VAR_3, "speed_x",
     FUNC_1("ScrollFilter.SpeedX"),
     -500.0, 500.0, 1.0);
 FUNC_3(VAR_3, "speed_y",
     FUNC_1("ScrollFilter.SpeedY"),
     -500.0, 500.0, 1.0);

 VAR_4 = FUNC_2(VAR_3, "limit_cx",
        FUNC_1("ScrollFilter.LimitWidth"));
 FUNC_6(VAR_4, VAR_0);
 FUNC_4(VAR_3, "cx", FUNC_1("Crop.Width"), 1,
          8192, 1);

 VAR_4 = FUNC_2(
  VAR_3, "limit_cy", FUNC_1("ScrollFilter.LimitHeight"));
 FUNC_6(VAR_4, VAR_1);
 FUNC_4(VAR_3, "cy", FUNC_1("Crop.Height"), 1,
          8192, 1);

 FUNC_2(VAR_3, "loop",
    FUNC_1("ScrollFilter.Loop"));

 FUNC_0(VAR_2);
 return VAR_3;
}
