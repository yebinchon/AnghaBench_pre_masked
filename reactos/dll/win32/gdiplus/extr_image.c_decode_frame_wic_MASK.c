
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int (* metadata_reader_func ) (TYPE_1__*,int *,int) ;
struct TYPE_21__ {int Width; int Height; int Y; scalar_t__ X; } ;
typedef TYPE_2__ WICRect ;
typedef int WICPixelFormatGUID ;
typedef int WICBitmapPaletteType ;
typedef int UINT ;
struct TYPE_25__ {int palette_type; int gdip_format; int * wic_format; } ;
struct TYPE_24__ {int Stride; scalar_t__ Scan0; } ;
struct TYPE_23__ {scalar_t__ Flags; } ;
struct TYPE_22__ {double xres; double yres; int flags; int frame_count; int current_frame; TYPE_5__* palette; int * decoder; } ;
struct TYPE_20__ {TYPE_3__ image; int * metadata_reader; } ;
typedef int PixelFormat ;
typedef int IWICMetadataBlockReader ;
typedef int IWICBitmapSource ;
typedef int IWICBitmapFrameDecode ;
typedef int IWICBitmapDecoder ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ GpStatus ;
typedef TYPE_3__ GpImage ;
typedef TYPE_1__ GpBitmap ;
typedef TYPE_5__ ColorPalette ;
typedef TYPE_6__ BitmapData ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (int,int,int ,int ,int *,TYPE_1__**) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int,int **) ;
 int FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,TYPE_2__*,int ,int ,int *) ;
 scalar_t__ FUNC_13 (int *,double*,double*) ;
 scalar_t__ FUNC_14 (int *,int*,int*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int*) ;
 int FUNC_17 (int *,int ,int **) ;
 int FUNC_18 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_19 (int *,int *) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_21 (char*,TYPE_3__*,...) ;
 int VAR_16 ;
 scalar_t__ FUNC_22 (int *,int *,int **) ;
 int FUNC_23 (int) ;
 TYPE_5__* FUNC_24 (int *,int ) ;
 int FUNC_25 (TYPE_5__*) ;
 scalar_t__ FUNC_26 (scalar_t__) ;
 TYPE_7__* VAR_17 ;
 int FUNC_27 (int *) ;

__attribute__((used)) static GpStatus FUNC_28(IWICBitmapDecoder *VAR_18, BOOL VAR_19,
    UINT VAR_20, metadata_reader_func VAR_21, GpImage **VAR_22)
{
    GpStatus VAR_23=VAR_13;
    GpBitmap *VAR_24;
    HRESULT VAR_25;
    IWICBitmapFrameDecode *VAR_26;
    IWICBitmapSource *VAR_27=((void*)0);
    IWICMetadataBlockReader *VAR_28;
    WICPixelFormatGUID VAR_29;
    PixelFormat VAR_30=0;
    ColorPalette *VAR_31 = ((void*)0);
    WICBitmapPaletteType VAR_32 = VAR_16;
    int VAR_33;
    UINT VAR_34, VAR_35, VAR_36;
    BitmapData VAR_37;
    WICRect VAR_38;

    FUNC_21("%p,%u,%p\n", VAR_18, VAR_20, VAR_22);

    FUNC_7(VAR_18, &VAR_36);
    VAR_25 = FUNC_6(VAR_18, VAR_20, &VAR_26);
    if (FUNC_20(VAR_25))
    {
        VAR_25 = FUNC_8(VAR_26, &VAR_29);

        if (FUNC_20(VAR_25))
        {
            if (!VAR_19)
            {
                for (VAR_33=0; VAR_17[VAR_33].wic_format; VAR_33++)
                {
                    if (FUNC_19(&VAR_29, VAR_17[VAR_33].wic_format))
                    {
                        VAR_27 = (IWICBitmapSource*)VAR_26;
                        FUNC_11(VAR_27);
                        VAR_30 = VAR_17[VAR_33].gdip_format;
                        VAR_32 = VAR_17[VAR_33].palette_type;
                        break;
                    }
                }
            }
            if (!VAR_27)
            {

                VAR_25 = FUNC_22(&VAR_2, (IWICBitmapSource*)VAR_26, &VAR_27);
                VAR_30 = VAR_14;
            }
            FUNC_21("%s => %#x\n", FUNC_27(&VAR_29), VAR_30);
        }

        if (FUNC_20(VAR_25))
        {
            VAR_25 = FUNC_14(VAR_27, &VAR_34, &VAR_35);

            if (FUNC_20(VAR_25))
                VAR_23 = FUNC_3(VAR_34, VAR_35, 0, VAR_30,
                    ((void*)0), &VAR_24);

            if (FUNC_20(VAR_25) && VAR_23 == VAR_13)
            {
                VAR_23 = FUNC_1(VAR_24, ((void*)0), VAR_12,
                    VAR_30, &VAR_37);
                if (VAR_23 == VAR_13)
                {
                    VAR_38.X = 0;
                    VAR_38.Width = VAR_34;
                    VAR_38.Height = 1;
                    for (VAR_33=0; VAR_33<VAR_35; VAR_33++)
                    {
                        VAR_38.Y = VAR_33;
                        VAR_25 = FUNC_12(VAR_27, &VAR_38, FUNC_23(VAR_37.Stride),
                            FUNC_23(VAR_37.Stride), (BYTE*)VAR_37.Scan0+VAR_37.Stride*VAR_33);
                        if (FUNC_0(VAR_25)) break;
                    }

                    FUNC_2(VAR_24, &VAR_37);
                }

                if (FUNC_20(VAR_25) && VAR_23 == VAR_13)
                    *VAR_22 = &VAR_24->image;
                else
                {
                    *VAR_22 = ((void*)0);
                    FUNC_4(&VAR_24->image);
                }

                if (FUNC_20(VAR_25) && VAR_23 == VAR_13)
                {
                    double VAR_39, VAR_40;
                    VAR_25 = FUNC_13(VAR_27, &VAR_39, &VAR_40);
                    if (FUNC_20(VAR_25))
                    {
                        VAR_24->image.xres = VAR_39;
                        VAR_24->image.yres = VAR_40;
                    }
                    VAR_25 = VAR_15;
                }
            }

            FUNC_15(VAR_27);
        }

        if (FUNC_20(VAR_25)) {
            VAR_24->metadata_reader = ((void*)0);

            if (VAR_21)
                VAR_21(VAR_24, VAR_18, VAR_20);
            else if (FUNC_9(VAR_26, &VAR_6, (void **)&VAR_28) == VAR_15)
            {
                UINT VAR_41 = 0;
                if (FUNC_16(VAR_28, &VAR_41) == VAR_15 && VAR_41)
                    FUNC_17(VAR_28, 0, &VAR_24->metadata_reader);
                FUNC_18(VAR_28);
            }

            VAR_31 = FUNC_24(VAR_26, VAR_32);
            FUNC_10(VAR_26);
        }
    }

    if (FUNC_0(VAR_25) && VAR_23 == VAR_13) VAR_23 = FUNC_26(VAR_25);

    if (VAR_23 == VAR_13)
    {

        VAR_24->image.flags |= VAR_11|VAR_10|VAR_9;
        if (FUNC_19(&VAR_29, &VAR_1) ||
            FUNC_19(&VAR_29, &VAR_3) ||
            FUNC_19(&VAR_29, &VAR_4) ||
            FUNC_19(&VAR_29, &VAR_0))
            VAR_24->image.flags |= VAR_7;
        else
            VAR_24->image.flags |= VAR_8;
        VAR_24->image.frame_count = VAR_36;
        VAR_24->image.current_frame = VAR_20;
        VAR_24->image.decoder = VAR_18;
        FUNC_5(VAR_18);
        if (VAR_31)
        {
            FUNC_25(VAR_24->image.palette);
            VAR_24->image.palette = VAR_31;
        }
        else
        {
            if (FUNC_19(&VAR_29, &VAR_5))
                VAR_24->image.palette->Flags = 0;
        }
        FUNC_21("=> %p\n", *VAR_22);
    }

    return VAR_23;
}
