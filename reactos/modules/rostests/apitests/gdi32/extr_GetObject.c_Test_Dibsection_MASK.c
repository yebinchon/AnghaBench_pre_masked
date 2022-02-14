
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT_PTR ;
struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_7; int member_8; int member_10; int member_9; int member_6; int member_5; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
struct TYPE_9__ {scalar_t__ bmBits; int bmBitsPixel; int bmPlanes; int bmWidthBytes; int bmHeight; int bmWidth; int bmType; } ;
typedef scalar_t__ PVOID ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int HANDLE ;
typedef TYPE_2__ DIBSECTION ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;
typedef TYPE_2__ BITMAP ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,int ,scalar_t__*,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,int,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;

void
FUNC_13(void)
{
    BITMAPINFO VAR_3 = {{sizeof(BITMAPINFOHEADER), 10, 9, 1, 16, VAR_0, 0, 10, 10, 0,0}};
    HBITMAP VAR_4;
    BITMAP VAR_5;
    DIBSECTION VAR_6;
    PVOID VAR_7;
    HDC VAR_8;

    FUNC_2(&VAR_6, sizeof(DIBSECTION), 0x77);
    VAR_8 = FUNC_3(0);
    VAR_4 = FUNC_0(VAR_8, &VAR_3, VAR_1, &VAR_7, ((void*)0), 0);
    FUNC_10(VAR_4 != 0, "CreateDIBSection failed with %ld, skipping tests.\n", FUNC_4());
    if (!VAR_4) return;

    FUNC_10(FUNC_6((HANDLE)((UINT_PTR)VAR_4 & 0x0000ffff), 0, ((void*)0)) == sizeof(BITMAP), "\n");
    FUNC_10(FUNC_7((HANDLE)((UINT_PTR)VAR_4 & 0x0000ffff), 0, ((void*)0)) == sizeof(BITMAP), "\n");

    FUNC_9(VAR_2);
    FUNC_12(FUNC_5(VAR_4, sizeof(DIBSECTION), ((void*)0)), sizeof(BITMAP));
    FUNC_12(FUNC_5(VAR_4, 0, ((void*)0)), sizeof(BITMAP));
    FUNC_12(FUNC_5(VAR_4, 5, ((void*)0)), sizeof(BITMAP));
    FUNC_12(FUNC_5(VAR_4, -5, ((void*)0)), sizeof(BITMAP));
    FUNC_12(FUNC_5(VAR_4, 0, &VAR_6), 0);
    FUNC_12(FUNC_5(VAR_4, 5, &VAR_6), 0);
    FUNC_12(FUNC_5(VAR_4, sizeof(BITMAP), &VAR_5), sizeof(BITMAP));
    FUNC_12(FUNC_5(VAR_4, sizeof(BITMAP)+2, &VAR_5), sizeof(BITMAP));
    FUNC_12(VAR_5.bmType, 0);
    FUNC_12(VAR_5.bmWidth, 10);
    FUNC_12(VAR_5.bmHeight, 9);
    FUNC_12(VAR_5.bmWidthBytes, 20);
    FUNC_12(VAR_5.bmPlanes, 1);
    FUNC_12(VAR_5.bmBitsPixel, 16);
    FUNC_10(VAR_5.bmBits == VAR_7, "\n");
    FUNC_12(FUNC_5(VAR_4, sizeof(DIBSECTION), &VAR_6), sizeof(DIBSECTION));
    FUNC_12(FUNC_5(VAR_4, sizeof(DIBSECTION)+2, &VAR_6), sizeof(DIBSECTION));
    FUNC_12(FUNC_5(VAR_4, -5, &VAR_6), sizeof(DIBSECTION));
    FUNC_11(VAR_2);
    FUNC_1(VAR_4);
    FUNC_8(0, VAR_8);
}
