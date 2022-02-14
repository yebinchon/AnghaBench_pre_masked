
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_6__ {int hwnd; int hwndUpDown; scalar_t__ needsScrolling; } ;
typedef TYPE_1__ TAB_INFO ;
typedef TYPE_2__ RECT ;
typedef int HDC ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__ const*,int ,int,int *) ;

__attribute__((used)) static void
FUNC_5(const TAB_INFO* VAR_0, int VAR_1)
{
  HDC VAR_2 = FUNC_1(VAR_0->hwnd);
  RECT VAR_3, VAR_4;


  if (VAR_0->needsScrolling)
  {
    FUNC_2(VAR_0->hwnd, &VAR_4);
    FUNC_2(VAR_0->hwndUpDown, &VAR_3);
    FUNC_0(VAR_2, VAR_3.left - VAR_4.left, VAR_3.top - VAR_4.top, VAR_3.right - VAR_4.left, VAR_3.bottom - VAR_4.top);
  }
  FUNC_4(VAR_0, VAR_2, VAR_1, ((void*)0));
  FUNC_3(VAR_0->hwnd, VAR_2);
}
