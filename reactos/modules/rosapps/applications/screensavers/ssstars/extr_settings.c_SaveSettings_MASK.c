
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bSmoothShading; int bEnableFiltering; int bFinePerspective; int bDoBlending; int uiRotation; int uiSpeed; int uiNumStars; } ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
    HKEY VAR_4;
    LONG VAR_5;

    VAR_5 = FUNC_1(
            VAR_1,
            FUNC_3("Software\\Microsoft\\ScreenSavers\\Ssstars"),
            0,
            FUNC_3(""),
            0,
            VAR_2,
            ((void*)0),
            &VAR_4,
            ((void*)0));

    if (VAR_5 != VAR_0)
        return;

    FUNC_2(VAR_4, FUNC_3("NumberOfStars"), VAR_3.uiNumStars);
    FUNC_2(VAR_4, FUNC_3("Speed"), VAR_3.uiSpeed);
    FUNC_2(VAR_4, FUNC_3("TypeOfRotation"), VAR_3.uiRotation);

    FUNC_2(VAR_4, FUNC_3("DoBlending"), VAR_3.bDoBlending);
    FUNC_2(VAR_4, FUNC_3("FinePerspective"), VAR_3.bFinePerspective);
    FUNC_2(VAR_4, FUNC_3("EnableFiltering"), VAR_3.bEnableFiltering);
    FUNC_2(VAR_4, FUNC_3("SmoothShading"), VAR_3.bSmoothShading);

    FUNC_0(VAR_4);
}
