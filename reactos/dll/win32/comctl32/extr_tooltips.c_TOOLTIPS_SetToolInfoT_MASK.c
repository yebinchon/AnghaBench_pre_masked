
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_13__ {int nCurrentTool; scalar_t__* szTipText; TYPE_1__* tools; } ;
struct TYPE_12__ {scalar_t__ cbSize; int lParam; int * lpszText; int hinst; int rect; int uId; int hwnd; int uFlags; } ;
struct TYPE_11__ {int lParam; int * lpszText; int hinst; int rect; int uId; int hwnd; int uFlags; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef int LPSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 int FUNC_4 (int ,int ,int ,int,int *,int) ;
 int FUNC_5 (TYPE_3__*,int,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__ const*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static LRESULT
FUNC_13 (TOOLTIPS_INFO *VAR_5, const TTTOOLINFOW *VAR_6, BOOL VAR_7)
{
    TTTOOL_INFO *VAR_8;
    INT VAR_9;

    if (!VAR_6) return 0;
    if (VAR_6->cbSize < VAR_3)
 return 0;

    VAR_9 = FUNC_6 (VAR_5, VAR_6);
    if (VAR_9 == -1) return 0;

    FUNC_10("tool %d\n", VAR_9);

    VAR_8 = &VAR_5->tools[VAR_9];


    VAR_8->uFlags = VAR_6->uFlags;
    VAR_8->hwnd = VAR_6->hwnd;
    VAR_8->uId = VAR_6->uId;
    VAR_8->rect = VAR_6->rect;
    VAR_8->hinst = VAR_6->hinst;

    if (FUNC_2(VAR_6->lpszText)) {
 FUNC_10("set string id %x\n", FUNC_3(VAR_6->lpszText));
 VAR_8->lpszText = VAR_6->lpszText;
    }
    else {
 if (FUNC_8(VAR_6->lpszText, VAR_7))
     VAR_8->lpszText = VAR_2;
 else {
     if ( (VAR_8->lpszText) &&
   !FUNC_2(VAR_8->lpszText) ) {
  if( VAR_8->lpszText != VAR_2)
                    FUNC_1 (VAR_8->lpszText);
  VAR_8->lpszText = ((void*)0);
     }
     if (VAR_6->lpszText) {
  if (VAR_7) {
      INT VAR_10 = FUNC_11 (VAR_6->lpszText);
      VAR_8->lpszText = FUNC_0 ((VAR_10+1)*sizeof(WCHAR));
      FUNC_12 (VAR_8->lpszText, VAR_6->lpszText);
  }
  else {
      INT VAR_11 = FUNC_4(VAR_0, 0, (LPSTR)VAR_6->lpszText,
           -1, ((void*)0), 0);
      VAR_8->lpszText = FUNC_0 (VAR_11 * sizeof(WCHAR));
      FUNC_4(VAR_0, 0, (LPSTR)VAR_6->lpszText, -1,
     VAR_8->lpszText, VAR_11);
  }
     }
 }
    }

    if (VAR_6->cbSize >= VAR_4)
 VAR_8->lParam = VAR_6->lParam;

    if (VAR_5->nCurrentTool == VAR_9)
    {
        FUNC_5 (VAR_5, VAR_5->nCurrentTool, VAR_5->szTipText);

        if (VAR_5->szTipText[0] == 0)
            FUNC_7(VAR_5);
        else
            FUNC_9 (VAR_5, VAR_1);
    }

    return 0;
}
