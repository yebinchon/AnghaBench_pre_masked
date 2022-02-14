
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cursor_data {int visible; scalar_t__ current_cursor; int cursor_pos; } ;
typedef int ci ;
struct TYPE_3__ {int cbSize; scalar_t__ hCursor; int flags; int ptScreenPos; int member_0; } ;
typedef int HICON ;
typedef TYPE_1__ CURSORINFO ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct cursor_data*,int ) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(struct cursor_data *VAR_1)
{
 CURSORINFO VAR_2 = {0};
 HICON VAR_3;

 VAR_2.cbSize = sizeof(VAR_2);

 if (!FUNC_2(&VAR_2)) {
  VAR_1->visible = 0;
  return;
 }

 FUNC_4(&VAR_1->cursor_pos, &VAR_2.ptScreenPos, sizeof(VAR_1->cursor_pos));

 if (VAR_1->current_cursor == VAR_2.hCursor) {
  return;
 }

 VAR_3 = FUNC_0(VAR_2.hCursor);
 VAR_1->visible = FUNC_3(VAR_1, VAR_3);
 VAR_1->current_cursor = VAR_2.hCursor;
 if ((VAR_2.flags & VAR_0) == 0)
  VAR_1->visible = 0;
 FUNC_1(VAR_3);
}
