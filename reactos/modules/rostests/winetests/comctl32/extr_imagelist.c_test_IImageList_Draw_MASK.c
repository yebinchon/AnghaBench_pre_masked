
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int imldp ;
struct TYPE_4__ {int y; int x; int i; void* rgbFg; void* rgbBk; int fStyle; scalar_t__ himl; int * hdcDst; int cbSize; } ;
typedef TYPE_1__ IMAGELISTDRAWPARAMS ;
typedef int IImageList ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HIMAGELIST ;
typedef int * HDC ;
typedef scalar_t__ HBITMAP ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 (int,char*,...) ;
 scalar_t__ FUNC_15 (int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_16(void)
{
    IImageList *VAR_7;
    HIMAGELIST VAR_8;

    HBITMAP VAR_9;
    HBITMAP VAR_10;
    HBITMAP VAR_11;

    IMAGELISTDRAWPARAMS VAR_12;
    HWND VAR_13;
    HRESULT VAR_14;
    HDC VAR_15;
    int VAR_16;

    VAR_13 = FUNC_11();
    VAR_15 = FUNC_3(VAR_13);
    FUNC_14(VAR_15!=((void*)0), "couldn't get DC\n");


    VAR_8 = FUNC_15(48, 48, VAR_2, 0, 3);
    FUNC_14(VAR_8!=0,"failed to create imagelist\n");

    VAR_7 = (IImageList *) VAR_8;


    VAR_9 = FUNC_0(48, 48, 1, 1, VAR_6);
    FUNC_14(VAR_9 != 0, "no bitmap 1\n");
    VAR_10 = FUNC_0(48, 48, 1, 1, VAR_6);
    FUNC_14(VAR_10 != 0, "no bitmap 2\n");
    VAR_11 = FUNC_0(48, 48, 1, 1, VAR_6);
    FUNC_14(VAR_11 != 0, "no bitmap 3\n");


    VAR_16 = -1;
    FUNC_14( FUNC_4(VAR_7, VAR_9, 0, &VAR_16) == VAR_5 && (VAR_16 == 0), "failed to add bitmap 1\n");
    VAR_16 = -1;
    FUNC_14( FUNC_4(VAR_7, VAR_10, 0, &VAR_16) == VAR_5 && (VAR_16 == 1), "failed to add bitmap 2\n");

    FUNC_14( FUNC_9(VAR_7, 3) == VAR_5, "Setimage count failed\n");
    FUNC_14( FUNC_8(VAR_7, 2, VAR_11, 0) == VAR_5, "failed to replace bitmap 3\n");

if (0)
{

    FUNC_5(VAR_7, ((void*)0));
}

    FUNC_13(&VAR_12, 0, sizeof (VAR_12));
    VAR_14 = FUNC_5(VAR_7, &VAR_12);
    FUNC_14( VAR_14 == VAR_1, "got 0x%08x\n", VAR_14);

    VAR_12.cbSize = VAR_3;
    VAR_12.hdcDst = VAR_15;
    VAR_12.himl = VAR_8;

    FUNC_12(VAR_13);

    VAR_12.fStyle = VAR_4;
    VAR_12.rgbBk = VAR_0;
    VAR_12.rgbFg = VAR_0;
    VAR_12.y = 100;
    VAR_12.x = 100;
    FUNC_14( FUNC_5(VAR_7, &VAR_12) == VAR_5, "should succeed\n");
    VAR_12.i ++;
    FUNC_14( FUNC_5(VAR_7, &VAR_12) == VAR_5, "should succeed\n");
    VAR_12.i ++;
    FUNC_14( FUNC_5(VAR_7, &VAR_12) == VAR_5, "should succeed\n");
    VAR_12.i ++;
    FUNC_14( FUNC_5(VAR_7, &VAR_12) == VAR_1, "should fail\n");


    FUNC_14( FUNC_7(VAR_7, 0) == VAR_5, "removing 1st bitmap\n");
    FUNC_14( FUNC_7(VAR_7, 0) == VAR_5, "removing 2nd bitmap\n");
    FUNC_14( FUNC_7(VAR_7, 0) == VAR_5, "removing 3rd bitmap\n");


    FUNC_6(VAR_7);


    FUNC_14(FUNC_1(VAR_9),"bitmap 1 can't be deleted\n");
    FUNC_14(FUNC_1(VAR_10),"bitmap 2 can't be deleted\n");
    FUNC_14(FUNC_1(VAR_11),"bitmap 3 can't be deleted\n");

    FUNC_10(VAR_13, VAR_15);
    FUNC_2(VAR_13);
}
