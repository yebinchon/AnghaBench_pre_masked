
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* source; int is_group; } ;
typedef TYPE_3__ obs_sceneitem_t ;
typedef int obs_scene_t ;
struct TYPE_8__ {int * data; } ;
struct TYPE_9__ {TYPE_1__ context; } ;


 int FUNC_0 (int *,int (*) (obs_scene_t*,TYPE_3__*,void*),void*) ;

void FUNC_1(obs_sceneitem_t *VAR_0,
        bool (*VAR_1)(obs_scene_t *,
           obs_sceneitem_t *, void *),
        void *VAR_2)
{
 if (!VAR_0 || !VAR_0->is_group)
  return;

 obs_scene_t *VAR_3 = VAR_0->source->context.data;
 if (VAR_3)
  FUNC_0(VAR_3, VAR_1, VAR_2);
}
