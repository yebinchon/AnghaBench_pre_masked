
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
 int FUNC_0 (void*) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_1 (int *,int ,int ,int ,int ,double) ;
 int * FUNC_2 (int *,int ,int ,int ,int,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_6(void *VAR_12)
{
 obs_properties_t *VAR_13 = FUNC_3();
 obs_property_t *VAR_14;

 VAR_14 = FUNC_1(VAR_13, VAR_1,
         VAR_6, VAR_11,
         VAR_10, 1.0);
 FUNC_4(VAR_14, " dB");
 VAR_14 = FUNC_1(VAR_13, VAR_3,
         VAR_8, VAR_11,
         VAR_10, 1.0);
 FUNC_4(VAR_14, " dB");
 VAR_14 = FUNC_2(VAR_13, VAR_0, VAR_5, 0,
       10000, 1);
 FUNC_5(VAR_14, " ms");
 VAR_14 = FUNC_2(VAR_13, VAR_2, VAR_7, 0, 10000,
       1);
 FUNC_5(VAR_14, " ms");
 VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_9, 0,
       10000, 1);
 FUNC_5(VAR_14, " ms");

 FUNC_0(VAR_12);
 return VAR_13;
}
