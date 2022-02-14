
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cx; int cy; } ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int ,int,int,int,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    HDC VAR_7 = FUNC_0("DISPLAY", ((void*)0), ((void*)0), ((void*)0));
    BOOL VAR_8;
    INT VAR_9 = FUNC_2(VAR_7, VAR_1);
    INT VAR_10 = FUNC_2(VAR_7, VAR_2);
    INT VAR_11 = FUNC_2(VAR_7, VAR_3);
    SIZE VAR_12, VAR_13;

    if(!&FUNC_10)
    {
        FUNC_11("Don't have SetVirtualResolution\n");
        return;
    }


    FUNC_5(VAR_7, VAR_4);
    FUNC_3(VAR_7, &VAR_12);
    FUNC_4(VAR_7, &VAR_13);
    FUNC_5(VAR_7, VAR_5);

    VAR_8 = FUNC_10(VAR_7, 4000, 1000, 400, 200);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_6(VAR_7, 1000, 1000);
    FUNC_7(VAR_7, 1, 1);
    FUNC_8(VAR_7, 1, 1);

    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 1000, -500);
    FUNC_7(VAR_7, 4000, -1000);
    FUNC_8(VAR_7, 4000, 2000);


    FUNC_9(VAR_9 == FUNC_2(VAR_7, VAR_1), "horz_res changed\n");
    FUNC_9(VAR_10 == FUNC_2(VAR_7, VAR_2), "horz_size changed\n");
    FUNC_9(VAR_11 == FUNC_2(VAR_7, VAR_3), "log_pixels_x changed\n");

    VAR_8 = FUNC_10(VAR_7, 8000, 1000, 400, 200);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_6(VAR_7, 1000, -500);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 2000, -500);
    FUNC_7(VAR_7, 8000, -1000);
    FUNC_8(VAR_7, 4000, 2000);

    VAR_8 = FUNC_10(VAR_7, 8000, 1000, 200, 200);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 4000, -500);
    FUNC_7(VAR_7, 8000, -1000);
    FUNC_8(VAR_7, 2000, 2000);

    VAR_8 = FUNC_10(VAR_7, 8000, 1000, 200, 200);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 4000, -500);
    FUNC_7(VAR_7, 8000, -1000);
    FUNC_8(VAR_7, 2000, 2000);

    VAR_8 = FUNC_10(VAR_7, 8000, 2000, 200, 200);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 4000, -1000);
    FUNC_7(VAR_7, 8000, -2000);
    FUNC_8(VAR_7, 2000, 2000);

    VAR_8 = FUNC_10(VAR_7, 0, 0, 10, 0);
    FUNC_9(VAR_8 == VAR_0, "got %d\n", VAR_8);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_6(VAR_7, 4000, -1000);
    FUNC_7(VAR_7, 8000, -2000);
    FUNC_8(VAR_7, 2000, 2000);

    VAR_8 = FUNC_10(VAR_7, 0, 0, 0, 0);
    FUNC_9(VAR_8 == VAR_6, "got %d\n", VAR_8);
    FUNC_5(VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_4);
    FUNC_7(VAR_7, VAR_12.cx, VAR_12.cy);
    FUNC_8(VAR_7, VAR_13.cx, VAR_13.cy);

    FUNC_1(VAR_7);
}
