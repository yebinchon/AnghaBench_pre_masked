
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Width; int Height; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_1__ WICRect ;
typedef int WICPixelFormatGUID ;
typedef int ULONG ;
typedef int UINT ;
struct TYPE_9__ {int width; int height; int* bits; int dpiY; int dpiX; } ;
struct TYPE_8__ {int QuadPart; } ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef TYPE_3__ IcoFrameDecode ;
typedef int IWICBitmapSource ;
typedef int IWICBitmapFrameDecode ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BmpDecoder ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int *,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int *,int*,int,int*) ;
 int FUNC_6 (int *,TYPE_2__,int ,int ) ;
 int FUNC_7 (int *,int ,int **) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,int*,int*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,TYPE_1__*,int,int,int*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_20 (int *,int *,int **) ;
 int VAR_6 ;
 int FUNC_21 (int ,int) ;

__attribute__((used)) static HRESULT FUNC_22(IStream *VAR_7, IcoFrameDecode *VAR_8)
{
    HRESULT VAR_9;
    BmpDecoder *VAR_10;
    IWICBitmapDecoder *VAR_11;
    IWICBitmapFrameDecode *VAR_12;
    WICPixelFormatGUID VAR_13;
    IWICBitmapSource *VAR_14;
    BOOL VAR_15=VAR_1;
    WICRect VAR_16;

    VAR_9 = FUNC_17(&VAR_10);
    if (FUNC_19(VAR_9))
    {
        FUNC_1(VAR_10, &VAR_11);
        VAR_9 = FUNC_8(VAR_11, VAR_7, VAR_6);

        if (FUNC_19(VAR_9))
            VAR_9 = FUNC_7(VAR_11, 0, &VAR_12);

        if (FUNC_19(VAR_9))
        {
            VAR_9 = FUNC_12(VAR_12, &VAR_8->width, &VAR_8->height);

            if (FUNC_19(VAR_9))
            {
                VAR_8->bits = FUNC_3(FUNC_2(), 0, VAR_8->width * VAR_8->height * 4);
                if (!VAR_8->bits) VAR_9 = VAR_0;
            }

            if (FUNC_19(VAR_9))
                VAR_9 = FUNC_10(VAR_12, &VAR_13);

            if (FUNC_18(&VAR_13, &VAR_2) ||
                FUNC_18(&VAR_13, &VAR_3))
            {
                VAR_14 = (IWICBitmapSource*)VAR_12;
                FUNC_14(VAR_14);
                VAR_15 = VAR_5;
            }
            else
            {
                VAR_9 = FUNC_20(&VAR_3,
                    (IWICBitmapSource*)VAR_12, &VAR_14);
                VAR_15 = VAR_1;
            }

            if (FUNC_19(VAR_9))
            {
                VAR_16.X = 0;
                VAR_16.Y = 0;
                VAR_16.Width = VAR_8->width;
                VAR_16.Height = VAR_8->height;
                VAR_9 = FUNC_15(VAR_14, &VAR_16, VAR_8->width * 4,
                    VAR_8->width * VAR_8->height * 4, VAR_8->bits);

                FUNC_16(VAR_14);
            }

            if (FUNC_19(VAR_9))
                VAR_9 = FUNC_11(VAR_12, &VAR_8->dpiX, &VAR_8->dpiY);

            FUNC_13(VAR_12);
        }

        if (FUNC_19(VAR_9) && VAR_15)
        {

            int VAR_17 = 0;
            UINT VAR_18;

            for (VAR_18=0; VAR_18<(VAR_8->height*VAR_8->width); VAR_18++)
            {
                if (VAR_8->bits[VAR_18*4+3] != 0)
                {
                    VAR_17 = 1;
                    break;
                }
            }

            if (!VAR_17)
            {
                for (VAR_18=0; VAR_18<(VAR_8->height*VAR_8->width); VAR_18++)
                    VAR_8->bits[VAR_18*4+3] = 0xff;

                VAR_15 = VAR_1;
            }
        }

        if (FUNC_19(VAR_9) && !VAR_15)
        {

            UINT VAR_19 = (VAR_8->width+31)/32*4;
            UINT VAR_20 = VAR_19 * VAR_8->height;
            INT VAR_21;
            BYTE *VAR_22=((void*)0);
            BYTE *VAR_23;
            BYTE *VAR_24;
            UINT VAR_25 = VAR_8->width * 4;
            UINT VAR_26, VAR_27;
            ULONG VAR_28;
            ULONG VAR_29;
            LARGE_INTEGER VAR_30;
            int VAR_31;

            FUNC_0(VAR_10, &VAR_28, &VAR_31);

            if (VAR_28)
            {
                VAR_30.QuadPart = VAR_28;

                VAR_9 = FUNC_6(VAR_7, VAR_30, VAR_4, 0);

                if (FUNC_19(VAR_9))
                {
                    VAR_22 = FUNC_3(FUNC_2(), 0, VAR_20);
                    if (!VAR_22) VAR_9 = VAR_0;
                }

                if (FUNC_19(VAR_9))
                    VAR_9 = FUNC_5(VAR_7, VAR_22, VAR_20, &VAR_29);

                if (FUNC_19(VAR_9) && VAR_29 == VAR_20)
                {
                    if (VAR_31)
                    {
                        VAR_21 = VAR_19;
                        VAR_23 = VAR_22;
                    }
                    else
                    {
                        VAR_21 = -VAR_19;
                        VAR_23 = VAR_22 + (VAR_8->height-1)*VAR_19;
                    }

                    VAR_24 = VAR_8->bits;
                    for (VAR_27=0; VAR_27<VAR_8->height; VAR_27++) {
                        BYTE *VAR_32=VAR_23;
                        DWORD *VAR_33=(DWORD*)VAR_24;
                        for (VAR_26=0; VAR_26<VAR_8->width; VAR_26+=8) {
                            BYTE VAR_34=*VAR_32++;
                            FUNC_21(VAR_33++, VAR_34>>7&1);
                            if (VAR_26+1 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>6&1);
                            if (VAR_26+2 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>5&1);
                            if (VAR_26+3 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>4&1);
                            if (VAR_26+4 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>3&1);
                            if (VAR_26+5 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>2&1);
                            if (VAR_26+6 < VAR_8->width) FUNC_21(VAR_33++, VAR_34>>1&1);
                            if (VAR_26+7 < VAR_8->width) FUNC_21(VAR_33++, VAR_34&1);
                        }
                        VAR_23 += VAR_21;
                        VAR_24 += VAR_25;
                    }
                }

                FUNC_4(FUNC_2(), 0, VAR_22);
            }
        }

        FUNC_9(VAR_11);
    }

    return VAR_9;
}
