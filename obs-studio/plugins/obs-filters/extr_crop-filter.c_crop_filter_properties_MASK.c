
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,int,int,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static obs_properties_t *FUNC_6(void *VAR_1)
{
 obs_properties_t *VAR_2 = FUNC_4();

 obs_property_t *VAR_3 = FUNC_2(
  VAR_2, "relative", FUNC_1("Crop.Relative"));

 FUNC_5(VAR_3, VAR_0);

 FUNC_3(VAR_2, "left", FUNC_1("Crop.Left"),
          -8192, 8192, 1);
 FUNC_3(VAR_2, "top", FUNC_1("Crop.Top"), -8192,
          8192, 1);
 FUNC_3(VAR_2, "right", FUNC_1("Crop.Right"),
          -8192, 8192, 1);
 FUNC_3(VAR_2, "bottom", FUNC_1("Crop.Bottom"),
          -8192, 8192, 1);
 FUNC_3(VAR_2, "cx", FUNC_1("Crop.Width"), 0,
          8192, 1);
 FUNC_3(VAR_2, "cy", FUNC_1("Crop.Height"), 0,
          8192, 1);

 FUNC_0(VAR_1);
 return VAR_2;
}
