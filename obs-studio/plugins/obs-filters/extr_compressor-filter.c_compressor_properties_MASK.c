
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sidechain_prop_info {int * member_1; int * member_0; } ;
struct compressor_data {int context; } ;
typedef int obs_source_t ;
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
 int FUNC_0 (void*) ;
 int VAR_23 ;
 int FUNC_1 (int ,struct sidechain_prop_info*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *,int ,int ,int ,int ,double) ;
 int * FUNC_5 (int *,int ,int ,int ,int ,int) ;
 int * FUNC_6 (int *,int ,int ,int ,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_11(void *VAR_24)
{
 struct compressor_data *VAR_25 = VAR_24;
 obs_properties_t *VAR_26 = FUNC_7();
 obs_source_t *VAR_27 = ((void*)0);
 obs_property_t *VAR_28;

 if (VAR_25)
  VAR_27 = FUNC_2(VAR_25->context);

 VAR_28 = FUNC_4(VAR_26, VAR_13, VAR_19,
         VAR_7, VAR_2, 0.5);
 FUNC_8(VAR_28, ":1");
 VAR_28 = FUNC_4(VAR_26, VAR_16, VAR_22,
         VAR_8, VAR_4,
         0.1);
 FUNC_8(VAR_28, " dB");
 VAR_28 = FUNC_5(VAR_26, VAR_11,
       VAR_17, VAR_5,
       VAR_0, 1);
 FUNC_9(VAR_28, " ms");
 VAR_28 = FUNC_5(VAR_26, VAR_14,
       VAR_20, VAR_5,
       VAR_3, 1);
 FUNC_9(VAR_28, " ms");
 VAR_28 = FUNC_4(VAR_26, VAR_12,
         VAR_18,
         VAR_6,
         VAR_1, 0.1);
 FUNC_8(VAR_28, " dB");

 obs_property_t *VAR_29 = FUNC_6(
  VAR_26, VAR_15, VAR_21,
  VAR_10, VAR_9);

 FUNC_10(VAR_29, FUNC_3("None"), "none");

 struct sidechain_prop_info VAR_30 = {VAR_29, VAR_27};
 FUNC_1(VAR_23, &VAR_30);

 FUNC_0(VAR_24);
 return VAR_26;
}
