
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double eM11; float eM12; double eM21; double eM22; double eDx; double eDy; } ;
typedef TYPE_1__ XFORM ;
struct TYPE_6__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_2__ RECT ;
typedef int * PULONG ;
typedef int * HRGN ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int * FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,int) ;

void FUNC_10()
{
    RECT VAR_7 = { 0, 0, 100, 100 };
    HRGN VAR_8, VAR_9;
    BOOL VAR_10;
    XFORM VAR_11;
    PULONG VAR_12 = VAR_6;

    FUNC_2(VAR_5, &VAR_7, FUNC_3(VAR_0));

    VAR_8 = FUNC_1(0, 0, 8, 3);
    FUNC_8(VAR_8 != ((void*)0), "failed to create region\n");

    VAR_9 = FUNC_1(2, 3, 5, 8);
    FUNC_8(VAR_8 != ((void*)0), "failed to create region\n");

    FUNC_0(VAR_8, VAR_8, VAR_9, VAR_2);

    VAR_11.eM11 = 1.0;
    VAR_11.eM12 = 0.5f;
    VAR_11.eM21 = 0.0;
    VAR_11.eM22 = 1.0;
    VAR_11.eDx = 0.0;
    VAR_11.eDy = 0.0;

    FUNC_6(VAR_5, VAR_1);
    FUNC_8(FUNC_7(VAR_5, &VAR_11) == VAR_3, "SetWorldTransform failed\n");

    FUNC_5(VAR_5, FUNC_3(VAR_4));

    VAR_10 = FUNC_4(VAR_5, VAR_8);
    FUNC_8(VAR_10 == VAR_3, "PaintRgn failed\n");

    FUNC_9(VAR_12[0], 0x00000000);
    FUNC_9(VAR_12[1], 0x000000C0);
    FUNC_9(VAR_12[2], 0x000000F0);
    FUNC_9(VAR_12[3], 0x000000FC);
    FUNC_9(VAR_12[4], 0x0000003F);
    FUNC_9(VAR_12[5], 0x0000003F);
    FUNC_9(VAR_12[6], 0x0000003B);
    FUNC_9(VAR_12[7], 0x00000038);
    FUNC_9(VAR_12[8], 0x00000038);
}
