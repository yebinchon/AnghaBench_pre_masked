
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int active; int wait_for_target_startup; int capturing; scalar_t__ retrying; int * copy_texture; int * texture; scalar_t__* texture_mutexes; scalar_t__ target_process; scalar_t__ global_hook_info_map; scalar_t__ keepalive_mutex; scalar_t__ hook_data_map; scalar_t__ hook_init; scalar_t__ hook_exit; scalar_t__ hook_ready; scalar_t__ hook_stop; scalar_t__ hook_restart; int * app_sid; int * data; int * global_hook_info; int pipe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct game_capture *VAR_0)
{
 FUNC_6(&VAR_0->pipe);

 if (VAR_0->hook_stop) {
  FUNC_1(VAR_0->hook_stop);
 }
 if (VAR_0->global_hook_info) {
  FUNC_2(VAR_0->global_hook_info);
  VAR_0->global_hook_info = ((void*)0);
 }
 if (VAR_0->data) {
  FUNC_2(VAR_0->data);
  VAR_0->data = ((void*)0);
 }

 if (VAR_0->app_sid) {
  FUNC_0(VAR_0->app_sid);
  VAR_0->app_sid = ((void*)0);
 }

 FUNC_3(&VAR_0->hook_restart);
 FUNC_3(&VAR_0->hook_stop);
 FUNC_3(&VAR_0->hook_ready);
 FUNC_3(&VAR_0->hook_exit);
 FUNC_3(&VAR_0->hook_init);
 FUNC_3(&VAR_0->hook_data_map);
 FUNC_3(&VAR_0->keepalive_mutex);
 FUNC_3(&VAR_0->global_hook_info_map);
 FUNC_3(&VAR_0->target_process);
 FUNC_3(&VAR_0->texture_mutexes[0]);
 FUNC_3(&VAR_0->texture_mutexes[1]);

 if (VAR_0->texture) {
  FUNC_7();
  FUNC_4(VAR_0->texture);
  FUNC_8();
  VAR_0->texture = ((void*)0);
 }

 if (VAR_0->active)
  FUNC_5("capture stopped");

 VAR_0->copy_texture = ((void*)0);
 VAR_0->wait_for_target_startup = 0;
 VAR_0->active = 0;
 VAR_0->capturing = 0;

 if (VAR_0->retrying)
  VAR_0->retrying--;
}
