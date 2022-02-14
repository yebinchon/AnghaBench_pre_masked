
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int m_nOldX; int m_nOldY; scalar_t__ m_nZPos; scalar_t__ m_nYPos; scalar_t__ m_nXPos; } ;
typedef int HDC ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_2 (HDC VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    {

        FUNC_1 (
            VAR_4,
            VAR_3[VAR_7].m_nOldX,
            VAR_3[VAR_7].m_nOldY,
            FUNC_0 (0, 0, 0));

        VAR_5 = (int)((((long)VAR_3[VAR_7].m_nXPos << 7) / (long)VAR_3[VAR_7].m_nZPos) + VAR_0);
        VAR_6 = (int)((((long)VAR_3[VAR_7].m_nYPos << 7) / (long)VAR_3[VAR_7].m_nZPos) + VAR_1);


        FUNC_1 (
            VAR_4,
            VAR_5,
            VAR_6,
            FUNC_0 (255, 255, 255));


        VAR_3[VAR_7].m_nOldX = VAR_5;
        VAR_3[VAR_7].m_nOldY = VAR_6;
    }
}
