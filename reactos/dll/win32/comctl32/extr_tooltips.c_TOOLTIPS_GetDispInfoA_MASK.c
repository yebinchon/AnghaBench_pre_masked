
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_11__ {scalar_t__ lpszText; scalar_t__ szText; int uFlags; int hinst; TYPE_1__ hdr; int lParam; } ;
struct TYPE_10__ {int hwndSelf; } ;
struct TYPE_9__ {int uFlags; int uId; int hwnd; int * lpszText; int hinst; int lParam; } ;
typedef TYPE_2__ TTTOOL_INFO ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef TYPE_4__ NMTTDISPINFOA ;
typedef int * LPWSTR ;
typedef int LPARAM ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int*,int ) ;
 int FUNC_7 (int **,int*) ;
 int FUNC_8 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_10(const TOOLTIPS_INFO *VAR_5, TTTOOL_INFO *VAR_6, WCHAR *VAR_7)
{
    NMTTDISPINFOA VAR_8;


    FUNC_9 (&VAR_8, sizeof(NMTTDISPINFOA));
    VAR_8.hdr.hwndFrom = VAR_5->hwndSelf;
    VAR_8.hdr.idFrom = VAR_6->uId;
    VAR_8.hdr.code = VAR_3;
    VAR_8.lpszText = VAR_8.szText;
    VAR_8.uFlags = VAR_6->uFlags;
    VAR_8.lParam = VAR_6->lParam;

    FUNC_8("hdr.idFrom = %lx\n", VAR_8.hdr.idFrom);
    FUNC_5(VAR_6->hwnd, VAR_4, VAR_6->uId, (LPARAM)&VAR_8);

    if (FUNC_2(VAR_8.lpszText)) {
        FUNC_4(VAR_8.hinst, FUNC_3(VAR_8.lpszText),
               VAR_7, VAR_0);
        if (VAR_8.uFlags & VAR_2) {
            VAR_6->hinst = VAR_8.hinst;
            VAR_6->lpszText = (LPWSTR)VAR_8.lpszText;
        }
    }
    else if (VAR_8.lpszText == 0) {
        VAR_7[0] = '\0';
    }
    else if (VAR_8.lpszText != VAR_1) {
        FUNC_6(VAR_8.lpszText, VAR_7, VAR_0);
        if (VAR_8.uFlags & VAR_2) {
            VAR_6->hinst = 0;
            VAR_6->lpszText = ((void*)0);
            FUNC_7(&VAR_6->lpszText, VAR_7);
        }
    }
    else {
        FUNC_0("recursive text callback\n");
        VAR_7[0] = '\0';
    }



    if (VAR_7[0] == 0x00) {

        FUNC_5(FUNC_1(VAR_6->hwnd), VAR_4, VAR_6->uId, (LPARAM)&VAR_8);

        if (FUNC_2(VAR_8.lpszText)) {
            FUNC_4(VAR_8.hinst, FUNC_3(VAR_8.lpszText),
                   VAR_7, VAR_0);
        } else if (VAR_8.lpszText &&
                   VAR_8.lpszText != VAR_1) {
            FUNC_6(VAR_8.lpszText, VAR_7, VAR_0);
        }
    }
}
