
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array; } ;
struct device_item {TYPE_1__ value; TYPE_1__ name; } ;
struct add_data {int list; scalar_t__ input; } ;
typedef int item ;
typedef int CFStringRef ;
typedef int AudioDeviceID ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_item*) ;
 int FUNC_4 (int ,struct device_item*) ;
 int VAR_0 ;
 int FUNC_5 (struct device_item*,int ,int) ;

__attribute__((used)) static bool FUNC_6(void *VAR_1, CFStringRef VAR_2,
          CFStringRef VAR_3, AudioDeviceID VAR_4)
{
 struct add_data *VAR_5 = VAR_1;
 struct device_item VAR_6;

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));

 if (!FUNC_1(VAR_2, VAR_0, &VAR_6.name))
  goto fail;
 if (!FUNC_1(VAR_3, VAR_0, &VAR_6.value))
  goto fail;

 if (VAR_5->input || !FUNC_2(VAR_6.value.array))
  FUNC_4(VAR_5->list, &VAR_6);

fail:
 FUNC_3(&VAR_6);

 FUNC_0(VAR_4);
 return 1;
}
