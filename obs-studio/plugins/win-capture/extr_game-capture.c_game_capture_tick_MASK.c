
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; scalar_t__ cursor; int hook_rate; } ;
struct game_capture {float retry_time; int activate_hook; int showing; int error_acquiring; float retry_interval; float fps_reset_time; int cursor_data; TYPE_1__ config; int (* copy_texture ) (struct game_capture*) ;scalar_t__ active; scalar_t__ capturing; scalar_t__ hook_ready; scalar_t__ injector_process; scalar_t__ process_id; scalar_t__ hook_stop; int source; int priority; int class; int title; int executable; int hotkey_window; int activate_hook_now; int deactivate_hook; } ;
typedef enum capture_result { ____Placeholder_capture_result } capture_result ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_1 (struct game_capture*) ;
 int FUNC_2 (struct game_capture*,float) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 float FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct game_capture*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct game_capture*,int ) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (struct game_capture*) ;
 scalar_t__ FUNC_22 (struct game_capture*) ;
 int FUNC_23 (struct game_capture*) ;
 int FUNC_24 (struct game_capture*) ;
 int FUNC_25 (struct game_capture*) ;
 int FUNC_26 (char*,long) ;

__attribute__((used)) static void FUNC_27(void *VAR_6, float VAR_7)
{
 struct game_capture *VAR_8 = VAR_6;
 bool VAR_9 = FUNC_20(&VAR_8->deactivate_hook, 0);
 bool VAR_10 = FUNC_20(&VAR_8->activate_hook_now, 0);

 if (VAR_10) {
  HWND VAR_11 = (HWND)(uintptr_t)FUNC_19(
   &VAR_8->hotkey_window);

  if (FUNC_13(VAR_11))
   VAR_11 = FUNC_6(VAR_11);

  if (FUNC_8(&VAR_8->executable, VAR_11)) {
   FUNC_9(&VAR_8->title, VAR_11);
   FUNC_7(&VAR_8->class, VAR_11);

   VAR_8->priority = VAR_5;
   VAR_8->retry_time = 10.0f * FUNC_10(
        VAR_8->config.hook_rate);
   VAR_8->activate_hook = 1;
  } else {
   VAR_9 = 0;
   VAR_10 = 0;
  }
 } else if (VAR_9) {
  VAR_8->activate_hook = 0;
 }

 if (!FUNC_17(VAR_8->source)) {
  if (VAR_8->showing) {
   if (VAR_8->active)
    FUNC_23(VAR_8);
   VAR_8->showing = 0;
  }
  return;

 } else if (!VAR_8->showing) {
  VAR_8->retry_time =
   10.0f * FUNC_10(VAR_8->config.hook_rate);
 }

 if (VAR_8->hook_stop && FUNC_14(VAR_8->hook_stop)) {
  FUNC_5("hook stop signal received");
  FUNC_23(VAR_8);
 }
 if (VAR_8->active && VAR_9) {
  FUNC_23(VAR_8);
 }

 if (VAR_8->active && !VAR_8->hook_ready && VAR_8->process_id) {
  VAR_8->hook_ready = FUNC_18(VAR_8, VAR_4);
 }

 if (VAR_8->injector_process && FUNC_14(VAR_8->injector_process)) {
  DWORD VAR_12 = 0;

  FUNC_0(VAR_8->injector_process, &VAR_12);
  FUNC_3(&VAR_8->injector_process);

  if (VAR_12 != 0) {
   FUNC_26("inject process failed: %ld", (long)VAR_12);
   VAR_8->error_acquiring = 1;

  } else if (!VAR_8->capturing) {
   VAR_8->retry_interval =
    VAR_3 *
    FUNC_10(VAR_8->config.hook_rate);
   FUNC_23(VAR_8);
  }
 }

 if (VAR_8->hook_ready && FUNC_14(VAR_8->hook_ready)) {
  FUNC_5("capture initializing!");
  enum capture_result VAR_13 = FUNC_12(VAR_8);

  if (VAR_13 == VAR_2)
   VAR_8->capturing = FUNC_22(VAR_8);
  else
   FUNC_5("init_capture_data failed");

  if (VAR_13 != VAR_1 && !VAR_8->capturing) {
   VAR_8->retry_interval =
    VAR_3 *
    FUNC_10(VAR_8->config.hook_rate);
   FUNC_23(VAR_8);
  }
 }

 VAR_8->retry_time += VAR_7;

 if (!VAR_8->active) {
  if (!VAR_8->error_acquiring &&
      VAR_8->retry_time > VAR_8->retry_interval) {
   if (VAR_8->config.mode == VAR_0 ||
       VAR_8->activate_hook) {
    FUNC_25(VAR_8);
    VAR_8->retry_time = 0.0f;
   }
  }
 } else {
  if (!FUNC_1(VAR_8)) {
   FUNC_11("capture window no longer exists, "
        "terminating capture");
   FUNC_23(VAR_8);
  } else {
   if (VAR_8->copy_texture) {
    FUNC_15();
    VAR_8->copy_texture(VAR_8);
    FUNC_16();
   }

   if (VAR_8->config.cursor) {
    FUNC_2(VAR_8, VAR_7);
    FUNC_15();
    FUNC_4(&VAR_8->cursor_data);
    FUNC_16();
   }

   VAR_8->fps_reset_time += VAR_7;
   if (VAR_8->fps_reset_time >= VAR_8->retry_interval) {
    FUNC_21(VAR_8);
    VAR_8->fps_reset_time = 0.0f;
   }
  }
 }

 if (!VAR_8->showing)
  VAR_8->showing = 1;
}
