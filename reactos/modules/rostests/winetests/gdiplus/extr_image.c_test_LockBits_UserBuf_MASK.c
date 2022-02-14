
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bits ;
struct TYPE_7__ {int Width; int Height; int Stride; int* Scan0; int Reserved; int PixelFormat; } ;
struct TYPE_6__ {int X; int Y; int Width; int Height; } ;
typedef int INT ;
typedef int GpStatus ;
typedef TYPE_1__ GpRect ;
typedef int GpImage ;
typedef int GpBitmap ;
typedef int DWORD ;
typedef TYPE_2__ BitmapData ;
typedef int ARGB ;


 int FUNC_0 (int *,int,int,int*) ;
 int FUNC_1 (int *,TYPE_1__*,int,int ,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int const,int const,int ,int ,int *,int **) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int*,int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    GpStatus VAR_5;
    GpBitmap *VAR_6;
    GpRect VAR_7;
    BitmapData VAR_8;
    const INT VAR_9 = 10, VAR_10 = 20;
    DWORD VAR_11[200];
    ARGB VAR_12;

    VAR_6 = ((void*)0);
    VAR_5 = FUNC_3(VAR_9, VAR_10, 0, VAR_4, ((void*)0), &VAR_6);
    FUNC_5(VAR_3, VAR_5);

    FUNC_6(VAR_11, 0xaa, sizeof(VAR_11));

    VAR_7.X = 2;
    VAR_7.Y = 3;
    VAR_7.Width = 4;
    VAR_7.Height = 5;

    VAR_8.Width = 4;
    VAR_8.Height = 6;
    VAR_8.Stride = VAR_9 * 4;
    VAR_8.PixelFormat = VAR_4;
    VAR_8.Scan0 = &VAR_11[2+3*VAR_9];
    VAR_8.Reserved = 0xaaaaaaaa;


    VAR_5 = FUNC_1(VAR_6, &VAR_7, VAR_0|VAR_1, VAR_4, &VAR_8);
    FUNC_5(VAR_3, VAR_5);

    FUNC_5(0xaaaaaaaa, VAR_11[0]);
    FUNC_5(0, VAR_11[2+3*VAR_9]);

    VAR_11[2+3*VAR_9] = 0xdeadbeef;

    if (VAR_5 == VAR_3) {
        VAR_5 = FUNC_2(VAR_6, &VAR_8);
        FUNC_5(VAR_3, VAR_5);
    }

    VAR_5 = FUNC_0(VAR_6, 2, 3, &VAR_12);
    FUNC_5(VAR_3, VAR_5);
    FUNC_5(0, VAR_12);


    VAR_5 = FUNC_1(VAR_6, &VAR_7, VAR_2|VAR_1, VAR_4, &VAR_8);
    FUNC_5(VAR_3, VAR_5);

    FUNC_5(0xdeadbeef, VAR_11[2+3*VAR_9]);
    VAR_11[2+3*VAR_9] = 0x12345678;

    if (VAR_5 == VAR_3) {
        VAR_5 = FUNC_2(VAR_6, &VAR_8);
        FUNC_5(VAR_3, VAR_5);
    }

    VAR_5 = FUNC_0(VAR_6, 2, 3, &VAR_12);
    FUNC_5(VAR_3, VAR_5);
    FUNC_5(0x12345678, VAR_12);

    VAR_11[2+3*VAR_9] = 0;


    VAR_5 = FUNC_1(VAR_6, &VAR_7, VAR_0|VAR_2|VAR_1, VAR_4, &VAR_8);
    FUNC_5(VAR_3, VAR_5);

    FUNC_5(0x12345678, VAR_11[2+3*VAR_9]);
    VAR_11[2+3*VAR_9] = 0xdeadbeef;

    if (VAR_5 == VAR_3) {
        VAR_5 = FUNC_2(VAR_6, &VAR_8);
        FUNC_5(VAR_3, VAR_5);
    }

    VAR_5 = FUNC_0(VAR_6, 2, 3, &VAR_12);
    FUNC_5(VAR_3, VAR_5);
    FUNC_5(0xdeadbeef, VAR_12);

    VAR_5 = FUNC_4((GpImage*)VAR_6);
    FUNC_5(VAR_3, VAR_5);
}
