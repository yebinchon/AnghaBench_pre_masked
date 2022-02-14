
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ ExtensionBlocks; } ;
struct TYPE_9__ {int ImageCount; TYPE_2__* SavedImages; } ;
struct TYPE_7__ {int * ColorMap; } ;
struct TYPE_8__ {TYPE_6__ Extensions; struct TYPE_8__* RasterBits; TYPE_1__ ImageDesc; } ;
typedef TYPE_2__ SavedImage ;
typedef TYPE_3__ GifFileType ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(GifFileType * VAR_0) {

    SavedImage *VAR_1;

    if ((VAR_0 == ((void*)0)) || (VAR_0->SavedImages == ((void*)0))) {
        return;
    }
    for (VAR_1 = VAR_0->SavedImages;
         VAR_1 < VAR_0->SavedImages + VAR_0->ImageCount; VAR_1++) {
        if (VAR_1->ImageDesc.ColorMap) {
            FUNC_1(VAR_1->ImageDesc.ColorMap);
            VAR_1->ImageDesc.ColorMap = ((void*)0);
        }

        FUNC_2(VAR_1->RasterBits);

        if (VAR_1->Extensions.ExtensionBlocks)
            FUNC_0(&VAR_1->Extensions);
    }
    FUNC_2(VAR_0->SavedImages);
    VAR_0->SavedImages=((void*)0);
}
