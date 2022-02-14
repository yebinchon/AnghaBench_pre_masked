
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharpness_data {float sharpness; } ;
typedef int obs_data_t ;


 double FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, obs_data_t *VAR_1)
{
 struct sharpness_data *VAR_2 = VAR_0;
 double VAR_3 = FUNC_0(VAR_1, "sharpness");

 VAR_2->sharpness = (float)VAR_3;
}
