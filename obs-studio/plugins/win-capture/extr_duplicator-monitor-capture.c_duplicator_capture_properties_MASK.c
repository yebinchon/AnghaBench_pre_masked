
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
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int ) ;
 int * FUNC_5 (int *,char*,int ,int ,int ) ;
 int * FUNC_6 () ;

__attribute__((used)) static obs_properties_t *FUNC_7(void *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_4);

 obs_properties_t *VAR_6 = FUNC_6();

 obs_property_t *VAR_7 = FUNC_5(
  VAR_6, "monitor", VAR_3, VAR_1,
  VAR_0);

 FUNC_4(VAR_6, "capture_cursor", VAR_2);

 FUNC_2();

 while (FUNC_1(VAR_7, VAR_5++))
  ;

 FUNC_3();

 return VAR_6;
}
