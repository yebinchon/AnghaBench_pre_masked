
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {float cursor_check_time; scalar_t__ process_id; int cursor_hidden; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct game_capture *VAR_0, float VAR_1)
{

 VAR_0->cursor_check_time += VAR_1;
 if (VAR_0->cursor_check_time >= 0.1f) {
  DWORD VAR_2;
  FUNC_1(FUNC_0(),
      &VAR_2);
  if (VAR_0->process_id != VAR_2)
   VAR_0->cursor_hidden = 1;
  else
   VAR_0->cursor_hidden = 0;
  VAR_0->cursor_check_time = 0.0f;
 }
}
