
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vec2 {float x; float y; } ;
struct TYPE_8__ {scalar_t__ bounds_type; int align; int update_group_resize; int pos; int draw_transform; int defer_group_resize; TYPE_2__* source; } ;
typedef TYPE_3__ obs_sceneitem_t ;
typedef int obs_scene_t ;
struct TYPE_6__ {int * data; } ;
struct TYPE_7__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct vec2*,struct vec2*,struct vec2*) ;
 int FUNC_3 (struct vec2*,int *) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *,struct vec2*) ;

__attribute__((used)) static void FUNC_6(obs_sceneitem_t *VAR_5)
{
 obs_scene_t *VAR_6 = VAR_5->source->context.data;
 struct vec2 VAR_7;
 struct vec2 VAR_8;
 struct vec2 VAR_9;

 if (FUNC_0(&VAR_5->defer_group_resize) > 0)
  return;

 if (!FUNC_2(VAR_6, &VAR_7, &VAR_8, &VAR_9))
  return;

 if (VAR_5->bounds_type == VAR_4) {
  struct vec2 VAR_10;

  if ((VAR_5->align & VAR_1) != 0)
   VAR_10.x = VAR_7.x;
  else if ((VAR_5->align & VAR_2) != 0)
   VAR_10.x = VAR_8.x;
  else
   VAR_10.x = (VAR_8.x - VAR_7.x) * 0.5f + VAR_7.x;

  if ((VAR_5->align & VAR_3) != 0)
   VAR_10.y = VAR_7.y;
  else if ((VAR_5->align & VAR_0) != 0)
   VAR_10.y = VAR_8.y;
  else
   VAR_10.y = (VAR_8.y - VAR_7.y) * 0.5f + VAR_7.y;

  FUNC_3(&VAR_10, &VAR_5->draw_transform);
  FUNC_5(&VAR_5->pos, &VAR_10);
 }

 FUNC_1(&VAR_5->update_group_resize, 0);

 FUNC_4(VAR_5, 0);
}
