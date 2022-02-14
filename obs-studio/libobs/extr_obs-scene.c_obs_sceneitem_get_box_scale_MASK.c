
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vec2 {int dummy; } ;
struct TYPE_3__ {struct vec2 box_scale; } ;
typedef TYPE_1__ obs_sceneitem_t ;



void FUNC_0(const obs_sceneitem_t *VAR_0,
     struct vec2 *VAR_1)
{
 if (VAR_0)
  *VAR_1 = VAR_0->box_scale;
}
