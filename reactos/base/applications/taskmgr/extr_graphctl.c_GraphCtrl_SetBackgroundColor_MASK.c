
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_crBackColor; int m_brushBack; } ;
typedef TYPE_1__ TGraphCtrl ;
typedef int COLORREF ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(TGraphCtrl* VAR_1, COLORREF VAR_2)
{
    VAR_1->m_crBackColor = VAR_2;
    FUNC_1(VAR_1->m_brushBack);
    VAR_1->m_brushBack = FUNC_0(VAR_1->m_crBackColor);

    FUNC_2(VAR_1, VAR_0);
}
