
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_11__ {int uNumTools; scalar_t__ hwndSelf; TYPE_1__* tools; } ;
struct TYPE_10__ {int uFlags; scalar_t__ cbSize; int lParam; int * lpszText; int hinst; int rect; scalar_t__ uId; int hwnd; } ;
struct TYPE_9__ {int uFlags; int uInternalFlags; void* bNotifyUnicode; int hwnd; scalar_t__ uId; int lParam; int * lpszText; int hinst; int rect; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TTTOOLINFOW ;
typedef TYPE_3__ TOOLTIPS_INFO ;
typedef void* LRESULT ;
typedef int LPSTR ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOL ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 int FUNC_4 (int ,int ,int ,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int VAR_6 ;
 int FUNC_8 (char*,...) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static LRESULT
FUNC_14 (TOOLTIPS_INFO *VAR_14, const TTTOOLINFOW *VAR_15, BOOL VAR_16)
{
    TTTOOL_INFO *VAR_17;
    INT VAR_18;

    if (!VAR_15) return VAR_1;

    FUNC_8("add tool (%p) %p %ld%s\n", VAR_14->hwndSelf, VAR_15->hwnd, VAR_15->uId,
        (VAR_15->uFlags & VAR_8) ? " TTF_IDISHWND" : "");

    if (VAR_15->cbSize > VAR_12 && VAR_16)
        return VAR_1;

    if (VAR_14->uNumTools == 0) {
 VAR_14->tools = FUNC_0 (sizeof(TTTOOL_INFO));
 VAR_17 = VAR_14->tools;
    }
    else {
 TTTOOL_INFO *VAR_19 = VAR_14->tools;
 VAR_14->tools =
     FUNC_0 (sizeof(TTTOOL_INFO) * (VAR_14->uNumTools + 1));
 FUNC_12 (VAR_14->tools, VAR_19,
  VAR_14->uNumTools * sizeof(TTTOOL_INFO));
 FUNC_1 (VAR_19);
 VAR_17 = &VAR_14->tools[VAR_14->uNumTools];
    }

    VAR_14->uNumTools++;


    VAR_17->uFlags = VAR_15->uFlags;
    VAR_17->uInternalFlags = (VAR_15->uFlags & (VAR_9 | VAR_8));
    VAR_17->hwnd = VAR_15->hwnd;
    VAR_17->uId = VAR_15->uId;
    VAR_17->rect = VAR_15->rect;
    VAR_17->hinst = VAR_15->hinst;

    if (VAR_15->cbSize >= VAR_10) {
        if (FUNC_2(VAR_15->lpszText)) {
            FUNC_8("add string id %x\n", FUNC_3(VAR_15->lpszText));
            VAR_17->lpszText = VAR_15->lpszText;
        }
        else if (VAR_15->lpszText) {
            if (FUNC_7(VAR_15->lpszText, VAR_16)) {
                FUNC_8("add CALLBACK\n");
                VAR_17->lpszText = VAR_2;
            }
            else if (VAR_16) {
                INT VAR_20 = FUNC_11 (VAR_15->lpszText);
                FUNC_8("add text %s\n", FUNC_10(VAR_15->lpszText));
                VAR_17->lpszText = FUNC_0 ((VAR_20 + 1)*sizeof(WCHAR));
                FUNC_13 (VAR_17->lpszText, VAR_15->lpszText);
            }
            else {
                INT VAR_21 = FUNC_4(VAR_0, 0, (LPSTR)VAR_15->lpszText, -1, ((void*)0), 0);
                FUNC_8("add text \"%s\"\n", FUNC_9((char *)VAR_15->lpszText));
                VAR_17->lpszText = FUNC_0 (VAR_21 * sizeof(WCHAR));
                FUNC_4(VAR_0, 0, (LPSTR)VAR_15->lpszText, -1, VAR_17->lpszText, VAR_21);
            }
        }
    }

    if (VAR_15->cbSize >= VAR_11)
 VAR_17->lParam = VAR_15->lParam;


    if (VAR_17->uInternalFlags & VAR_9) {
 if (VAR_17->uInternalFlags & VAR_8) {
     FUNC_6((HWND)VAR_17->uId, VAR_6, 1,
         (DWORD_PTR)VAR_14->hwndSelf);
 }
 else {
     FUNC_6(VAR_17->hwnd, VAR_6, 1,
         (DWORD_PTR)VAR_14->hwndSelf);
 }
 FUNC_8("subclassing installed\n");
    }

    VAR_18 = FUNC_5 (VAR_17->hwnd, VAR_13,
                            (WPARAM)VAR_14->hwndSelf, VAR_5);
    if (VAR_18 == VAR_3) {
        VAR_17->bNotifyUnicode = VAR_1;
 FUNC_8(" -- WM_NOTIFYFORMAT returns: NFR_ANSI\n");
    } else if (VAR_18 == VAR_4) {
        VAR_17->bNotifyUnicode = VAR_7;
 FUNC_8(" -- WM_NOTIFYFORMAT returns: NFR_UNICODE\n");
    } else {
        FUNC_8 (" -- WM_NOTIFYFORMAT returns: %d\n", VAR_18);
    }

    return VAR_7;
}
