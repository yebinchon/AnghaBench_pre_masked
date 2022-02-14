
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct RtfData {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int biHeight; int biWidth; } ;
struct TYPE_7__ {TYPE_4__ bmiHeader; TYPE_1__* bmiColors; } ;
struct TYPE_6__ {int rgbRed; int rgbGreen; int rgbBlue; } ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int BOOL ;
typedef TYPE_2__ BITMAPINFO ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*,int ,void const*,TYPE_2__ const*,int ) ;
 int FUNC_5 (int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,void*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct RtfData*,char*) ;
 scalar_t__ FUNC_13 (struct RtfData*,void*,scalar_t__) ;
 void* FUNC_14 (int ,int ,scalar_t__) ;
 int FUNC_15 (int ,int ,void*) ;
 int FUNC_16 (int,int,int) ;
 int FUNC_17 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_21(struct RtfData* VAR_6, const BITMAPINFO* VAR_7,
                                            const void* VAR_8, unsigned VAR_9)
{
    HDC VAR_10, VAR_11, VAR_12, VAR_13;
    HBITMAP VAR_14, VAR_15, VAR_16, VAR_17;
    HENHMETAFILE VAR_18;
    BOOL VAR_19 = VAR_2;
    void* VAR_20;
    UINT VAR_21;

    VAR_14 = FUNC_4(VAR_10 = FUNC_9(0), &VAR_7->bmiHeader,
                         VAR_0, VAR_8, VAR_7, VAR_1);

    VAR_12 = FUNC_3(VAR_10);
    VAR_17 = FUNC_18(VAR_12, VAR_14);


    VAR_11 = FUNC_3(VAR_10);
    VAR_15 = FUNC_2(VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biHeight, 1, 1, ((void*)0));
    VAR_16 = FUNC_18(VAR_11, VAR_15);
    FUNC_19(VAR_12,
               FUNC_16(VAR_7->bmiColors[VAR_9 - 1].rgbRed,
                   VAR_7->bmiColors[VAR_9 - 1].rgbGreen,
                   VAR_7->bmiColors[VAR_9 - 1].rgbBlue));
    FUNC_0(VAR_11, 0, 0, VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biHeight, VAR_12, 0, 0, VAR_4);


    FUNC_19(VAR_12, FUNC_16(0,0,0));
    FUNC_20(VAR_12, FUNC_16(255,255,255));
    FUNC_0(VAR_12, 0, 0, VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biHeight, VAR_11, 0, 0, VAR_3);

    FUNC_18(VAR_11, VAR_16);
    FUNC_6(VAR_11);

    FUNC_18(VAR_12, VAR_17);
    FUNC_6(VAR_12);


    VAR_13 = FUNC_5(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_12 = FUNC_3(VAR_13);


    VAR_17 = FUNC_18(VAR_12, VAR_15);
    FUNC_19(VAR_13, FUNC_16(255, 255, 255));
    FUNC_20(VAR_13, FUNC_16(0, 0, 0));
    FUNC_0(VAR_13, 0, 0, VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biHeight, VAR_12, 0, 0, VAR_3);


    FUNC_18(VAR_12, VAR_14);
    FUNC_0(VAR_13, 0, 0, VAR_7->bmiHeader.biWidth, VAR_7->bmiHeader.biHeight, VAR_12, 0, 0, VAR_5);
    FUNC_18(VAR_12, VAR_17);
    FUNC_6(VAR_12);


    FUNC_17(0, VAR_10);
    FUNC_8(VAR_15);
    FUNC_8(VAR_14);

    VAR_18 = FUNC_1(VAR_13);


    VAR_21 = FUNC_10(VAR_18, 0, ((void*)0));
    if (VAR_21 && (VAR_20 = FUNC_14(FUNC_11(), 0, VAR_21)))
    {
        if (VAR_21 == FUNC_10(VAR_18, VAR_21, VAR_20))
        {
            VAR_19 = FUNC_12(VAR_6, "{\\pict\\emfblip") &&
                FUNC_13(VAR_6, VAR_20, VAR_21) &&
                FUNC_12(VAR_6, "}");
        }
        FUNC_15(FUNC_11(), 0, VAR_20);
    }
    FUNC_7(VAR_18);

    return VAR_19;
}
