
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bitmap_data {int width; int height; double xres; double yres; int bpp; int format; } ;
struct TYPE_3__ {int Width; int Height; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_1__ WICRect ;
typedef int UINT ;
typedef int IWICBitmapSource ;
typedef int HRESULT ;
typedef int GUID ;
typedef int BYTE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,int,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,double*,double*) ;
 int FUNC_6 (int *,int*,int*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct bitmap_data const*,int,int *) ;
 double FUNC_10 (double) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int,int) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(const struct bitmap_data *VAR_0, const struct bitmap_data *VAR_1,
                                IWICBitmapSource *VAR_2, const char *VAR_3)
{
    BYTE *VAR_4;
    UINT VAR_5, VAR_6;
    double VAR_7, VAR_8;
    WICRect VAR_9;
    UINT VAR_10, VAR_11;
    GUID VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_6(VAR_2, &VAR_5, &VAR_6);
    FUNC_13(FUNC_8(VAR_13), "GetSize(%s) failed, hr=%x\n", VAR_3, VAR_13);
    FUNC_13(VAR_5 == VAR_1->width, "expecting %u, got %u (%s)\n", VAR_1->width, VAR_5, VAR_3);
    FUNC_13(VAR_6 == VAR_1->height, "expecting %u, got %u (%s)\n", VAR_1->height, VAR_6, VAR_3);

    VAR_13 = FUNC_5(VAR_2, &VAR_7, &VAR_8);
    FUNC_13(FUNC_8(VAR_13), "GetResolution(%s) failed, hr=%x\n", VAR_3, VAR_13);
    FUNC_13(FUNC_10(VAR_7 - VAR_1->xres) < 0.02, "expecting %0.2f, got %0.2f (%s)\n", VAR_1->xres, VAR_7, VAR_3);
    FUNC_13(FUNC_10(VAR_8 - VAR_1->yres) < 0.02, "expecting %0.2f, got %0.2f (%s)\n", VAR_1->yres, VAR_8, VAR_3);

    VAR_13 = FUNC_4(VAR_2, &VAR_12);
    FUNC_13(FUNC_8(VAR_13), "GetPixelFormat(%s) failed, hr=%x\n", VAR_3, VAR_13);
    FUNC_13(FUNC_7(&VAR_12, VAR_1->format), "got unexpected pixel format %s (%s)\n", FUNC_14(&VAR_12), VAR_3);

    VAR_9.X = 0;
    VAR_9.Y = 0;
    VAR_9.Width = VAR_1->width;
    VAR_9.Height = VAR_1->height;

    VAR_10 = (VAR_1->bpp * VAR_1->width + 7) / 8;
    VAR_11 = VAR_10 * VAR_1->height;

    VAR_4 = FUNC_1(FUNC_0(), 0, VAR_11);
    FUNC_12(VAR_4, 0xaa, VAR_11);
    VAR_13 = FUNC_3(VAR_2, &VAR_9, VAR_10, VAR_11, VAR_4);
    FUNC_13(FUNC_8(VAR_13), "CopyPixels(%s) failed, hr=%x\n", VAR_3, VAR_13);





    if (!(!FUNC_11(VAR_0->format) && FUNC_11(VAR_1->format)))
        FUNC_13(FUNC_9(VAR_1, VAR_11, VAR_4), "unexpected pixel data (%s)\n", VAR_3);


    FUNC_12(VAR_4, 0xaa, VAR_11);
    VAR_13 = FUNC_3(VAR_2, ((void*)0), VAR_10, VAR_11, VAR_4);
    FUNC_13(FUNC_8(VAR_13), "CopyPixels(%s,rc=NULL) failed, hr=%x\n", VAR_3, VAR_13);

    if (!(!FUNC_11(VAR_0->format) && FUNC_11(VAR_1->format)))
        FUNC_13(FUNC_9(VAR_1, VAR_11, VAR_4), "unexpected pixel data (%s)\n", VAR_3);

    FUNC_2(FUNC_0(), 0, VAR_4);
}
