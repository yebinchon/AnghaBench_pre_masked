
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {int bottom; int top; int right; scalar_t__ left; } ;
struct TYPE_15__ {int itemID; int CtlID; scalar_t__ itemData; TYPE_3__ rcItem; int hDC; int hwndItem; } ;
struct TYPE_13__ {int style; scalar_t__ text; int hIcon; TYPE_3__ bound; } ;
struct TYPE_12__ {int numParts; int Notify; int Self; scalar_t__ simple; } ;
typedef TYPE_1__ STATUS_INFO ;
typedef TYPE_2__ STATUSWINDOWPART ;
typedef TYPE_3__ RECT ;
typedef int LPARAM ;
typedef int INT ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;
typedef TYPE_4__ DRAWITEMSTRUCT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_3__*,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__,int,int ,int,int,int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int,int ,TYPE_3__*,int *) ;
 int FUNC_4 (scalar_t__,int ,int,int ,scalar_t__,int,int,int ,TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int VAR_16 ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_11 (const STATUS_INFO *VAR_17, HDC VAR_18, const STATUSWINDOWPART *VAR_19, int VAR_20)
{
    RECT VAR_21 = VAR_19->bound;
    UINT VAR_22 = VAR_1;
    HTHEME VAR_23 = FUNC_7 (VAR_17->Self);
    int VAR_24 = VAR_15;
    int VAR_25 = 0;

    FUNC_9("part bound %s\n", FUNC_10(&VAR_21));
    if (VAR_19->style & VAR_13)
        VAR_22 = VAR_0;
    else if (VAR_19->style & VAR_11)
        VAR_22 = 0;

    if (VAR_23)
    {
        if ((FUNC_6 (VAR_17->Self, VAR_9) & VAR_10)
            && (VAR_17->simple || (VAR_20 == (VAR_17->numParts-1))))
            VAR_24 = VAR_14;
        FUNC_3(VAR_23, VAR_18, VAR_24, 0, &VAR_21, ((void*)0));
    }
    else
        FUNC_0(VAR_18, &VAR_21, VAR_22, VAR_3|VAR_2);

    if (VAR_19->hIcon) {
        INT VAR_26 = VAR_21.bottom - VAR_21.top;
        FUNC_1 (VAR_18, VAR_21.left + 2, VAR_21.top, VAR_19->hIcon, VAR_26, VAR_26, 0, 0, VAR_4);
        VAR_25 = 2 + VAR_26;
    }

    if (VAR_19->style & VAR_12) {
 DRAWITEMSTRUCT VAR_27;

 VAR_27.CtlID = FUNC_5 (VAR_17->Self, VAR_8);
 VAR_27.itemID = VAR_20;
 VAR_27.hwndItem = VAR_17->Self;
 VAR_27.hDC = VAR_18;
 VAR_27.rcItem = VAR_21;
 VAR_27.itemData = (ULONG_PTR)VAR_19->text;
        FUNC_8 (VAR_17->Notify, VAR_16, VAR_27.CtlID, (LPARAM)&VAR_27);
    } else {
        VAR_21.left += VAR_25;
        FUNC_2 (VAR_18, &VAR_21, VAR_19->text, VAR_11);

    }
}
