
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,char*,int ,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int ,char*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 () ;

__attribute__((used)) static obs_properties_t *FUNC_9(bool VAR_4)
{
 obs_properties_t *VAR_5 = FUNC_2();
 obs_property_t *VAR_6 = FUNC_1(
  VAR_5, "device_id", FUNC_0("Device"),
  VAR_1, VAR_0);

 FUNC_7();
 if (VAR_4)
  FUNC_6(VAR_2, (void *)VAR_6);
 else
  FUNC_5(VAR_3, (void *)VAR_6);
 FUNC_8();

 size_t VAR_7 = FUNC_4(VAR_6);

 if (VAR_7 > 0)
  FUNC_3(
   VAR_6, 0, FUNC_0("Default"), "default");

 return VAR_5;
}
