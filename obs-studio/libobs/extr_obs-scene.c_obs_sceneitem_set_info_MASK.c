
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct obs_transform_info {int bounds; int bounds_alignment; int bounds_type; int alignment; int scale; int rot; int pos; } ;
struct TYPE_4__ {int bounds; int bounds_align; int bounds_type; int align; int scale; int rot; int pos; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(obs_sceneitem_t *VAR_0,
       const struct obs_transform_info *VAR_1)
{
 if (VAR_0 && VAR_1) {
  VAR_0->pos = VAR_1->pos;
  VAR_0->rot = VAR_1->rot;
  VAR_0->scale = VAR_1->scale;
  VAR_0->align = VAR_1->alignment;
  VAR_0->bounds_type = VAR_1->bounds_type;
  VAR_0->bounds_align = VAR_1->bounds_alignment;
  VAR_0->bounds = VAR_1->bounds;
  FUNC_0(VAR_0);
 }
}
