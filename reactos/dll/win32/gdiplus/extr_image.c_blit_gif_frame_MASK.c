
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int height; int width; int stride; scalar_t__ bits; } ;
typedef int IWICBitmapSource ;
typedef int IWICBitmapFrameDecode ;
typedef int HRESULT ;
typedef TYPE_1__ GpBitmap ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int **) ;
 int FUNC_4 (int *,int*,int*,int*,int*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(GpBitmap *VAR_2, IWICBitmapFrameDecode *VAR_3, BOOL VAR_4)
{
    UINT VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    IWICBitmapSource *VAR_11;
    BYTE *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_4(VAR_3, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_13 = FUNC_3(&VAR_1, (IWICBitmapSource*)VAR_3, &VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_12 = FUNC_5(VAR_9*VAR_10*4);
    if(!VAR_12)
        return VAR_0;

    VAR_13 = FUNC_1(VAR_11, ((void*)0), VAR_9*4, VAR_9*VAR_10*4, VAR_12);
    FUNC_2(VAR_11);
    if(FUNC_0(VAR_13)) {
        FUNC_6(VAR_12);
        return VAR_13;
    }

    for(VAR_5=0; VAR_5<VAR_10 && VAR_5+VAR_8<VAR_2->height; VAR_5++) {
        for(VAR_6=0; VAR_6<VAR_9 && VAR_6+VAR_7<VAR_2->width; VAR_6++) {
            DWORD *VAR_14 = (DWORD*)(VAR_12+VAR_5*VAR_9*4+VAR_6*4);
            DWORD *VAR_15 = (DWORD*)(VAR_2->bits+(VAR_5+VAR_8)*VAR_2->stride+(VAR_6+VAR_7)*4);

            if(VAR_4 || *VAR_14>>24 != 0)
                *VAR_15 = *VAR_14;
        }
    }
    FUNC_6(VAR_12);
    return VAR_13;
}
