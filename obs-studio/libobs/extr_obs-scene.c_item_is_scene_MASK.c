
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obs_scene_item {TYPE_2__* source; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct obs_scene_item *VAR_1)
{
 return VAR_1->source && VAR_1->source->info.type == VAR_0;
}
