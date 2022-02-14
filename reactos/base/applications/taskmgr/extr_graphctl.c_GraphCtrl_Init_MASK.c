
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* m_dPreviousPosition; int m_nYDecimals; double m_dLowerLimit; double m_dUpperLimit; double m_dRange; int m_nShiftPixels; int m_nHalfShiftPixels; int m_nPlotShiftPixels; int * m_bitmapOldPlot; int * m_bitmapOldGrid; int m_strYUnitsString; int m_strXUnitsString; void* m_crBackColor; scalar_t__ m_brushBack; void** m_crPlotColor; int * m_penPlot; void* m_crGridColor; scalar_t__ m_bitmapPlot; scalar_t__ m_bitmapGrid; scalar_t__ m_dcPlot; scalar_t__ m_dcGrid; scalar_t__ m_hParentWnd; scalar_t__ m_hWnd; } ;
typedef TYPE_1__ TGraphCtrl ;


 int FUNC_0 (int ,int ,void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(TGraphCtrl* VAR_2)
{
    int VAR_3;

    VAR_2->m_hWnd = 0;
    VAR_2->m_hParentWnd = 0;
    VAR_2->m_dcGrid = 0;
    VAR_2->m_dcPlot = 0;
    VAR_2->m_bitmapOldGrid = 0;
    VAR_2->m_bitmapOldPlot = 0;
    VAR_2->m_bitmapGrid = 0;
    VAR_2->m_bitmapPlot = 0;
    VAR_2->m_brushBack = 0;

    VAR_2->m_penPlot[0] = 0;
    VAR_2->m_penPlot[1] = 0;
    VAR_2->m_penPlot[2] = 0;
    VAR_2->m_penPlot[3] = 0;
    VAR_2->m_dPreviousPosition[0] = 0.0;
    VAR_2->m_dPreviousPosition[1] = 0.0;
    VAR_2->m_dPreviousPosition[2] = 0.0;
    VAR_2->m_dPreviousPosition[3] = 0.0;


    VAR_2->m_nYDecimals = 3;







    VAR_2->m_dLowerLimit = 0.0;
    VAR_2->m_dUpperLimit = 100.0;
    VAR_2->m_dRange = VAR_2->m_dUpperLimit - VAR_2->m_dLowerLimit;



    VAR_2->m_nShiftPixels = 4;
    VAR_2->m_nHalfShiftPixels = VAR_2->m_nShiftPixels/2;
    VAR_2->m_nPlotShiftPixels = VAR_2->m_nShiftPixels + VAR_2->m_nHalfShiftPixels;



    VAR_2->m_crBackColor = FUNC_2( 0, 0, 0);
    VAR_2->m_crGridColor = FUNC_2( 0, 128, 64);
    VAR_2->m_crPlotColor[0] = FUNC_2(255, 255, 255);
    VAR_2->m_crPlotColor[1] = FUNC_2(100, 255, 255);
    VAR_2->m_crPlotColor[2] = FUNC_2(255, 100, 255);
    VAR_2->m_crPlotColor[3] = FUNC_2(255, 255, 100);


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_2->m_penPlot[VAR_3] = FUNC_0(VAR_1, 0, VAR_2->m_crPlotColor[VAR_3]);
    }
    VAR_2->m_brushBack = FUNC_1(VAR_2->m_crBackColor);


    FUNC_3(VAR_2->m_strXUnitsString, "Samples");
    FUNC_3(VAR_2->m_strYUnitsString, "Y units");


    VAR_2->m_bitmapOldGrid = ((void*)0);
    VAR_2->m_bitmapOldPlot = ((void*)0);
}
