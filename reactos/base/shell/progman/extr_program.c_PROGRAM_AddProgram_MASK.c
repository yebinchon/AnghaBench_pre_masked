
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int lvItem ;
typedef int WCHAR ;
struct TYPE_13__ {int mask; int iItem; int iImage; scalar_t__ lParam; TYPE_1__* pszText; } ;
struct TYPE_12__ {int hListView; int hListLarge; TYPE_1__* hPrograms; TYPE_1__* hActiveProgram; } ;
struct TYPE_11__ {int nIconIndex; int nCmdShow; int nHotKey; int iItem; int * Tags; scalar_t__ TagsSize; int bNewVDM; int hIcon; struct TYPE_11__* hWorkDir; struct TYPE_11__* hIconFile; struct TYPE_11__* hCmdLine; struct TYPE_11__* hName; struct TYPE_11__* hNext; struct TYPE_11__* hPrior; TYPE_2__* hGroup; } ;
typedef TYPE_1__ PROGRAM ;
typedef TYPE_2__ PROGGROUP ;
typedef TYPE_3__ LVITEMW ;
typedef TYPE_1__* LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ LPARAM ;
typedef int INT ;
typedef int HICON ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int) ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_10 (scalar_t__) ;

PROGRAM*
FUNC_11(PROGGROUP* VAR_10, HICON VAR_11, LPCWSTR VAR_12,
                   INT VAR_13, INT VAR_14, LPCWSTR VAR_15, LPCWSTR VAR_16, INT VAR_17,
                   LPCWSTR VAR_18, INT VAR_19, INT VAR_20, BOOL VAR_21)
{
    PROGRAM* VAR_22;
    PROGRAM* VAR_23;
    PROGRAM** VAR_24;
    LPWSTR VAR_25;
    LPWSTR VAR_26;
    LPWSTR VAR_27;
    LPWSTR VAR_28;
    LVITEMW VAR_29;
    INT VAR_30;

    VAR_22 = FUNC_0(VAR_0, sizeof(*VAR_22));
    VAR_27 = FUNC_0(VAR_0, (FUNC_10(VAR_12) + 1) * sizeof(WCHAR));
    VAR_25 = FUNC_0(VAR_0, (FUNC_10(VAR_15) + 1) * sizeof(WCHAR));
    VAR_26 = FUNC_0(VAR_0, (FUNC_10(VAR_16) + 1) * sizeof(WCHAR));
    VAR_28 = FUNC_0(VAR_0, (FUNC_10(VAR_18) + 1) * sizeof(WCHAR));
    if (!VAR_22 || !VAR_27 || !VAR_25 || !VAR_26 || !VAR_28)
    {
        FUNC_4(VAR_2, VAR_1, VAR_9);
        if (VAR_22) FUNC_2(VAR_22);
        if (VAR_27) FUNC_2(VAR_27);
        if (VAR_25) FUNC_2(VAR_25);
        if (VAR_26) FUNC_2(VAR_26);
        if (VAR_28) FUNC_2(VAR_28);
        return ((void*)0);
    }
    FUNC_9(VAR_27 , VAR_12 , (FUNC_10(VAR_12) + 1) * sizeof(WCHAR));
    FUNC_9(VAR_25 , VAR_15 , (FUNC_10(VAR_15) + 1) * sizeof(WCHAR));
    FUNC_9(VAR_26, VAR_16, (FUNC_10(VAR_16) + 1) * sizeof(WCHAR));
    FUNC_9(VAR_28 , VAR_18 , (FUNC_10(VAR_18) + 1) * sizeof(WCHAR));

    VAR_10->hActiveProgram = VAR_22;

    VAR_23 = ((void*)0);
    for (VAR_24 = &VAR_10->hPrograms; *VAR_24; VAR_24 = &VAR_23->hNext)
        VAR_23 = *VAR_24;
    *VAR_24 = VAR_22;

    VAR_22->hGroup = VAR_10;
    VAR_22->hPrior = VAR_23;
    VAR_22->hNext = ((void*)0);
    VAR_22->hName = VAR_27;
    VAR_22->hCmdLine = VAR_25;
    VAR_22->hIconFile = VAR_26;
    VAR_22->nIconIndex = VAR_17;
    VAR_22->hWorkDir = VAR_28;
    VAR_22->hIcon = VAR_11;
    VAR_22->nCmdShow = VAR_20;
    VAR_22->nHotKey = VAR_19;
    VAR_22->bNewVDM = VAR_21;
    VAR_22->TagsSize = 0;
    VAR_22->Tags = ((void*)0);

    FUNC_8(&VAR_29, sizeof(VAR_29));
    VAR_29.mask = VAR_4 | VAR_3 | VAR_5;
    VAR_29.pszText = (LPWSTR)VAR_12;
    VAR_29.lParam = (LPARAM)VAR_22;
    VAR_29.iImage = FUNC_3(VAR_10->hListLarge, -1, VAR_11);
    FUNC_1(VAR_11);

    VAR_29.iItem = FUNC_6(VAR_10->hListView, VAR_6, 0, 0);
    VAR_30 = FUNC_7(VAR_10->hListView, VAR_7, 0, (LPARAM)&VAR_29);
    VAR_22->iItem = VAR_30;
    if (VAR_13 != -1 && VAR_14 != -1)
        FUNC_6(VAR_10->hListView, VAR_8, VAR_29.iItem, FUNC_5(VAR_13, VAR_14));

    return VAR_22;
}
