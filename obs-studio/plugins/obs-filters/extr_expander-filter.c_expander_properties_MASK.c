
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (void*) ;
 int * FUNC_1 (int *,int ,int ,int ,int ,double) ;
 int * FUNC_2 (int *,int ,int ,int ,int ,int) ;
 int * FUNC_3 (int *,int ,int ,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_29 ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_30)
{
 obs_properties_t *VAR_31 = FUNC_4();
 obs_property_t *VAR_32;

 obs_property_t *VAR_33 = FUNC_3(
  VAR_31, VAR_14, VAR_22, VAR_10,
  VAR_9);
 FUNC_7(VAR_33, VAR_23, "expander");
 FUNC_7(VAR_33, VAR_24, "gate");
 FUNC_8(VAR_33, VAR_29);
 VAR_32 = FUNC_1(VAR_31, VAR_15, VAR_25,
         VAR_7, VAR_2, 0.1);
 FUNC_5(VAR_32, ":1");
 VAR_32 = FUNC_1(VAR_31, VAR_17, VAR_28,
         VAR_8, VAR_4,
         0.1);
 FUNC_5(VAR_32, " dB");
 VAR_32 = FUNC_2(VAR_31, VAR_11,
       VAR_18, VAR_5,
       VAR_0, 1);
 FUNC_6(VAR_32, " ms");
 VAR_32 = FUNC_2(VAR_31, VAR_16,
       VAR_26, VAR_5,
       VAR_3, 1);
 FUNC_6(VAR_32, " ms");
 VAR_32 = FUNC_1(VAR_31, VAR_13,
         VAR_20,
         VAR_6,
         VAR_1, 0.1);
 FUNC_5(VAR_32, " dB");
 obs_property_t *VAR_34 = FUNC_3(
  VAR_31, VAR_12, VAR_19, VAR_10,
  VAR_9);
 FUNC_7(VAR_34, VAR_27, "RMS");
 FUNC_7(VAR_34, VAR_21, "peak");

 FUNC_0(VAR_30);
 return VAR_31;
}
