
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double m_dLowerLimit; double m_dUpperLimit; int m_nYDecimals; double m_dRange; double m_dVerticalFactor; scalar_t__ m_nPlotHeight; } ;
typedef TYPE_1__ TGraphCtrl ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(TGraphCtrl* VAR_1, double VAR_2, double VAR_3, int VAR_4)
{

    VAR_1->m_dLowerLimit = VAR_2;
    VAR_1->m_dUpperLimit = VAR_3;
    VAR_1->m_nYDecimals = VAR_4;
    VAR_1->m_dRange = VAR_1->m_dUpperLimit - VAR_1->m_dLowerLimit;
    VAR_1->m_dVerticalFactor = (double)VAR_1->m_nPlotHeight / VAR_1->m_dRange;

    FUNC_0(VAR_1, VAR_0);
}
