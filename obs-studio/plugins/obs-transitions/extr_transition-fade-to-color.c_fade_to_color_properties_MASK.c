
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
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ,int ,int ,int,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static obs_properties_t *FUNC_5(void *VAR_4)
{
 obs_properties_t *VAR_5 = FUNC_3();

 FUNC_1(VAR_5, VAR_0, VAR_1);
 obs_property_t *VAR_6 = FUNC_2(
  VAR_5, VAR_2, VAR_3, 0, 100, 1);
 FUNC_4(VAR_6, "%");

 FUNC_0(VAR_4);
 return VAR_5;
}
