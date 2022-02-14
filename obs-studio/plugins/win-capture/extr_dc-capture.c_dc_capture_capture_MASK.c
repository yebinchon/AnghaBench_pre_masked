
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; } ;
struct dc_capture {int texture_written; int cursor_hidden; scalar_t__ cursor_captured; int y; int x; int height; int width; TYPE_1__ ci; scalar_t__ capture_cursor; } ;
typedef int HWND ;
typedef int HDC ;
typedef int CURSORINFO ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dc_capture*) ;
 int FUNC_6 (struct dc_capture*) ;
 int FUNC_7 (struct dc_capture*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

void FUNC_9(struct dc_capture *VAR_2, HWND VAR_3)
{
 HDC VAR_4;
 HDC VAR_5;

 if (VAR_2->capture_cursor) {
  FUNC_8(&VAR_2->ci, 0, sizeof(CURSORINFO));
  VAR_2->ci.cbSize = sizeof(CURSORINFO);
  VAR_2->cursor_captured = FUNC_1(&VAR_2->ci);
 }

 VAR_5 = FUNC_5(VAR_2);
 if (!VAR_5) {
  FUNC_4(VAR_0, "[capture_screen] Failed to get "
      "texture DC");
  return;
 }

 VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_5, 0, 0, VAR_2->width, VAR_2->height, VAR_4,
        VAR_2->x, VAR_2->y, VAR_1);

 FUNC_3(((void*)0), VAR_4);

 if (VAR_2->cursor_captured && !VAR_2->cursor_hidden)
  FUNC_7(VAR_2, VAR_5, VAR_3);

 FUNC_6(VAR_2);

 VAR_2->texture_written = 1;
}
