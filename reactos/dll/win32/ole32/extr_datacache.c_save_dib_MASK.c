
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int hGlobal; } ;
struct TYPE_18__ {scalar_t__ tymed; TYPE_3__ u; } ;
struct TYPE_15__ {int cfFormat; } ;
struct TYPE_20__ {TYPE_4__ stgmedium; TYPE_1__ fmtetc; } ;
struct TYPE_16__ {scalar_t__ biXPelsPerMeter; scalar_t__ biYPelsPerMeter; int biHeight; int biWidth; } ;
struct TYPE_19__ {int dwSize; int bfType; int bfSize; scalar_t__ bfOffBits; scalar_t__ bfReserved2; scalar_t__ bfReserved1; TYPE_2__ bmiHeader; void* dwObjectExtentY; void* dwObjectExtentX; } ;
typedef TYPE_5__ PresentationDataHeader ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int HDC ;
typedef TYPE_6__ DataCacheEntry ;
typedef int BOOL ;
typedef TYPE_5__ BITMAPINFO ;
typedef TYPE_5__ BITMAPFILEHEADER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_5__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_7 (int ,int,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_11 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_12(DataCacheEntry *VAR_5, BOOL VAR_6, IStream *VAR_7)
{
    HRESULT VAR_8 = VAR_3;
    int VAR_9 = 0;
    BITMAPINFO *VAR_10 = ((void*)0);

    if (VAR_5->stgmedium.tymed != VAR_4)
    {
        VAR_9 = FUNC_4(VAR_5->stgmedium.u.hGlobal);
        VAR_10 = FUNC_3(VAR_5->stgmedium.u.hGlobal);
    }

    if (!VAR_6)
    {
        PresentationDataHeader VAR_11;

        FUNC_10(VAR_5, &VAR_11);
        VAR_8 = FUNC_11(VAR_7, VAR_5->fmtetc.cfFormat);
        if (FUNC_0(VAR_8)) goto end;
        if (VAR_9)
        {
            VAR_11.dwSize = VAR_9;

            if (VAR_10->bmiHeader.biXPelsPerMeter != 0 && VAR_10->bmiHeader.biYPelsPerMeter != 0)
            {
                VAR_11.dwObjectExtentX = FUNC_7(VAR_10->bmiHeader.biWidth, 100000, VAR_10->bmiHeader.biXPelsPerMeter);
                VAR_11.dwObjectExtentY = FUNC_7(VAR_10->bmiHeader.biHeight, 100000, VAR_10->bmiHeader.biYPelsPerMeter);
            }
            else
            {
                HDC VAR_12 = FUNC_1(0);
                VAR_11.dwObjectExtentX = FUNC_7(VAR_10->bmiHeader.biWidth, 2540, FUNC_2(VAR_12, VAR_1));
                VAR_11.dwObjectExtentY = FUNC_7(VAR_10->bmiHeader.biHeight, 2540, FUNC_2(VAR_12, VAR_2));
                FUNC_8(0, VAR_12);
            }
        }
        VAR_8 = FUNC_6(VAR_7, &VAR_11, sizeof(PresentationDataHeader), ((void*)0));
        if (VAR_8 == VAR_3 && VAR_9)
            VAR_8 = FUNC_6(VAR_7, VAR_10, VAR_9, ((void*)0));
    }
    else if(VAR_9)
    {
        BITMAPFILEHEADER VAR_13;

        VAR_13.bfType = 0x4d42;
        VAR_13.bfSize = VAR_9 + sizeof(BITMAPFILEHEADER);
        VAR_13.bfReserved1 = VAR_13.bfReserved2 = 0;
        VAR_13.bfOffBits = FUNC_9(VAR_10, VAR_0) + sizeof(BITMAPFILEHEADER);
        VAR_8 = FUNC_6(VAR_7, &VAR_13, sizeof(BITMAPFILEHEADER), ((void*)0));
        if (VAR_8 == VAR_3)
            VAR_8 = FUNC_6(VAR_7, VAR_10, VAR_9, ((void*)0));
    }

end:
    if (VAR_10) FUNC_5(VAR_5->stgmedium.u.hGlobal);
    return VAR_8;
}
