
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_7__ {int decoder; } ;
struct TYPE_9__ {int height; int stride; int width; TYPE_1__ image; scalar_t__ bits; } ;
struct TYPE_8__ {int current_frame; } ;
typedef int IWICBitmapFrameDecode ;
typedef int HRESULT ;
typedef int GpStatus ;
typedef TYPE_2__ GpImage ;
typedef TYPE_3__ GpBitmap ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int **) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int *,char const*) ;
 int FUNC_6 (int *,int*,int*,int*,int*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static GpStatus FUNC_8(GpImage* VAR_8, UINT VAR_9)
{
    static const WCHAR VAR_10[] = {'D','i','s','p','o','s','a','l',0};

    GpBitmap *VAR_11 = (GpBitmap*)VAR_8;
    IWICBitmapFrameDecode *VAR_12;
    int VAR_13=0, VAR_14;
    BOOL VAR_15 = VAR_0;
    DWORD VAR_16 = 0;
    HRESULT VAR_17;

    if(VAR_9 > VAR_8->current_frame) {
        VAR_17 = FUNC_1(VAR_11->image.decoder, VAR_8->current_frame, &VAR_12);
        if(FUNC_0(VAR_17))
            return FUNC_7(VAR_17);
        VAR_14 = FUNC_5(VAR_12, &VAR_5, VAR_10);
        FUNC_2(VAR_12);

        if(VAR_14 == VAR_2)
            VAR_13 = VAR_8->current_frame;
        else if(VAR_14 != VAR_3)
            VAR_13 = VAR_8->current_frame+1;
    }

    while(VAR_13 != VAR_9) {
        VAR_17 = FUNC_1(VAR_11->image.decoder, VAR_13, &VAR_12);
        if(FUNC_0(VAR_17))
            return FUNC_7(VAR_17);
        VAR_14 = FUNC_5(VAR_12, &VAR_5, VAR_10);

        if(VAR_14==VAR_4 || VAR_14==VAR_1) {
            VAR_17 = FUNC_3(VAR_11, VAR_12, VAR_13==0);
            if(FUNC_0(VAR_17))
                return FUNC_7(VAR_17);
        }else if(VAR_14 == VAR_2) {
            UINT VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

            if(!VAR_15) {
                VAR_16 = FUNC_4(VAR_11);
                VAR_15 = VAR_7;
            }

            VAR_17 = FUNC_6(VAR_12, &VAR_18, &VAR_19, &VAR_20, &VAR_21);
            if(FUNC_0(VAR_17))
                return FUNC_7(VAR_17);
            for(VAR_22=VAR_19; VAR_22<VAR_19+VAR_21 && VAR_22<VAR_11->height; VAR_22++) {
                DWORD *VAR_24 = (DWORD*)(VAR_11->bits+VAR_22*VAR_11->stride);
                for(VAR_23=VAR_18; VAR_23<VAR_18+VAR_20 && VAR_23<VAR_11->width; VAR_23++)
                    VAR_24[VAR_23] = VAR_16;
            }
        }

        FUNC_2(VAR_12);
        VAR_13++;
    }

    VAR_17 = FUNC_1(VAR_11->image.decoder, VAR_9, &VAR_12);
    if(FUNC_0(VAR_17))
        return FUNC_7(VAR_17);

    VAR_17 = FUNC_3(VAR_11, VAR_12, VAR_13==0);
    FUNC_2(VAR_12);
    if(FUNC_0(VAR_17))
        return FUNC_7(VAR_17);

    VAR_8->current_frame = VAR_9;
    return VAR_6;
}
