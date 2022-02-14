
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X; scalar_t__ Y; int Width; int Height; } ;
struct TYPE_5__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef TYPE_2__ GpRect ;
typedef int GpGraphics ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int,int,int ) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int,int,int *) ;
 int FUNC_13 (int ,int ) ;
 int VAR_2 ;
 int FUNC_14 (int,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    HDC VAR_3,VAR_4;
    HBITMAP VAR_5;
    HGDIOBJ VAR_6;
    RECT VAR_7;
    POINT VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;
    GpGraphics* VAR_11 = ((void*)0);
    GpRect VAR_12;
    GpStatus VAR_13;

    FUNC_14(FUNC_8(VAR_2, &VAR_7), "GetClientRect should have succeeded\n");
    VAR_9 = VAR_7.right - VAR_7.left;
    VAR_10 = VAR_7.bottom - VAR_7.top;

    VAR_4 = FUNC_9(VAR_2);
    VAR_3 = FUNC_1 ( VAR_4 );
    VAR_5 = FUNC_0 ( VAR_4, VAR_9, VAR_10 );
    VAR_6 = FUNC_11 (VAR_3, VAR_5);


    FUNC_12 (VAR_3, VAR_7.left+10, VAR_7.top+10, &VAR_8);

    VAR_13 = FUNC_4(VAR_3, &VAR_11);
    FUNC_13(VAR_1, VAR_13);

    VAR_13 = FUNC_6(VAR_11, &VAR_12);
    FUNC_13(VAR_1, VAR_13);

    FUNC_14(VAR_12.X==VAR_7.left+10 &&
       VAR_12.Y==VAR_7.top+10 &&
       VAR_12.Width==VAR_9 &&
       VAR_12.Height==VAR_10, "Expected GdipGetVisibleClipBoundsI ok\n");

    VAR_13 = FUNC_7(VAR_11, 0, 0, VAR_9, VAR_10, VAR_0);
    FUNC_13(VAR_1, VAR_13);

    VAR_13 = FUNC_6(VAR_11, &VAR_12);
    FUNC_13(VAR_1, VAR_13);

    FUNC_14(VAR_12.X==VAR_7.left+10 &&
       VAR_12.Y==VAR_7.top+10 &&
       VAR_12.Width==VAR_9-10 &&
       VAR_12.Height==VAR_10-10, "Expected GdipGetVisibleClipBoundsI ok\n");

    FUNC_5(VAR_11);

    FUNC_11 (VAR_3, VAR_6);
    FUNC_3 (VAR_5);
    FUNC_2 (VAR_3);
    FUNC_10(VAR_2, VAR_4);
}
