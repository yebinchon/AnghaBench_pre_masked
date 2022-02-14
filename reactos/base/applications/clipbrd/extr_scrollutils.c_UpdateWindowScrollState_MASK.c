
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int si ;
struct TYPE_11__ {void* nPageX; void* nPageY; void* CurrentY; void* MaxY; void* nMaxHeight; void* CurrentX; void* MaxX; void* nMaxWidth; } ;
struct TYPE_10__ {void* right; void* bottom; } ;
struct TYPE_9__ {int cbSize; int fMask; void* nPage; void* nPos; void* nMax; scalar_t__ nMin; } ;
typedef TYPE_1__ SCROLLINFO ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* LPSCROLLSTATE ;
typedef void* INT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,int) ;
 void* FUNC_4 (void*,int ) ;
 void* FUNC_5 (void*,void*) ;

void FUNC_6(HWND VAR_7, INT VAR_8, INT VAR_9, LPSCROLLSTATE VAR_10)
{
    RECT VAR_11;
    SCROLLINFO VAR_12;

    if (!FUNC_0(VAR_7, &VAR_11))
        FUNC_1(&VAR_11);

    FUNC_3(&VAR_12, sizeof(VAR_12));
    VAR_12.cbSize = sizeof(VAR_12);
    VAR_12.fMask = VAR_5 | VAR_3 | VAR_4 | VAR_2;

    VAR_10->nMaxWidth = VAR_8;
    VAR_10->MaxX = FUNC_4(VAR_8 - VAR_11.right, 0);
    VAR_10->CurrentX = FUNC_5(VAR_10->CurrentX, VAR_10->MaxX);
    VAR_10->nPageX = VAR_11.right;
    VAR_12.nMin = 0;
    VAR_12.nMax = VAR_8;
    VAR_12.nPage = VAR_10->nPageX;
    VAR_12.nPos = VAR_10->CurrentX;
    FUNC_2(VAR_7, VAR_0, &VAR_12, VAR_6);

    VAR_10->nMaxHeight = VAR_9;
    VAR_10->MaxY = FUNC_4(VAR_9 - VAR_11.bottom, 0);
    VAR_10->CurrentY = FUNC_5(VAR_10->CurrentY, VAR_10->MaxY);
    VAR_10->nPageY = VAR_11.bottom;
    VAR_12.nMin = 0;
    VAR_12.nMax = VAR_9;
    VAR_12.nPage = VAR_10->nPageY;
    VAR_12.nPos = VAR_10->CurrentY;
    FUNC_2(VAR_7, VAR_1, &VAR_12, VAR_6);
}
