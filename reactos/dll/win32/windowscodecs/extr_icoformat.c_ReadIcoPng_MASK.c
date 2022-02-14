
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Width; int Height; scalar_t__ Y; scalar_t__ X; } ;
typedef TYPE_1__ WICRect ;
struct TYPE_6__ {int width; int height; int * bits; int dpiY; int dpiX; } ;
typedef TYPE_2__ IcoFrameDecode ;
typedef int IWICBitmapSource ;
typedef int IWICBitmapFrameDecode ;
typedef int IWICBitmapDecoder ;
typedef int IStream ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int*,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__*,int,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,void**) ;
 int FUNC_12 (int *,int *,int **) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_13(IStream *VAR_4, IcoFrameDecode *VAR_5)
{
    IWICBitmapDecoder *VAR_6 = ((void*)0);
    IWICBitmapFrameDecode *VAR_7 = ((void*)0);
    IWICBitmapSource *VAR_8 = ((void*)0);
    WICRect VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_11(&VAR_2, (void**)&VAR_6);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_10 = FUNC_4(VAR_6, VAR_4, VAR_3);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_10 = FUNC_3(VAR_6, 0, &VAR_7);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_10 = FUNC_12(&VAR_1, (IWICBitmapSource*)VAR_7, &VAR_8);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_10 = FUNC_7(VAR_7, &VAR_5->width, &VAR_5->height);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_10 = FUNC_6(VAR_7, &VAR_5->dpiX, &VAR_5->dpiY);
    if (FUNC_0(VAR_10))
        goto end;
    VAR_5->bits = FUNC_2(FUNC_1(), 0, 4 * VAR_5->width * VAR_5->height);
    if (VAR_5->bits == ((void*)0))
    {
        VAR_10 = VAR_0;
        goto end;
    }
    VAR_9.X = 0;
    VAR_9.Y = 0;
    VAR_9.Width = VAR_5->width;
    VAR_9.Height = VAR_5->height;
    VAR_10 = FUNC_9(VAR_8, &VAR_9, 4*VAR_5->width,
                                     4*VAR_5->width*VAR_5->height, VAR_5->bits);

end:
    if (VAR_6 != ((void*)0))
        FUNC_5(VAR_6);
    if (VAR_7 != ((void*)0))
        FUNC_8(VAR_7);
    if (VAR_8 != ((void*)0))
        FUNC_10(VAR_8);
    return VAR_10;
}
