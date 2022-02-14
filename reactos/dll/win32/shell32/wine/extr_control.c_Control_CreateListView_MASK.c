
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
typedef int WCHAR ;
struct TYPE_9__ {int hWndListView; void* hImageListLarge; void* hImageListSmall; int hInst; int hWnd; int hWndStatusBar; } ;
struct TYPE_8__ {int mask; int iSubItem; int cx; int fmt; int * pszText; } ;
struct TYPE_7__ {int right; int left; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LVCOLUMNW ;
typedef int LPARAM ;
typedef int HMENU ;
typedef TYPE_3__ CPanel ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int,int ,int ,int,scalar_t__,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (int ,int ,int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int ,int,TYPE_2__*) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static BOOL FUNC_7 (CPanel *VAR_25)
{
    RECT VAR_26, VAR_27;
    WCHAR VAR_28[] = {0};
    WCHAR VAR_29[VAR_16];
    LVCOLUMNW VAR_30;


    FUNC_1(VAR_25->hWndStatusBar, &VAR_27);
    FUNC_1(VAR_25->hWnd, &VAR_26);

    VAR_25->hWndListView = FUNC_0(VAR_23, VAR_22,
                          VAR_28, VAR_6 | VAR_15,
                          0, 0, VAR_26.right - VAR_26.left, VAR_26.bottom - VAR_26.top -
                          (VAR_27.bottom - VAR_27.top), VAR_25->hWnd,
                          (HMENU) VAR_1, VAR_25->hInst, ((void*)0));

    if (!VAR_25->hWndListView)
        return VAR_0;


    VAR_25->hImageListSmall = FUNC_3(FUNC_2(VAR_18),
        FUNC_2(VAR_20), VAR_4 | VAR_5, 1, 1);
    VAR_25->hImageListLarge = FUNC_3(FUNC_2(VAR_17),
        FUNC_2(VAR_19), VAR_4 | VAR_5, 1, 1);

    FUNC_6(VAR_25->hWndListView, VAR_12, VAR_14, (LPARAM)VAR_25->hImageListSmall);
    FUNC_6(VAR_25->hWndListView, VAR_12, VAR_13, (LPARAM)VAR_25->hImageListLarge);


    VAR_30.mask = VAR_8 | VAR_10 | VAR_9 | VAR_11;
    VAR_30.pszText = VAR_29;
    VAR_30.fmt = VAR_7;


    VAR_30.iSubItem = 0;
    VAR_30.cx = (VAR_26.right - VAR_26.left) / 3;
    FUNC_5(VAR_24, VAR_3, VAR_29, sizeof(VAR_29) / sizeof(VAR_29[0]));

    if (FUNC_4(VAR_25->hWndListView, 0, &VAR_30) == -1)
        return VAR_0;


    VAR_30.iSubItem = 1;
    VAR_30.cx = ((VAR_26.right - VAR_26.left) / 3) * 2;
    FUNC_5(VAR_24, VAR_2, VAR_29, sizeof(VAR_29) /
        sizeof(VAR_29[0]));

    if (FUNC_4(VAR_25->hWndListView, 1, &VAR_30) == -1)
        return VAR_0;

    return(VAR_21);
}
