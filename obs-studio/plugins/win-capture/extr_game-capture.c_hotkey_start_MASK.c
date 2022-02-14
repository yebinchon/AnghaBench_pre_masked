
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct game_capture {int activate_hook_now; int deactivate_hook; int hotkey_window; TYPE_1__ config; } ;
typedef int obs_hotkey_t ;
typedef int obs_hotkey_pair_id ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,long) ;

__attribute__((used)) static bool FUNC_4(void *VAR_1, obs_hotkey_pair_id VAR_2,
    obs_hotkey_t *VAR_3, bool VAR_4)
{
 struct game_capture *VAR_5 = VAR_1;

 if (VAR_4 && VAR_5->config.mode == VAR_0) {
  FUNC_1("Activate hotkey pressed");
  FUNC_3(&VAR_5->hotkey_window,
       (long)(uintptr_t)FUNC_0());
  FUNC_2(&VAR_5->deactivate_hook, 1);
  FUNC_2(&VAR_5->activate_hook_now, 1);
 }

 return 1;
}
