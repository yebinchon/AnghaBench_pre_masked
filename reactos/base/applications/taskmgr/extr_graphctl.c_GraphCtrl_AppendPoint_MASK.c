
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* m_dCurrentPosition; } ;
typedef TYPE_1__ TGraphCtrl ;


 int FUNC_0 (TYPE_1__*) ;

double FUNC_1(TGraphCtrl* VAR_0,
                             double VAR_1, double VAR_2,
                             double VAR_3, double VAR_4)
{

    double VAR_5;

    VAR_5 = VAR_0->m_dCurrentPosition[0];
    VAR_0->m_dCurrentPosition[0] = VAR_1;
    VAR_0->m_dCurrentPosition[1] = VAR_2;
    VAR_0->m_dCurrentPosition[2] = VAR_3;
    VAR_0->m_dCurrentPosition[3] = VAR_4;
    FUNC_0(VAR_0);

    return VAR_5;
}
