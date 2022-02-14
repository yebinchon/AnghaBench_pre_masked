
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int nclm ;
typedef int WCHAR ;
struct TYPE_20__ {int hwndParent; scalar_t__ lpszName; } ;
struct TYPE_16__ {scalar_t__ idFrom; int code; void* hwndFrom; } ;
struct TYPE_19__ {TYPE_3__ hdr; scalar_t__ hwndToolTips; } ;
struct TYPE_18__ {int cbSize; int lfStatusFont; } ;
struct TYPE_14__ {scalar_t__ hIcon; scalar_t__ style; scalar_t__ x; scalar_t__ text; void* bound; } ;
struct TYPE_17__ {int numParts; int minHeight; scalar_t__ hwndToolTip; int height; TYPE_2__* parts; TYPE_1__ part0; int hDefaultFont; int Notify; int horizontalGap; int verticalBorder; int horizontalBorder; scalar_t__ hFont; int clrBk; int simple; void* Self; } ;
struct TYPE_15__ {int x; void* text; scalar_t__ hIcon; scalar_t__ style; void* bound; } ;
typedef TYPE_4__ STATUS_INFO ;
typedef int STATUSWINDOWPART ;
typedef void* RECT ;
typedef TYPE_5__ NONCLIENTMETRICSW ;
typedef TYPE_6__ NMTOOLTIPSCREATED ;
typedef int LRESULT ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef void* HWND ;
typedef int HINSTANCE ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef TYPE_7__ CREATESTRUCTA ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int,int ,int ,int ,int ,void*,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (void*,void**) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (void*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int ,scalar_t__,int ) ;
 int FUNC_12 (void*,int ,int ) ;
 int FUNC_13 (void*,int ,int) ;
 int FUNC_14 (int ,int,TYPE_5__*,int ) ;
 int VAR_13 ;
 int FUNC_15 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_16 (TYPE_5__*,int) ;
 int FUNC_17 (void*,int ) ;
 int FUNC_18 (int ) ;
 int VAR_19 ;

__attribute__((used)) static LRESULT
FUNC_19 (HWND VAR_20, const CREATESTRUCTA *VAR_21)
{
    STATUS_INFO *VAR_22;
    NONCLIENTMETRICSW VAR_23;
    DWORD VAR_24;
    RECT VAR_25;
    int VAR_26;

    FUNC_15("\n");
    VAR_22 = FUNC_0 (sizeof(STATUS_INFO));
    if (!VAR_22) goto create_fail;
    FUNC_12 (VAR_20, 0, (DWORD_PTR)VAR_22);

    VAR_22->Self = VAR_20;
    VAR_22->Notify = VAR_21->hwndParent;
    VAR_22->numParts = 1;
    VAR_22->parts = 0;
    VAR_22->simple = VAR_2;
    VAR_22->clrBk = VAR_0;
    VAR_22->hFont = 0;
    VAR_22->horizontalBorder = VAR_6;
    VAR_22->verticalBorder = VAR_15;
    VAR_22->horizontalGap = VAR_7;
    VAR_22->minHeight = FUNC_4(VAR_11);
    if (VAR_22->minHeight & 1) VAR_22->minHeight--;

    FUNC_9(VAR_22, VAR_22->Notify, VAR_8);

    FUNC_16 (&VAR_23, sizeof(VAR_23));
    VAR_23.cbSize = sizeof(VAR_23);
    FUNC_14 (VAR_12, VAR_23.cbSize, &VAR_23, 0);
    VAR_22->hDefaultFont = FUNC_1 (&VAR_23.lfStatusFont);

    FUNC_3 (VAR_20, &VAR_25);


    VAR_22->part0.bound = VAR_25;
    VAR_22->part0.text = 0;
    VAR_22->part0.x = 0;
    VAR_22->part0.style = 0;
    VAR_22->part0.hIcon = 0;


    VAR_22->parts = FUNC_0 (sizeof(STATUSWINDOWPART));
    if (!VAR_22->parts) goto create_fail;
    VAR_22->parts[0].bound = VAR_25;
    VAR_22->parts[0].text = 0;
    VAR_22->parts[0].x = -1;
    VAR_22->parts[0].style = 0;
    VAR_22->parts[0].hIcon = 0;

    FUNC_7 (VAR_20, VAR_19);

    if (VAR_21->lpszName && (VAR_26 = FUNC_18 ((LPCWSTR)VAR_21->lpszName)))
    {
        VAR_22->parts[0].text = FUNC_0 ((VAR_26 + 1)*sizeof(WCHAR));
        if (!VAR_22->parts[0].text) goto create_fail;
        FUNC_17 (VAR_22->parts[0].text, (LPCWSTR)VAR_21->lpszName);
    }

    VAR_24 = FUNC_6 (VAR_20, VAR_5);

    VAR_24 &= ~VAR_17;
    FUNC_13 (VAR_20, VAR_5, VAR_24);

    VAR_22->height = FUNC_8(VAR_22);

    if (VAR_24 & VAR_10) {
 VAR_22->hwndToolTip =
     FUNC_2 (0, VAR_13, ((void*)0), VAR_18 | VAR_14,
        VAR_1, VAR_1, VAR_1,
        VAR_1, VAR_20, 0,
        (HINSTANCE)FUNC_5(VAR_20, VAR_3), ((void*)0));

 if (VAR_22->hwndToolTip) {
     NMTOOLTIPSCREATED VAR_27;

     VAR_27.hdr.hwndFrom = VAR_20;
     VAR_27.hdr.idFrom = FUNC_5 (VAR_20, VAR_4);
     VAR_27.hdr.code = VAR_9;
     VAR_27.hwndToolTips = VAR_22->hwndToolTip;

     FUNC_11 (VAR_21->hwndParent, VAR_16, VAR_27.hdr.idFrom, (LPARAM)&VAR_27);
 }
    }

    return 0;

create_fail:
    FUNC_15("    failed!\n");
    if (VAR_22) FUNC_10(VAR_22);
    return -1;
}
