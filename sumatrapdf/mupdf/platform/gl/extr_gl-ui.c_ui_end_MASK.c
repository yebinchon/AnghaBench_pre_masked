
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cursor; scalar_t__ last_cursor; char* active; char* focus; scalar_t__ right; scalar_t__ grab_right; scalar_t__ middle; scalar_t__ grab_middle; scalar_t__ down; scalar_t__ grab_down; int overlay_list; scalar_t__ overlay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_2 ;

void FUNC_6(void)
{
 int VAR_3;

 if (VAR_2.overlay)
  FUNC_1(VAR_2.overlay_list);

 if (VAR_2.cursor != VAR_2.last_cursor)
 {
  FUNC_3(VAR_2.cursor);
  VAR_2.last_cursor = VAR_2.cursor;
 }

 VAR_3 = FUNC_2();
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_1, "glGetError: %s", FUNC_5(VAR_3));

 if (!VAR_2.active && (VAR_2.down || VAR_2.middle || VAR_2.right))
  VAR_2.active = "dummy";

 if ((VAR_2.grab_down && !VAR_2.down) || (VAR_2.grab_middle && !VAR_2.middle) || (VAR_2.grab_right && !VAR_2.right))
 {
  VAR_2.grab_down = VAR_2.grab_middle = VAR_2.grab_right = 0;
  VAR_2.active = ((void*)0);
 }

 if (VAR_2.active)
 {
  if (VAR_2.active != VAR_2.focus)
   VAR_2.focus = ((void*)0);
  if (!VAR_2.grab_down && !VAR_2.grab_middle && !VAR_2.grab_right)
  {
   VAR_2.grab_down = VAR_2.down;
   VAR_2.grab_middle = VAR_2.middle;
   VAR_2.grab_right = VAR_2.right;
  }
 }

 FUNC_4();
}
