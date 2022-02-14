
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (void*) ;
 int VAR_20 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,double,double,double) ;
 int FUNC_4 (int *,int ,int ,int,int,int) ;
 int * FUNC_5 (int *,int ,int ,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_21)
{
 obs_properties_t *VAR_22 = FUNC_6();

 obs_property_t *VAR_23 = FUNC_5(VAR_22, VAR_3,
          VAR_12,
          VAR_1,
          VAR_0);
 FUNC_7(VAR_23, FUNC_1("Green"), "green");
 FUNC_7(VAR_23, FUNC_1("Blue"), "blue");
 FUNC_7(VAR_23, FUNC_1("Magenta"), "magenta");
 FUNC_7(VAR_23, FUNC_1("Custom"), "custom");

 FUNC_8(VAR_23, VAR_20);

 FUNC_2(VAR_22, VAR_6, VAR_15);
 FUNC_4(VAR_22, VAR_8,
          VAR_17, 1, 1000, 1);
 FUNC_4(VAR_22, VAR_9,
          VAR_18, 1, 1000, 1);
 FUNC_4(VAR_22, VAR_10, VAR_19, 1, 1000,
          1);

 FUNC_4(VAR_22, VAR_7, VAR_16, 0,
          100, 1);
 FUNC_3(VAR_22, VAR_4, VAR_13,
     -1.0, 1.0, 0.01);
 FUNC_3(VAR_22, VAR_2,
     VAR_11, -1.0, 1.0, 0.01);
 FUNC_3(VAR_22, VAR_5, VAR_14, -1.0,
     1.0, 0.01);

 FUNC_0(VAR_21);
 return VAR_22;
}
