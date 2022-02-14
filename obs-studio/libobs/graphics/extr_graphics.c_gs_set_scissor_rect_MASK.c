
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gs_rect {int dummy; } ;
struct TYPE_4__ {int (* device_set_scissor_rect ) (int ,struct gs_rect const*) ;} ;
struct TYPE_5__ {int device; TYPE_1__ exports; } ;
typedef TYPE_2__ graphics_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct gs_rect const*) ;
 TYPE_2__* VAR_0 ;

void FUNC_2(const struct gs_rect *VAR_1)
{
 graphics_t *VAR_2 = VAR_0;

 if (!FUNC_0("gs_set_scissor_rect"))
  return;

 VAR_2->exports.device_set_scissor_rect(VAR_2->device, VAR_1);
}
