
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* bSmoothShading; void* bEnableFiltering; void* bFinePerspective; void* bDoBlending; void* uiRotation; void* uiSpeed; void* uiNumStars; } ;
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
 void* FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,void*,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(HWND VAR_14)
{
    VAR_12.uiNumStars = FUNC_0(VAR_14, VAR_8, VAR_13, 0, 0);
    FUNC_1(VAR_14, VAR_10, VAR_12.uiNumStars, VAR_2);

    VAR_12.uiSpeed = FUNC_0(VAR_14, VAR_9, VAR_13, 0, 0);
    FUNC_1(VAR_14, VAR_11, VAR_12.uiSpeed, VAR_2);

    VAR_12.uiRotation = FUNC_0(VAR_14, VAR_7, VAR_1, 0, 0);

    VAR_12.bDoBlending = FUNC_0(VAR_14, VAR_3, VAR_0, 0, 0);
    VAR_12.bFinePerspective = FUNC_0(VAR_14, VAR_5, VAR_0, 0, 0);
    VAR_12.bEnableFiltering = FUNC_0(VAR_14, VAR_4, VAR_0, 0, 0);
    VAR_12.bSmoothShading = FUNC_0(VAR_14, VAR_6, VAR_0, 0, 0);
}
