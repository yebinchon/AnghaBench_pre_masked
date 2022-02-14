
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* array; int num; } ;
struct device_list {TYPE_3__ items; } ;
struct coreaudio_data {int device_uid; } ;
struct TYPE_4__ {int array; } ;
struct TYPE_5__ {TYPE_1__ value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device_list*,int) ;
 int FUNC_3 (struct device_list*) ;
 int FUNC_4 (struct device_list*,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct coreaudio_data *VAR_0)
{
 struct device_list VAR_1;

 FUNC_4(&VAR_1, 0, sizeof(struct device_list));
 FUNC_2(&VAR_1, 0);

 if (!VAR_1.items.num)
  return 0;

 FUNC_0(VAR_0->device_uid);
 VAR_0->device_uid = FUNC_1(VAR_1.items.array[0].value.array);

 FUNC_3(&VAR_1);
 return 1;
}
