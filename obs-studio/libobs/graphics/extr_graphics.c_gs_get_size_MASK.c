
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int (* device_get_size ) (int ,int *,int *) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(uint32_t *VAR_1, uint32_t *VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_get_size"))
  return;

 VAR_3->exports.device_get_size(VAR_3->device, VAR_1, VAR_2);
}
