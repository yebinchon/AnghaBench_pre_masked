
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_id_data {int member_2; int found; int * member_1; int member_0; } ;
typedef int CFStringRef ;
typedef int AudioDeviceID ;


 int FUNC_0 (int ,struct device_id_data*) ;
 int VAR_0 ;

bool FUNC_1(CFStringRef VAR_1, AudioDeviceID *VAR_2)
{
 struct device_id_data VAR_3 = {VAR_1, *VAR_2, 0};
 FUNC_0(VAR_0, &VAR_3);
 return VAR_3.found;
}
