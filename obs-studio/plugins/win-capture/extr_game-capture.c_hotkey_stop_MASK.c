
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct game_capture {int deactivate_hook; TYPE_1__ config; } ;
typedef int obs_hotkey_t ;
typedef int obs_hotkey_pair_id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static bool FUNC_2(void *VAR_1, obs_hotkey_pair_id VAR_2, obs_hotkey_t *VAR_3,
   bool VAR_4)
{
 struct game_capture *VAR_5 = VAR_1;

 if (VAR_4 && VAR_5->config.mode == VAR_0) {
  FUNC_0("Deactivate hotkey pressed");
  FUNC_1(&VAR_5->deactivate_hook, 1);
 }

 return 1;
}
