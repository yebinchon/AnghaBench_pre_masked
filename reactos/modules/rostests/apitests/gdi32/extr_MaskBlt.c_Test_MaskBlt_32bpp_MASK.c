
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_7; int member_8; int member_10; int member_9; int member_6; int member_5; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef int PVOID ;
typedef int* PULONG ;
typedef int* PUCHAR ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,TYPE_2__*,int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int ,int,int,scalar_t__,int ,int ,scalar_t__,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,char*,...) ;

void FUNC_6()
{
    HDC VAR_5, VAR_6;
    BITMAPINFO VAR_7 = {{sizeof(BITMAPINFOHEADER), 8, 1, 1, 1, VAR_0, 0, 10, 10, 0,0}};
    BITMAPINFO VAR_8 = {{sizeof(BITMAPINFOHEADER), 8, 1, 1, 32, VAR_0, 0, 10, 10, 0,0}};
    HBITMAP VAR_9, VAR_10, VAR_11;
    PUCHAR VAR_12;
    PULONG VAR_13, VAR_14;
    BOOL VAR_15;


    VAR_5 = FUNC_0(((void*)0));
    VAR_9 = FUNC_1(VAR_5, &VAR_8, VAR_1, (PVOID*)&VAR_13, ((void*)0), 0);
    FUNC_4(VAR_5, VAR_9);


    VAR_6 = FUNC_0(((void*)0));
    VAR_10 = FUNC_1(VAR_6, &VAR_8, VAR_1, (PVOID*)&VAR_14, ((void*)0), 0);
    FUNC_4(VAR_6, VAR_10);
    FUNC_5(VAR_6 && VAR_10, "\n");


    VAR_11 = FUNC_1(VAR_5, &VAR_7, VAR_1, (PVOID*)&VAR_12, ((void*)0), 0);
    FUNC_5(VAR_11 != 0, "CreateDIBSection failed\n");


    VAR_13[0] = 0x12345678;
    VAR_13[1] = 0x9abcdef0;
    VAR_14[0] = 0x87684321;
    VAR_14[1] = 0x0fedcba9;
    VAR_12[0] = 0x80;
    VAR_15 = FUNC_3(VAR_5, 0, 0, 8, 1, VAR_6, 0, 0, VAR_11, 0, 0, FUNC_2(VAR_3, 0xAA0000));
    FUNC_5(VAR_15 == 1, "MaskBlt failed (%d)\n", VAR_15);
    FUNC_5 (VAR_13[0] == 0x87684321, "pulBitsDst[0] == 0x%lx\n", VAR_13[0]);
    FUNC_5 (VAR_13[1] == 0x9abcdef0, "pulBitsDst[0] == 0x%lx\n", VAR_13[1]);

    VAR_13[0] = 0x12345678;
    VAR_13[1] = 0x9abcdef0;
    VAR_15 = FUNC_3(VAR_5, 0, 0, 8, 1, VAR_6, 0, 0, VAR_11, 0, 0, FUNC_2(VAR_4, VAR_2));
    FUNC_5(VAR_15 == 1, "MaskBlt failed (%d)\n", VAR_15);
    FUNC_5 (VAR_13[0] == 0x977c5779, "pulBitsDst[0] == 0x%lx\n", VAR_13[0]);
    FUNC_5 (VAR_13[1] == 0xfabefef6, "pulBitsDst[0] == 0x%lx\n", VAR_13[1]);
}
