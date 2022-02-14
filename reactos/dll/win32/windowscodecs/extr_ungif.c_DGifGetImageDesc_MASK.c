
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {long PixelCount; } ;
struct TYPE_18__ {int Interlace; scalar_t__ Height; scalar_t__ Width; TYPE_11__* ColorMap; scalar_t__ Top; scalar_t__ Left; } ;
struct TYPE_20__ {int ImageCount; TYPE_2__ Image; TYPE_3__* SavedImages; TYPE_5__* Private; } ;
struct TYPE_17__ {int * ExtensionBlocks; scalar_t__ ExtensionBlockCount; } ;
struct TYPE_19__ {TYPE_1__ Extensions; int * RasterBits; TYPE_2__ ImageDesc; } ;
struct TYPE_16__ {int SortFlag; int ColorCount; TYPE_10__* Colors; } ;
struct TYPE_15__ {int Red; int Green; int Blue; } ;
typedef TYPE_3__ SavedImage ;
typedef TYPE_4__ GifFileType ;
typedef TYPE_5__ GifFilePrivateType ;
typedef int GifByteType ;


 scalar_t__ FUNC_0 (TYPE_4__*,scalar_t__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_11__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int,TYPE_10__*) ;
 int FUNC_4 (TYPE_4__*,int*,int) ;
 TYPE_3__* FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_7(GifFileType * VAR_2) {

    int VAR_3, VAR_4, VAR_5;
    GifByteType VAR_6[3];
    GifFilePrivateType *VAR_7 = VAR_2->Private;
    SavedImage *VAR_8;

    if (FUNC_0(VAR_2, &VAR_2->Image.Left) == VAR_0 ||
        FUNC_0(VAR_2, &VAR_2->Image.Top) == VAR_0 ||
        FUNC_0(VAR_2, &VAR_2->Image.Width) == VAR_0 ||
        FUNC_0(VAR_2, &VAR_2->Image.Height) == VAR_0)
        return VAR_0;
    if (FUNC_4(VAR_2, VAR_6, 1) != 1) {
        return VAR_0;
    }
    VAR_4 = (VAR_6[0] & 0x07) + 1;
    VAR_5 = (VAR_6[0] & 0x20) != 0;
    VAR_2->Image.Interlace = (VAR_6[0] & 0x40);
    if (VAR_6[0] & 0x80) {

        FUNC_2(VAR_2->Image.ColorMap);

        VAR_2->Image.ColorMap = FUNC_3(1 << VAR_4, ((void*)0));
        if (VAR_2->Image.ColorMap == ((void*)0)) {
            return VAR_0;
        }


        VAR_2->Image.ColorMap->SortFlag = VAR_5;
        for (VAR_3 = 0; VAR_3 < VAR_2->Image.ColorMap->ColorCount; VAR_3++) {
            if (FUNC_4(VAR_2, VAR_6, 3) != 3) {
                FUNC_2(VAR_2->Image.ColorMap);
                VAR_2->Image.ColorMap = ((void*)0);
                return VAR_0;
            }
            VAR_2->Image.ColorMap->Colors[VAR_3].Red = VAR_6[0];
            VAR_2->Image.ColorMap->Colors[VAR_3].Green = VAR_6[1];
            VAR_2->Image.ColorMap->Colors[VAR_3].Blue = VAR_6[2];
        }
    } else if (VAR_2->Image.ColorMap) {
        FUNC_2(VAR_2->Image.ColorMap);
        VAR_2->Image.ColorMap = ((void*)0);
    }

    if (VAR_2->SavedImages) {
        if ((VAR_2->SavedImages = FUNC_6(VAR_2->SavedImages,
                                      sizeof(SavedImage) *
                                      (VAR_2->ImageCount + 1))) == ((void*)0)) {
            return VAR_0;
        }
    } else {
        if ((VAR_2->SavedImages = FUNC_5(sizeof(SavedImage))) == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = &VAR_2->SavedImages[VAR_2->ImageCount];
    VAR_8->ImageDesc = VAR_2->Image;
    if (VAR_2->Image.ColorMap != ((void*)0)) {
        VAR_8->ImageDesc.ColorMap = FUNC_3(
                                 VAR_2->Image.ColorMap->ColorCount,
                                 VAR_2->Image.ColorMap->Colors);
        if (VAR_8->ImageDesc.ColorMap == ((void*)0)) {
            return VAR_0;
        }
        VAR_8->ImageDesc.ColorMap->SortFlag = VAR_2->Image.ColorMap->SortFlag;
    }
    VAR_8->RasterBits = ((void*)0);
    VAR_8->Extensions.ExtensionBlockCount = 0;
    VAR_8->Extensions.ExtensionBlocks = ((void*)0);

    VAR_2->ImageCount++;

    VAR_7->PixelCount = (long)VAR_2->Image.Width *
       (long)VAR_2->Image.Height;

    FUNC_1(VAR_2);

    return VAR_1;
}
