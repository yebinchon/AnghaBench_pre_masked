
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_2__ {scalar_t__ bSmoothShading; scalar_t__ bEnableFiltering; scalar_t__ bFinePerspective; scalar_t__ bDoBlending; scalar_t__ uiRotation; int uiSpeed; int uiNumStars; } ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_2(HWND VAR_15)
{
    FUNC_0(VAR_15, VAR_8, VAR_13, VAR_14, VAR_12.uiNumStars);
    FUNC_1(VAR_15, VAR_10, VAR_12.uiNumStars, VAR_2);

    FUNC_0(VAR_15, VAR_9, VAR_13, VAR_14, VAR_12.uiSpeed);
    FUNC_1(VAR_15, VAR_11, VAR_12.uiSpeed, VAR_2);

    FUNC_0(VAR_15, VAR_7, VAR_1, (WPARAM)VAR_12.uiRotation, 0);

    FUNC_0(VAR_15, VAR_3, VAR_0, (WPARAM)VAR_12.bDoBlending, 0);
    FUNC_0(VAR_15, VAR_5, VAR_0, (WPARAM)VAR_12.bFinePerspective, 0);
    FUNC_0(VAR_15, VAR_4, VAR_0, (WPARAM)VAR_12.bEnableFiltering, 0);
    FUNC_0(VAR_15, VAR_6, VAR_0, (WPARAM)VAR_12.bSmoothShading, 0);
}
