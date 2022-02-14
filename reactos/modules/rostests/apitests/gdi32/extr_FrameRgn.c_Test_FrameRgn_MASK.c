
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int * HRGN ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int*,int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
 int * FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int,int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int,char*) ;

void FUNC_9()
{
    RECT VAR_5 = {0, 0, 8, 8 };
    HRGN VAR_6, VAR_7;
    BOOL VAR_8;
    UCHAR VAR_9[64] = {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 1, 1, 1, 1, 0, 0, 0,
        0, 1, 2, 2, 1, 0, 0, 0,
        0, 1, 2, 2, 1, 1, 1, 0,
        0, 1, 1, 1, 2, 2, 1, 0,
        0, 0, 0, 1, 2, 2, 1, 0,
        0, 0, 0, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 0, 0, 0
    };
    COLORREF VAR_10[16] = {FUNC_7(0,0,0), FUNC_7(255,255,255), FUNC_7(128,128,128), 0};

    FUNC_3(VAR_4, &VAR_5, FUNC_6(VAR_0));

    VAR_6 = FUNC_2(1, 1, 5, 5);
    FUNC_8(VAR_6 != ((void*)0), "failed to create region\n");

    VAR_7 = FUNC_2(3, 3, 7, 7);
    FUNC_8(VAR_6 != ((void*)0), "failed to create region\n");

    FUNC_1(VAR_6, VAR_6, VAR_7, VAR_2);

    VAR_8 = FUNC_4(VAR_4, VAR_6, FUNC_6(VAR_1));
    FUNC_8(VAR_8 != 0, "FrameRgn failed\n");

    VAR_8 = FUNC_5(VAR_4, VAR_6, FUNC_6(VAR_3), 1, 1);
    FUNC_8(VAR_8 != 0, "FrameRgn failed\n");

    FUNC_0(VAR_4, 8, 8, VAR_9, VAR_10);

}
