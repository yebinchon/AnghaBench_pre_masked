
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_id_data {int found; int * id; int uid; } ;
typedef int CFStringRef ;
typedef int AudioDeviceID ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, CFStringRef VAR_1, CFStringRef VAR_2,
     AudioDeviceID VAR_3)
{
 struct device_id_data *VAR_4 = VAR_0;

 if (FUNC_0(VAR_2, VAR_4->uid, 0) == 0) {
  *VAR_4->id = VAR_3;
  VAR_4->found = 1;
  return 0;
 }

 FUNC_1(VAR_1);
 return 1;
}
