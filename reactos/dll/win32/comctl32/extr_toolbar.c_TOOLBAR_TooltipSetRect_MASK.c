
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ti ;
struct TYPE_9__ {int fsStyle; int rect; int idCommand; } ;
struct TYPE_8__ {scalar_t__ hwndToolTip; int hwndSelf; } ;
struct TYPE_7__ {int cbSize; int rect; int uId; int hwnd; } ;
typedef TYPE_1__ TTTOOLINFOW ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef TYPE_3__ TBUTTON_INFO ;
typedef int LPARAM ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(const TOOLBAR_INFO *VAR_2, const TBUTTON_INFO *VAR_3)
{

    if (VAR_2->hwndToolTip && !(VAR_3->fsStyle & VAR_0))
    {
        TTTOOLINFOW VAR_4;

        FUNC_1(&VAR_4, sizeof(VAR_4));
        VAR_4.cbSize = sizeof(VAR_4);
        VAR_4.hwnd = VAR_2->hwndSelf;
        VAR_4.uId = VAR_3->idCommand;
        VAR_4.rect = VAR_3->rect;
        FUNC_0(VAR_2->hwndToolTip, VAR_1, 0, (LPARAM)&VAR_4);
    }
}
