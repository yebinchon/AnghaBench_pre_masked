
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {void* hook_exit; void* hook_ready; void* hook_init; void* hook_stop; void* hook_restart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 void* FUNC_1 (struct game_capture*,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct game_capture *VAR_5)
{
 if (!VAR_5->hook_restart) {
  VAR_5->hook_restart = FUNC_1(VAR_5, VAR_0);
  if (!VAR_5->hook_restart) {
   FUNC_2("init_events: failed to get hook_restart "
        "event: %lu",
        FUNC_0());
   return 0;
  }
 }

 if (!VAR_5->hook_stop) {
  VAR_5->hook_stop = FUNC_1(VAR_5, VAR_1);
  if (!VAR_5->hook_stop) {
   FUNC_2("init_events: failed to get hook_stop event: %lu",
        FUNC_0());
   return 0;
  }
 }

 if (!VAR_5->hook_init) {
  VAR_5->hook_init = FUNC_1(VAR_5, VAR_3);
  if (!VAR_5->hook_init) {
   FUNC_2("init_events: failed to get hook_init event: %lu",
        FUNC_0());
   return 0;
  }
 }

 if (!VAR_5->hook_ready) {
  VAR_5->hook_ready = FUNC_1(VAR_5, VAR_4);
  if (!VAR_5->hook_ready) {
   FUNC_2("init_events: failed to get hook_ready event: %lu",
        FUNC_0());
   return 0;
  }
 }

 if (!VAR_5->hook_exit) {
  VAR_5->hook_exit = FUNC_1(VAR_5, VAR_2);
  if (!VAR_5->hook_exit) {
   FUNC_2("init_events: failed to get hook_exit event: %lu",
        FUNC_0());
   return 0;
  }
 }

 return 1;
}
