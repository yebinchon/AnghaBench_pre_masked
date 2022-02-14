
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int defer_update; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(obs_sceneitem_t *VAR_0)
{
 if (!FUNC_1(VAR_0, "obs_sceneitem_defer_update_end"))
  return;

 if (FUNC_2(&VAR_0->defer_update) == 0)
  FUNC_0(VAR_0);
}
