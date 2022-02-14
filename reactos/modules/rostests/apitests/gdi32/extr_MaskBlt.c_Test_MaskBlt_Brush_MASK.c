
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int biWidth; } ;
struct TYPE_9__ {TYPE_3__ bmiHeader; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_7; int member_8; int member_9; int member_10; int member_6; int member_5; } ;
typedef int PVOID ;
typedef int* PULONG ;
typedef TYPE_4__* PBITMAPINFO ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,int ,int *,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int,int,int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int,char*,...) ;

void FUNC_8()
{
    HDC VAR_4, VAR_5;
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        ULONG aulColors[2];
    } VAR_6 = {{sizeof(BITMAPINFOHEADER), 16, 16, 1, 1, VAR_0, 0, 10, 10, 2,0}, {0, 0xFFFFFF}};
    PBITMAPINFO VAR_7 = (PBITMAPINFO)&VAR_6;
    HBITMAP VAR_8, VAR_9, VAR_10;
    PULONG VAR_11, VAR_12, VAR_13;
    BOOL VAR_14;
    HBRUSH VAR_15;


    VAR_4 = FUNC_0(((void*)0));
    VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_1, (PVOID*)&VAR_11, ((void*)0), 0);
    FUNC_6(VAR_4, VAR_8);


    VAR_5 = FUNC_0(((void*)0));
    VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_1, (PVOID*)&VAR_12, ((void*)0), 0);
    FUNC_6(VAR_5, VAR_9);

    VAR_15 = FUNC_2(VAR_2, 0);
    FUNC_7(VAR_15 != 0, "failed to create brush\n");
    FUNC_7(FUNC_6(VAR_4, VAR_15) != 0, "failed to select brush\n");


    VAR_11[0] = 0x00000000;
    VAR_12[0] = 0xFFFFFFFF;
    VAR_14 = FUNC_5(VAR_4, 0, 0, 8, 1, VAR_5, 0, 0, ((void*)0), 0, 0, FUNC_4(VAR_3, 0xAA0000));
    FUNC_7(VAR_14 == 1, "MaskBlt failed (%d)\n", VAR_14);
    FUNC_7(VAR_11[0] == 0, "pulBitsDst[0] == 0x%lx\n", VAR_11[0]);


    VAR_7->bmiHeader.biWidth = 8;
    VAR_10 = FUNC_1(VAR_4, VAR_7, VAR_1, (PVOID*)&VAR_13, ((void*)0), 0);
    FUNC_7(VAR_10 != 0, "CreateDIBSection failed\n");
    VAR_15 = FUNC_3(VAR_10);
    FUNC_7(VAR_15 != 0, "CreatePatternBrush failed\n");
    FUNC_7(FUNC_6(VAR_4, VAR_15) != 0, "failed to select brush\n");


    VAR_11[0] = 0x00000000;
    VAR_12[0] = 0xFFFFFFFF;
    VAR_13[0] = 0xCCAAFF00;
    VAR_14 = FUNC_5(VAR_4, 0, 0, 16, 1, VAR_5, 0, 0, ((void*)0), 0, 0, FUNC_4(VAR_3, 0xAA0000));
    FUNC_7(VAR_14 == 1, "MaskBlt failed (%d)\n", VAR_14);
    FUNC_7(VAR_11[0] == 0, "pulBitsDst[0] == 0x%lx\n", VAR_11[0]);

}
