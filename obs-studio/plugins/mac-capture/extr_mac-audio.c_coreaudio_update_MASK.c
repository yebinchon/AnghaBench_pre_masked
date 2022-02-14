
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int device_uid; } ;
typedef int obs_data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct coreaudio_data*) ;
 int FUNC_3 (struct coreaudio_data*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, obs_data_t *VAR_1)
{
 struct coreaudio_data *VAR_2 = VAR_0;

 FUNC_2(VAR_2);

 FUNC_0(VAR_2->device_uid);
 VAR_2->device_uid = FUNC_1(FUNC_4(VAR_1, "device_id"));

 FUNC_3(VAR_2);
}
