
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
 int FUNC_0 (void*) ;
 int * FUNC_1 (int *,int ,int ,int ,int ,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_4(void *VAR_4)
{
 obs_properties_t *VAR_5 = FUNC_2();

 obs_property_t *VAR_6 = FUNC_1(VAR_5,
         VAR_2,
         VAR_3,
         VAR_1, VAR_0, 1);
 FUNC_3(VAR_6, " dB");

 FUNC_0(VAR_4);
 return VAR_5;
}
