
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* device_get_device_obj ) (int ) ;} ;
struct TYPE_4__ {int device; TYPE_1__ exports; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;

void *FUNC_2(void)
{
 if (!FUNC_0("gs_get_device_obj"))
  return ((void*)0);

 return VAR_0->exports.device_get_device_obj(
  VAR_0->device);
}
