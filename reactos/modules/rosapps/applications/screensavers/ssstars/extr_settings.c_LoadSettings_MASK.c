
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ uiNumStars; scalar_t__ uiSpeed; scalar_t__ uiRotation; scalar_t__ bDoBlending; scalar_t__ bFinePerspective; scalar_t__ bEnableFiltering; scalar_t__ bSmoothShading; } ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 TYPE_1__ VAR_11 ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
    HKEY VAR_12;
    LONG VAR_13;

    VAR_11 = VAR_1;

    VAR_13 = FUNC_2(
            VAR_2,
            FUNC_3("Software\\Microsoft\\ScreenSavers\\Ssstars"),
            0,
            FUNC_3(""),
            0,
            VAR_3,
            ((void*)0),
            &VAR_12,
            ((void*)0));

    if (VAR_13 != VAR_0)
        return;

    VAR_11.uiNumStars = FUNC_0(VAR_12, FUNC_3("NumberOfStars"), VAR_11.uiNumStars);
    VAR_11.uiSpeed = FUNC_0(VAR_12, FUNC_3("Speed"), VAR_11.uiSpeed);
    VAR_11.uiRotation = FUNC_0(VAR_12, FUNC_3("TypeOfRotation"), VAR_11.uiRotation);

    VAR_11.bDoBlending = FUNC_0(VAR_12, FUNC_3("DoBlending"), VAR_11.bDoBlending);
    VAR_11.bFinePerspective = FUNC_0(VAR_12, FUNC_3("FinePerspective"), VAR_11.bFinePerspective);
    VAR_11.bEnableFiltering = FUNC_0(VAR_12, FUNC_3("EnableFiltering"), VAR_11.bEnableFiltering);
    VAR_11.bSmoothShading = FUNC_0(VAR_12, FUNC_3("SmoothShading"), VAR_11.bSmoothShading);


    if (VAR_11.uiNumStars < VAR_7)
        VAR_11.uiNumStars = VAR_7;
    else
    if (VAR_11.uiNumStars > VAR_5)
        VAR_11.uiNumStars = VAR_5;


    if (VAR_11.uiSpeed < VAR_6)
        VAR_11.uiSpeed = VAR_6;
    else
    if (VAR_11.uiSpeed > VAR_4)
        VAR_11.uiSpeed = VAR_4;


    if (VAR_11.uiRotation != VAR_9 &&
        VAR_11.uiRotation != VAR_8 &&
        VAR_11.uiRotation != VAR_10)
        VAR_11.uiRotation = VAR_10;

    FUNC_1(VAR_12);
}
