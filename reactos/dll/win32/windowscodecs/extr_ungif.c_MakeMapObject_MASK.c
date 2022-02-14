
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ColorCount; int BitsPerPixel; int * Colors; } ;
typedef int GifColorType ;
typedef TYPE_1__ ColorMapObject ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static ColorMapObject *
FUNC_5(int VAR_0,
              const GifColorType * VAR_1) {

    ColorMapObject *VAR_2;



    if (VAR_0 != (1 << FUNC_0(VAR_0))) {
        return ((void*)0);
    }

    VAR_2 = FUNC_2(sizeof(ColorMapObject));
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_2->Colors = FUNC_3(VAR_0, sizeof(GifColorType));
    if (VAR_2->Colors == ((void*)0)) {
        FUNC_4(VAR_2);
        return ((void*)0);
    }

    VAR_2->ColorCount = VAR_0;
    VAR_2->BitsPerPixel = FUNC_0(VAR_0);

    if (VAR_1) {
        FUNC_1(VAR_2->Colors, VAR_1, VAR_0 * sizeof(GifColorType));
    }

    return (VAR_2);
}
