
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_visible; } ;
typedef TYPE_1__ obs_sceneitem_t ;
typedef int obs_hotkey_t ;
typedef int * obs_hotkey_pair_id ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (void*) ;

__attribute__((used)) static bool FUNC_4(void *VAR_0, obs_hotkey_pair_id VAR_1,
      obs_hotkey_t *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_1);
 FUNC_0(VAR_2);

 obs_sceneitem_t *VAR_4 = FUNC_3(VAR_0);
 if (VAR_3 && VAR_4 && !VAR_4->user_visible) {
  FUNC_2(VAR_4, 1);
  FUNC_1(VAR_4);
  return 1;
 }

 FUNC_1(VAR_4);
 return 0;
}
