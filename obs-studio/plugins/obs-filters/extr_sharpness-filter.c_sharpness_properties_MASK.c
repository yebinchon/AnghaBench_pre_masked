
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_properties_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,double,double,double) ;
 int * FUNC_3 () ;

__attribute__((used)) static obs_properties_t *FUNC_4(void *VAR_0)
{
 obs_properties_t *VAR_1 = FUNC_3();

 FUNC_2(VAR_1, "sharpness",
     FUNC_1("Sharpness"), 0.0, 1.0,
     0.01);

 FUNC_0(VAR_0);
 return VAR_1;
}
