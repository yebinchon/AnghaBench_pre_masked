
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ m_nXPos; scalar_t__ m_nYPos; int m_nZPos; int m_nOldX; int m_nOldY; } ;
typedef TYPE_1__ STAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 void* FUNC_1 (int,int) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_1__* VAR_6 ;

BOOL FUNC_5 (int VAR_7)
{
    int VAR_8;
    if (VAR_7 > VAR_1)
    {
        FUNC_0 (0,
            FUNC_2("Too many stars! Aborting!"),
            FUNC_2("Error"),
            VAR_3 | VAR_2);
        return VAR_0;
    }

    if (VAR_6)
        FUNC_3 (VAR_6);

    VAR_5 = VAR_7;

    VAR_6 = (STAR*)FUNC_4(VAR_7 * sizeof(STAR));

    if (!VAR_6)
    {
        FUNC_0 (0,
            FUNC_2("Unable to allocate memory! Aborting!"),
            FUNC_2("Error"),
            VAR_3 | VAR_2);
        return VAR_0;
    }

    for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
    {
        do
        {
            VAR_6[VAR_8].m_nXPos = FUNC_1 (-320, 320);
            VAR_6[VAR_8].m_nYPos = FUNC_1 (-200, 200);
            VAR_6[VAR_8].m_nZPos = VAR_8+1;
            VAR_6[VAR_8].m_nOldX = -1;
            VAR_6[VAR_8].m_nOldY = -1;
        } while ((VAR_6[VAR_8].m_nXPos == 0) || (VAR_6[VAR_8].m_nYPos == 0));
    }
    return VAR_4;
}
