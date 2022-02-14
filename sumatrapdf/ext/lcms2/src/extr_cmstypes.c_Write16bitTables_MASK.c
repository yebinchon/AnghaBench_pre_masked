
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {size_t nCurves; TYPE_1__** TheCurves; } ;
typedef TYPE_2__ _cmsStageToneCurvesData ;
struct TYPE_4__ {size_t nEntries; int * Table16; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_2, cmsIOHANDLER* VAR_3, _cmsStageToneCurvesData* VAR_4)
{
    cmsUInt32Number VAR_5;
    cmsUInt32Number VAR_6;
    cmsUInt16Number VAR_7;
    cmsUInt32Number VAR_8;

    FUNC_0(VAR_4 != ((void*)0));

    VAR_8 = VAR_4->TheCurves[0]->nEntries;

    for (VAR_6=0; VAR_6 < VAR_4 ->nCurves; VAR_6++) {

        for (VAR_5=0; VAR_5 < VAR_8; VAR_5++) {

            VAR_7 = VAR_4->TheCurves[VAR_6]->Table16[VAR_5];
            if (!FUNC_1(VAR_2, VAR_3, VAR_7)) return VAR_0;
        }
    }
    return VAR_1;
}
