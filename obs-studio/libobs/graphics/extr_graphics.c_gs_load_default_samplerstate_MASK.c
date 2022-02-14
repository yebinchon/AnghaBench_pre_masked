
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_load_default_samplerstate ) (int ,int,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(bool VAR_1, int VAR_2)
{
 graphics_t *VAR_3 = VAR_0;

 if (!FUNC_0("gs_load_default_samplerstate"))
  return;

 VAR_3->exports.device_load_default_samplerstate(VAR_3->device,
          VAR_1, VAR_2);
}
