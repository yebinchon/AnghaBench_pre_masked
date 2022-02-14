
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int update_group_resize; int defer_group_resize; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(obs_sceneitem_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_sceneitem_defer_group_resize_end"))
  return;

 if (FUNC_1(&VAR_0->defer_group_resize) == 0)
  FUNC_2(&VAR_0->update_group_resize, 1);
}
