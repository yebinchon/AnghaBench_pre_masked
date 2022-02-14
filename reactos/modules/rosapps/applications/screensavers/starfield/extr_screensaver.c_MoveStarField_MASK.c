
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_nXPos; int m_nYPos; int m_nZPos; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0 (int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    {
        VAR_1[VAR_5].m_nXPos += VAR_2;
        VAR_1[VAR_5].m_nYPos += VAR_3;
        VAR_1[VAR_5].m_nZPos += VAR_4;

        if (VAR_1[VAR_5].m_nZPos > VAR_0)
            VAR_1[VAR_5].m_nZPos -= VAR_0;
        if (VAR_1[VAR_5].m_nZPos < 1)
            VAR_1[VAR_5].m_nZPos += VAR_0;
    }
}
