
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int left; int top; int right; long bottom; } ;
struct TYPE_6__ {int top; int bottom; } ;
struct TYPE_7__ {int m_nShiftPixels; int m_nPlotShiftPixels; int* m_dPreviousPosition; int m_dLowerLimit; int m_dVerticalFactor; int m_nHalfShiftPixels; int* m_dCurrentPosition; int m_brushBack; int * m_dcPlot; TYPE_3__ m_rectPlot; TYPE_1__ m_rectClient; scalar_t__* m_penPlot; int m_nPlotHeight; int m_nPlotWidth; } ;
typedef TYPE_2__ TGraphCtrl ;
typedef TYPE_3__ RECT ;
typedef scalar_t__ HPEN ;


 int FUNC_0 (int *,int,int,int ,int ,int *,int,int,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;

void FUNC_5(TGraphCtrl* VAR_2)
{





    int VAR_3, VAR_4, VAR_5, VAR_6;
    HPEN VAR_7;
    RECT VAR_8;
    int VAR_9;

    if (VAR_2->m_dcPlot != ((void*)0))
    {







        FUNC_0(VAR_2->m_dcPlot, VAR_2->m_rectPlot.left, VAR_2->m_rectPlot.top+1,
               VAR_2->m_nPlotWidth, VAR_2->m_nPlotHeight, VAR_2->m_dcPlot,
               VAR_2->m_rectPlot.left+VAR_2->m_nShiftPixels, VAR_2->m_rectPlot.top+1,
               VAR_1);



        VAR_8 = VAR_2->m_rectPlot;
        VAR_8.left = VAR_8.right - VAR_2->m_nShiftPixels;


        FUNC_1(VAR_2->m_dcPlot, &VAR_8, VAR_2->m_brushBack);


        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        {

            VAR_7 = (HPEN)FUNC_4(VAR_2->m_dcPlot, VAR_2->m_penPlot[VAR_9]);


            VAR_4 = VAR_2->m_rectPlot.right-VAR_2->m_nPlotShiftPixels;
            VAR_6 = VAR_2->m_rectPlot.bottom -
                (long)((VAR_2->m_dPreviousPosition[VAR_9] - VAR_2->m_dLowerLimit) * VAR_2->m_dVerticalFactor);
            FUNC_3(VAR_2->m_dcPlot, VAR_4, VAR_6, ((void*)0));


            VAR_3 = VAR_2->m_rectPlot.right-VAR_2->m_nHalfShiftPixels;
            VAR_5 = VAR_2->m_rectPlot.bottom -
                (long)((VAR_2->m_dCurrentPosition[VAR_9] - VAR_2->m_dLowerLimit) * VAR_2->m_dVerticalFactor);
            FUNC_2(VAR_2->m_dcPlot, VAR_3, VAR_5);


            FUNC_4(VAR_2->m_dcPlot, VAR_7);






            if ((VAR_6 <= VAR_2->m_rectPlot.top) || (VAR_5 <= VAR_2->m_rectPlot.top))
            {
                RECT VAR_10;
                VAR_10.bottom = VAR_2->m_rectPlot.top+1;
                VAR_10.left = VAR_4;
                VAR_10.right = VAR_3+1;
                VAR_10.top = VAR_2->m_rectClient.top;
                FUNC_1(VAR_2->m_dcPlot, &VAR_10, VAR_2->m_brushBack);
            }
            if ((VAR_6 >= VAR_2->m_rectPlot.bottom) || (VAR_5 >= VAR_2->m_rectPlot.bottom))
            {
                RECT VAR_11;
                VAR_11.bottom = VAR_2->m_rectClient.bottom+1;
                VAR_11.left = VAR_4;
                VAR_11.right = VAR_3+1;
                VAR_11.top = VAR_2->m_rectPlot.bottom+1;

                FUNC_1(VAR_2->m_dcPlot, &VAR_11, VAR_2->m_brushBack);
            }


            VAR_2->m_dPreviousPosition[VAR_9] = VAR_2->m_dCurrentPosition[VAR_9];
        }
    }
}
