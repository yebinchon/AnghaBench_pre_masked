
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cursor_hidden; scalar_t__ valid; } ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ right; } ;
struct window_capture {float check_window_timer; float cursor_check_time; float resize_timer; scalar_t__ window; TYPE_2__ capture; int compatibility; int cursor; TYPE_1__ last_rect; int executable; int title; int class; int priority; int source; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ DWORD ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 float VAR_2 ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void *VAR_3, float VAR_4)
{
 struct window_capture *VAR_5 = VAR_3;
 RECT VAR_6;
 bool VAR_7 = 0;

 if (!FUNC_11(VAR_5->source))
  return;

 if (!VAR_5->window || !FUNC_4(VAR_5->window)) {
  if (!VAR_5->title && !VAR_5->class)
   return;

  VAR_5->check_window_timer += VAR_4;

  if (VAR_5->check_window_timer < 1.0f) {
   if (VAR_5->capture.valid)
    FUNC_6(&VAR_5->capture);
   return;
  }

  VAR_5->check_window_timer = 0.0f;

  VAR_5->window = FUNC_8(VAR_1, VAR_5->priority,
      VAR_5->class, VAR_5->title, VAR_5->executable);
  if (!VAR_5->window) {
   if (VAR_5->capture.valid)
    FUNC_6(&VAR_5->capture);
   return;
  }

  VAR_7 = 1;

 } else if (FUNC_3(VAR_5->window)) {
  return;
 }

 VAR_5->cursor_check_time += VAR_4;
 if (VAR_5->cursor_check_time > VAR_0) {
  DWORD VAR_8, VAR_9;


  if (!FUNC_2(FUNC_1(),
           &VAR_8))
   VAR_8 = 0;

  if (!FUNC_2(VAR_5->window, &VAR_9))
   VAR_9 = 0;

  if (VAR_8 && VAR_9 &&
      VAR_8 != VAR_9)
   VAR_5->capture.cursor_hidden = 1;
  else
   VAR_5->capture.cursor_hidden = 0;

  VAR_5->cursor_check_time = 0.0f;
 }

 FUNC_9();

 FUNC_0(VAR_5->window, &VAR_6);

 if (!VAR_7) {
  VAR_5->resize_timer += VAR_4;

  if (VAR_5->resize_timer >= VAR_2) {
   if (VAR_6.bottom != VAR_5->last_rect.bottom ||
       VAR_6.right != VAR_5->last_rect.right)
    VAR_7 = 1;

   VAR_5->resize_timer = 0.0f;
  }
 }

 if (VAR_7) {
  VAR_5->resize_timer = 0.0f;
  VAR_5->last_rect = VAR_6;
  FUNC_6(&VAR_5->capture);
  FUNC_7(&VAR_5->capture, 0, 0, VAR_6.right, VAR_6.bottom,
    VAR_5->cursor, VAR_5->compatibility);
 }

 FUNC_5(&VAR_5->capture, VAR_5->window);
 FUNC_10();
}
