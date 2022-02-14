
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WICBitmapPaletteType ;
typedef int UINT ;
struct TYPE_4__ {int Flags; int Count; int Entries; } ;
typedef int IWICPalette ;
typedef int IWICImagingFactory ;
typedef int IWICBitmapFrameDecode ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ ColorPalette ;
typedef scalar_t__ BOOL ;
typedef int ARGB ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int,int ,int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (int ,int **) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_11 (int) ;

__attribute__((used)) static ColorPalette *FUNC_12(IWICBitmapFrameDecode *VAR_7, WICBitmapPaletteType VAR_8)
{
    HRESULT VAR_9;
    IWICImagingFactory *VAR_10;
    IWICPalette *VAR_11;
    ColorPalette *VAR_12 = ((void*)0);

    VAR_9 = FUNC_10(VAR_6, &VAR_10);
    if (VAR_9 != VAR_4) return ((void*)0);

    VAR_9 = FUNC_1(VAR_10, &VAR_11);
    if (VAR_9 == VAR_4)
    {
        VAR_9 = VAR_5;
        if (VAR_7)
            VAR_9 = FUNC_0(VAR_7, VAR_11);
        if (VAR_9 != VAR_4)
        {
            FUNC_9("using predefined palette %#x\n", VAR_8);
            VAR_9 = FUNC_7(VAR_11, VAR_8, VAR_0);
        }
        if (VAR_9 == VAR_4)
        {
            WICBitmapPaletteType VAR_13;
            BOOL VAR_14;
            UINT VAR_15;

            FUNC_3(VAR_11, &VAR_15);
            VAR_12 = FUNC_11(2 * sizeof(UINT) + VAR_15 * sizeof(ARGB));
            FUNC_4(VAR_11, VAR_15, VAR_12->Entries, &VAR_12->Count);

            FUNC_5(VAR_11, &VAR_13);
            switch(VAR_13) {
                case 135:
                case 137:
                case 136:
                    VAR_12->Flags = VAR_1;
                    break;
                case 128:
                case 130:
                case 129:
                case 134:
                case 133:
                case 132:
                case 131:
                    VAR_12->Flags = VAR_2;
                    break;
                default:
                    VAR_12->Flags = 0;
            }
            FUNC_6(VAR_11, &VAR_14);
            if(VAR_14)
                VAR_12->Flags |= VAR_3;
        }
        FUNC_8(VAR_11);
    }
    FUNC_2(VAR_10);
    return VAR_12;
}
