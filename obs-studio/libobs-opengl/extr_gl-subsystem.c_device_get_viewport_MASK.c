
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gs_rect {int dummy; } ;
struct TYPE_3__ {struct gs_rect cur_viewport; } ;
typedef TYPE_1__ gs_device_t ;



void FUNC_0(const gs_device_t *VAR_0, struct gs_rect *VAR_1)
{
 *VAR_1 = VAR_0->cur_viewport;
}
