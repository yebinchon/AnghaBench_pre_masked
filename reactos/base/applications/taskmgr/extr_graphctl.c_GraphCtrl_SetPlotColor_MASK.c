
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * m_crPlotColor; int * m_penPlot; } ;
typedef TYPE_1__ TGraphCtrl ;
typedef int COLORREF ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;

void FUNC_3(TGraphCtrl* VAR_2, int VAR_3, COLORREF VAR_4)
{
    VAR_2->m_crPlotColor[VAR_3] = VAR_4;
    FUNC_1(VAR_2->m_penPlot[VAR_3]);
    VAR_2->m_penPlot[VAR_3] = FUNC_0(VAR_1, 0, VAR_2->m_crPlotColor[VAR_3]);

    FUNC_2(VAR_2, VAR_0);
}
