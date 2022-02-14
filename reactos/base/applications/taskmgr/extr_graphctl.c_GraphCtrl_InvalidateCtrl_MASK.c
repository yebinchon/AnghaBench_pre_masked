
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int left; } ;
struct TYPE_11__ {int left; } ;
struct TYPE_10__ {int left; int top; int bottom; int right; } ;
struct TYPE_8__ {int left; int right; int top; int bottom; } ;
struct TYPE_9__ {int m_nYDecimals; int m_nPlotWidth; int m_hParentWnd; TYPE_5__ m_rectClient; int m_brushBack; int * m_dcPlot; int m_crBackColor; int * m_bitmapPlot; int m_nClientHeight; int m_nClientWidth; int * m_bitmapOldPlot; int * m_dcGrid; TYPE_1__ m_rectPlot; int m_dLowerLimit; int m_dUpperLimit; int * m_bitmapGrid; int * m_bitmapOldGrid; int m_crGridColor; } ;
typedef TYPE_2__ TGraphCtrl ;
typedef int * HPEN ;
typedef int * HFONT ;
typedef int HDC ;
typedef void* HBITMAP ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int * FUNC_2 (int,int ,int,int ,int,int ,int ,int ,int ,int ,int ,int ,int,char*) ;
 int * FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,TYPE_5__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_5__*,int ) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int,int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int *,int,int,char*,int) ;
 int FUNC_16 (int) ;
 int * VAR_14 ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_4__ VAR_22 ;
 TYPE_3__ VAR_23 ;
 char* VAR_24 ;
 char* VAR_25 ;
 int FUNC_19 (int,int) ;
 int * VAR_26 ;
 int FUNC_20 (char*,char*,int,...) ;
 char* VAR_27 ;
 int FUNC_21 (char*) ;
 int * VAR_28 ;

void FUNC_22(TGraphCtrl* VAR_29, BOOL VAR_30)
{



    int VAR_31;
    int VAR_32;


    HPEN VAR_33;
    HPEN VAR_34 = FUNC_3(VAR_7, 0, VAR_29->m_crGridColor);





    HDC VAR_35 = FUNC_6(VAR_29->m_hParentWnd);


    if (VAR_29->m_dcGrid == ((void*)0))
    {
        VAR_29->m_dcGrid = FUNC_1(VAR_35);
        VAR_29->m_bitmapGrid = FUNC_0(VAR_35, VAR_29->m_nClientWidth, VAR_29->m_nClientHeight);
        VAR_29->m_bitmapOldGrid = (HBITMAP)FUNC_11(VAR_29->m_dcGrid, VAR_29->m_bitmapGrid);
    }
    else if(VAR_30)
    {


        if(VAR_29->m_bitmapGrid != ((void*)0))
        {
            VAR_29->m_bitmapGrid = (HBITMAP)FUNC_11(VAR_29->m_dcGrid, VAR_29->m_bitmapOldGrid);
            FUNC_4(VAR_29->m_bitmapGrid);
            VAR_29->m_bitmapGrid = FUNC_0(VAR_35, VAR_29->m_nClientWidth, VAR_29->m_nClientHeight);
            FUNC_11(VAR_29->m_dcGrid, VAR_29->m_bitmapGrid);
        }
    }

    FUNC_12(VAR_29->m_dcGrid, VAR_29->m_crBackColor);


    FUNC_5(VAR_29->m_dcGrid, &VAR_29->m_rectClient, VAR_29->m_brushBack);



    VAR_32 = FUNC_16((int)FUNC_18(FUNC_17(VAR_29->m_dUpperLimit)));
    VAR_32 = FUNC_19(VAR_32, FUNC_16((int)FUNC_18(FUNC_17(VAR_29->m_dLowerLimit))));



    VAR_32 = VAR_32 + 4 + VAR_29->m_nYDecimals;




    VAR_29->m_rectPlot.left = VAR_29->m_rectClient.left;
    VAR_29->m_nPlotWidth = VAR_29->m_rectPlot.right - VAR_29->m_rectPlot.left;


    VAR_33 = (HPEN)FUNC_11(VAR_29->m_dcGrid, VAR_34);
    FUNC_9(VAR_29->m_dcGrid, VAR_29->m_rectPlot.left, VAR_29->m_rectPlot.top, ((void*)0));
    FUNC_8(VAR_29->m_dcGrid, VAR_29->m_rectPlot.right+1, VAR_29->m_rectPlot.top);
    FUNC_8(VAR_29->m_dcGrid, VAR_29->m_rectPlot.right+1, VAR_29->m_rectPlot.bottom+1);
    FUNC_8(VAR_29->m_dcGrid, VAR_29->m_rectPlot.left, VAR_29->m_rectPlot.bottom+1);



    for (VAR_31 = VAR_29->m_rectPlot.top; VAR_31 < VAR_29->m_rectPlot.bottom; VAR_31 += 12)
    {
        FUNC_9(VAR_29->m_dcGrid, VAR_29->m_rectPlot.left, VAR_29->m_rectPlot.top + VAR_31, ((void*)0));
        FUNC_8(VAR_29->m_dcGrid, VAR_29->m_rectPlot.right, VAR_29->m_rectPlot.top + VAR_31);
    }


    for (VAR_31 = VAR_29->m_rectPlot.left; VAR_31 < VAR_29->m_rectPlot.right; VAR_31 += 12)
    {
        FUNC_9(VAR_29->m_dcGrid, VAR_29->m_rectPlot.left + VAR_31, VAR_29->m_rectPlot.bottom, ((void*)0));
        FUNC_8(VAR_29->m_dcGrid, VAR_29->m_rectPlot.left + VAR_31, VAR_29->m_rectPlot.top);
    }

    FUNC_11(VAR_29->m_dcGrid, VAR_33);
    FUNC_4(VAR_34);
    if (VAR_29->m_dcPlot == ((void*)0))
    {
        VAR_29->m_dcPlot = FUNC_1(VAR_35);
        VAR_29->m_bitmapPlot = FUNC_0(VAR_35, VAR_29->m_nClientWidth, VAR_29->m_nClientHeight);
        VAR_29->m_bitmapOldPlot = (HBITMAP)FUNC_11(VAR_29->m_dcPlot, VAR_29->m_bitmapPlot);
    }
    else if(VAR_30)
    {


        if(VAR_29->m_bitmapPlot != ((void*)0))
        {
            VAR_29->m_bitmapPlot = (HBITMAP)FUNC_11(VAR_29->m_dcPlot, VAR_29->m_bitmapOldPlot);
            FUNC_4(VAR_29->m_bitmapPlot);
            VAR_29->m_bitmapPlot = FUNC_0(VAR_35, VAR_29->m_nClientWidth, VAR_29->m_nClientHeight);
            FUNC_11(VAR_29->m_dcPlot, VAR_29->m_bitmapPlot);
        }
    }


    FUNC_12(VAR_29->m_dcPlot, VAR_29->m_crBackColor);
    FUNC_5(VAR_29->m_dcPlot, &VAR_29->m_rectClient, VAR_29->m_brushBack);


    FUNC_7(VAR_29->m_hParentWnd, &VAR_29->m_rectClient, VAR_13);
    FUNC_10(VAR_29->m_hParentWnd, VAR_35);
}
