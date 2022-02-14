
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ left; scalar_t__ top; } ;
struct TYPE_5__ {int left; int top; scalar_t__ right; scalar_t__ bottom; } ;
struct TYPE_6__ {double m_dVerticalFactor; double m_dRange; scalar_t__ m_nPlotHeight; TYPE_1__ m_rectPlot; scalar_t__ m_nPlotWidth; TYPE_4__ m_rectClient; scalar_t__ m_nClientWidth; scalar_t__ m_nClientHeight; int m_hWnd; } ;
typedef TYPE_2__ TGraphCtrl ;


 int FUNC_0 (int ,TYPE_4__*) ;

void FUNC_1(TGraphCtrl* VAR_0)
{

    FUNC_0(VAR_0->m_hWnd, &VAR_0->m_rectClient);


    VAR_0->m_nClientHeight = VAR_0->m_rectClient.bottom - VAR_0->m_rectClient.top;
    VAR_0->m_nClientWidth = VAR_0->m_rectClient.right - VAR_0->m_rectClient.left;
    VAR_0->m_rectPlot.left = 0;
    VAR_0->m_rectPlot.top = -1;
    VAR_0->m_rectPlot.right = VAR_0->m_rectClient.right-0;
    VAR_0->m_rectPlot.bottom = VAR_0->m_rectClient.bottom-0;



    VAR_0->m_nPlotHeight = VAR_0->m_rectPlot.bottom - VAR_0->m_rectPlot.top;
    VAR_0->m_nPlotWidth = VAR_0->m_rectPlot.right - VAR_0->m_rectPlot.left;



    VAR_0->m_dVerticalFactor = (double)VAR_0->m_nPlotHeight / VAR_0->m_dRange;
}
