
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsContext ;
struct TYPE_6__ {struct TYPE_6__* Next; } ;
typedef TYPE_1__ _cmsParametricCurvesCollection ;
struct TYPE_7__ {TYPE_1__* ParametricCurves; } ;
typedef TYPE_2__ _cmsCurvesPluginChunkType ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static
_cmsParametricCurvesCollection *FUNC_2(cmsContext VAR_2, int VAR_3, int* VAR_4)
{
    _cmsParametricCurvesCollection* VAR_5;
    int VAR_6;
    _cmsCurvesPluginChunkType* VAR_7 = ( _cmsCurvesPluginChunkType*) FUNC_1(VAR_2, VAR_0);

    for (VAR_5 = VAR_7->ParametricCurves; VAR_5 != ((void*)0); VAR_5 = VAR_5 ->Next) {

        VAR_6 = FUNC_0(VAR_3, VAR_5);

        if (VAR_6 != -1) {
            if (VAR_4 != ((void*)0))
                *VAR_4 = VAR_6;
            return VAR_5;
        }
    }

    for (VAR_5 = &VAR_1; VAR_5 != ((void*)0); VAR_5 = VAR_5 ->Next) {

        VAR_6 = FUNC_0(VAR_3, VAR_5);

        if (VAR_6 != -1) {
            if (VAR_4 != ((void*)0))
                *VAR_4 = VAR_6;
            return VAR_5;
        }
    }

    return ((void*)0);
}
