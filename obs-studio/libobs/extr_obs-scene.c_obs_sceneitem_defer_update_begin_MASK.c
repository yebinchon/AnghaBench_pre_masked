
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int defer_update; } ;
typedef TYPE_1__ obs_sceneitem_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_sceneitem_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_sceneitem_defer_update_begin"))
  return;

 FUNC_1(&VAR_0->defer_update);
}
