
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; } ;
struct game_capture {scalar_t__ process_id; int error_acquiring; int active; int thread_id; scalar_t__ next_window; TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct game_capture*) ;
 int FUNC_4 (struct game_capture*) ;
 int FUNC_5 (struct game_capture*) ;
 int FUNC_6 (struct game_capture*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(struct game_capture *VAR_1)
{
 if (VAR_1->config.mode == VAR_0) {
  FUNC_3(VAR_1);
 } else {
  FUNC_4(VAR_1);
 }

 if (VAR_1->next_window) {
  VAR_1->thread_id = FUNC_2(VAR_1->next_window,
        &VAR_1->process_id);


  if (VAR_1->process_id == FUNC_0())
   return;

  if (!VAR_1->thread_id && VAR_1->process_id)
   return;
  if (!VAR_1->process_id) {
   FUNC_7("error acquiring, failed to get window "
        "thread/process ids: %lu",
        FUNC_1());
   VAR_1->error_acquiring = 1;
   return;
  }

  if (!FUNC_5(VAR_1)) {
   FUNC_6(VAR_1);
  }
 } else {
  VAR_1->active = 0;
 }
}
