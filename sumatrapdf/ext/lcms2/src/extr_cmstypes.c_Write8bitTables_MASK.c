
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {TYPE_1__** TheCurves; } ;
typedef TYPE_2__ _cmsStageToneCurvesData ;
struct TYPE_4__ {int nEntries; int* Table16; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_3, cmsIOHANDLER* VAR_4, cmsUInt32Number VAR_5, _cmsStageToneCurvesData* VAR_6)
{
    int VAR_7;
    cmsUInt32Number VAR_8;
    cmsUInt8Number VAR_9;

    for (VAR_8=0; VAR_8 < VAR_5; VAR_8++) {

        if (VAR_6) {


            if ((VAR_6 ->TheCurves[VAR_8]->nEntries == 2) &&
                (VAR_6->TheCurves[VAR_8]->Table16[0] == 0) &&
                (VAR_6->TheCurves[VAR_8]->Table16[1] == 65535)) {

                    for (VAR_7=0; VAR_7 < 256; VAR_7++) {
                        if (!FUNC_1(VAR_3, VAR_4, (cmsUInt8Number) VAR_7)) return VAR_0;
                    }
            }
            else
                if (VAR_6 ->TheCurves[VAR_8]->nEntries != 256) {
                    FUNC_2(VAR_3, VAR_2, "LUT8 needs 256 entries on prelinearization");
                    return VAR_0;
                }
                else
                    for (VAR_7=0; VAR_7 < 256; VAR_7++) {

                        VAR_9 = (cmsUInt8Number) FUNC_0(VAR_6->TheCurves[VAR_8]->Table16[VAR_7]);

                        if (!FUNC_1(VAR_3, VAR_4, VAR_9)) return VAR_0;
                    }
        }
    }
    return VAR_1;
}
