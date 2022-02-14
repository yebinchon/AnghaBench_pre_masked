
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int cy; scalar_t__ custom_size; } ;
typedef TYPE_2__ obs_scene_t ;
struct TYPE_4__ {int base_height; } ;
struct TYPE_6__ {TYPE_1__ video; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(void *VAR_1)
{
 obs_scene_t *VAR_2 = VAR_1;
 return VAR_2->custom_size ? VAR_2->cy : VAR_0->video.base_height;
}
