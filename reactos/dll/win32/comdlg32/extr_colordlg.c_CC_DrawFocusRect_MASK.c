
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int right; int left; int bottom; int top; } ;
struct TYPE_8__ {int hwndFocus; TYPE_1__ focusRect; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(CCPRIV *VAR_0, HWND VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
  RECT VAR_6;
  int VAR_7, VAR_8;
  HDC VAR_9;

  FUNC_0(VAR_0);

  FUNC_2(VAR_1, &VAR_6);
  VAR_7 = (VAR_6.right - VAR_6.left) / VAR_5;
  VAR_8 = (VAR_6.bottom - VAR_6.top) / VAR_4;
  VAR_6.left += (VAR_2 * VAR_7) - 2;
  VAR_6.top += (VAR_3 * VAR_8) - 2;
  VAR_6.right = VAR_6.left + VAR_7;
  VAR_6.bottom = VAR_6.top + VAR_8;

  VAR_9 = FUNC_3(VAR_1);
  FUNC_1(VAR_9, &VAR_6);
  VAR_0->focusRect = VAR_6;
  VAR_0->hwndFocus = VAR_1;
  FUNC_4(VAR_1, VAR_9);
}
