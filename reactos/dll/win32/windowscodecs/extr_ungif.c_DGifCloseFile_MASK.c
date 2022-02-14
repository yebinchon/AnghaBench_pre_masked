
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * ColorMap; } ;
struct TYPE_8__ {int Extensions; int * SavedImages; int * SColorMap; TYPE_1__ Image; struct TYPE_8__* Private; } ;
typedef TYPE_2__ GifFileType ;
typedef TYPE_2__ GifFilePrivateType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(GifFileType * VAR_2) {

    GifFilePrivateType *VAR_3;

    if (VAR_2 == ((void*)0))
        return VAR_0;

    VAR_3 = VAR_2->Private;

    if (VAR_2->Image.ColorMap) {
        FUNC_1(VAR_2->Image.ColorMap);
        VAR_2->Image.ColorMap = ((void*)0);
    }

    if (VAR_2->SColorMap) {
        FUNC_1(VAR_2->SColorMap);
        VAR_2->SColorMap = ((void*)0);
    }

    FUNC_3(VAR_3);
    VAR_3 = ((void*)0);

    if (VAR_2->SavedImages) {
        FUNC_2(VAR_2);
        VAR_2->SavedImages = ((void*)0);
    }

    FUNC_0(&VAR_2->Extensions);

    FUNC_3(VAR_2);

    return VAR_1;
}
