
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* device_set_viewport ) (int ,int,int,int,int) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int,int,int) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 graphics_t *VAR_5 = VAR_0;

 if (!FUNC_0("gs_set_viewport"))
  return;

 VAR_5->exports.device_set_viewport(VAR_5->device, VAR_1, VAR_2, VAR_3,
           VAR_4);
}
