
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int member_1; int member_0; } ;
struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int DWORD ;
typedef scalar_t__ ARGB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ,int ,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int,int,int ) ;
 int * FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,int,TYPE_2__*) ;
 int FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 int FUNC_19 (int,char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    ARGB VAR_4[6] = {0,0,0,0,0,0};
    POINT VAR_5 = {0,0};
    RECT VAR_6 = {100, 100, 180, 180};
    UINT VAR_7 = VAR_6.right - VAR_6.left;
    UINT VAR_8 = VAR_6.bottom - VAR_6.top;
    GpStatus VAR_9 = 0;
    GpSolidFill *VAR_10 = ((void*)0);
    GpGraphics *VAR_11 = ((void*)0);
    HDC VAR_12 = FUNC_12( VAR_3);
    HDC VAR_13 = FUNC_1(VAR_12);
    HBITMAP VAR_14 = FUNC_0(VAR_12, VAR_7, VAR_8);
    HGDIOBJ VAR_15 = FUNC_14(VAR_13, VAR_14);
    DWORD* VAR_16 = ((void*)0);


    FUNC_15(VAR_13, VAR_6.left, VAR_6.top, &VAR_5);

    VAR_9 = FUNC_5(VAR_0, &VAR_10);
    FUNC_16(VAR_2, VAR_9);

    VAR_9 = FUNC_4(VAR_13, &VAR_11);
    FUNC_16(VAR_2, VAR_9);

    VAR_9 = FUNC_10(VAR_11, VAR_6.left+VAR_7/2, VAR_6.top+VAR_8/2,
            VAR_7, VAR_8, VAR_1);
    FUNC_16(VAR_2, VAR_9);

    VAR_9 = FUNC_8(VAR_11, (GpBrush*)VAR_10, 0, 0, VAR_6.right, VAR_6.bottom);
    FUNC_16(VAR_2, VAR_9);

    FUNC_6((GpBrush*)VAR_10);
    FUNC_7(VAR_11);

    VAR_16 = FUNC_11(VAR_13, VAR_14, VAR_7, VAR_8);
    if (VAR_16)
    {
       VAR_4[0] = FUNC_17(VAR_7/2, VAR_8/2);
       VAR_4[1] = FUNC_17(VAR_7/2+1, VAR_8/2);
       VAR_4[2] = FUNC_17(VAR_7/2, VAR_8/2+1);
       VAR_4[3] = FUNC_17(VAR_7/2-1, VAR_8/2-1);
       VAR_4[4] = FUNC_17(VAR_7/2-1, VAR_8-1);
       VAR_4[5] = FUNC_17(VAR_7-1, VAR_8/2-1);
    }

    FUNC_19(FUNC_18(VAR_4[0]) && FUNC_18(VAR_4[1]) && FUNC_18(VAR_4[2]) &&
       VAR_4[3] == 0 && VAR_4[4] == 0 && VAR_4[5] == 0,
       "Expected GdipFillRectangleI take effect!\n" );
    FUNC_9(VAR_16);

    FUNC_14(VAR_13, VAR_15);
    FUNC_3(VAR_14);
    FUNC_2(VAR_13);
    FUNC_13(VAR_3, VAR_12);
}
