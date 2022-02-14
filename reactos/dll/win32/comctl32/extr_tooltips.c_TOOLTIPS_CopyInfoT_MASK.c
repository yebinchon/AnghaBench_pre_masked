
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* tools; } ;
struct TYPE_7__ {scalar_t__ cbSize; int lParam; int * lpszText; int hinst; int rect; int uId; int hwnd; int uFlags; } ;
struct TYPE_6__ {int lParam; int * lpszText; int hinst; int rect; int uId; int hwnd; int uFlags; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef int LPSTR ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int *,int,int ,int ,int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_3 (const TOOLTIPS_INFO *VAR_4, INT VAR_5, TTTOOLINFOW *VAR_6, BOOL VAR_7)
{
    const TTTOOL_INFO *VAR_8 = &VAR_4->tools[VAR_5];

    VAR_6->uFlags = VAR_8->uFlags;
    VAR_6->hwnd = VAR_8->hwnd;
    VAR_6->uId = VAR_8->uId;
    VAR_6->rect = VAR_8->rect;
    VAR_6->hinst = VAR_8->hinst;

    if (VAR_6->lpszText) {
        if (VAR_8->lpszText == ((void*)0) ||
            FUNC_0(VAR_8->lpszText) ||
            VAR_8->lpszText == VAR_1)
            VAR_6->lpszText = VAR_8->lpszText;
        else if (VAR_7)
            FUNC_2 (VAR_6->lpszText, VAR_8->lpszText);
        else

            FUNC_1(VAR_0, 0, VAR_8->lpszText, -1,
                                (LPSTR)VAR_6->lpszText, VAR_2, ((void*)0), ((void*)0));
    }

    if (VAR_6->cbSize >= VAR_3)
        VAR_6->lParam = VAR_8->lParam;


}
