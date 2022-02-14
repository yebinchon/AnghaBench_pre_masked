
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef double cmsFloat64Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_3__ {int InputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (double) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_11(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                                register cmsUInt16Number VAR_2[],
                                register cmsUInt8Number* VAR_3,
                                register cmsUInt32Number VAR_4)
{

    cmsUInt32Number VAR_5 = FUNC_3(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_6 = FUNC_4(VAR_1 ->InputFormat);
    cmsUInt32Number VAR_7 = FUNC_6(VAR_1 ->InputFormat);
    cmsUInt32Number VAR_8 = FUNC_8(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_9 = FUNC_5(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_10 = VAR_6 ^ VAR_8;
    cmsUInt32Number VAR_11 = FUNC_7(VAR_1 -> InputFormat);
    cmsFloat64Number VAR_12;
    cmsUInt16Number VAR_13;
    cmsUInt32Number VAR_14, VAR_15 = 0;
    cmsFloat64Number VAR_16 = FUNC_0(VAR_1 ->InputFormat) ? 655.35 : 65535.0;


    VAR_4 /= FUNC_1(VAR_1->InputFormat);

    if (VAR_10)
            VAR_15 = VAR_9;

    for (VAR_14=0; VAR_14 < VAR_5; VAR_14++) {

        cmsUInt32Number VAR_17 = VAR_6 ? (VAR_5 - VAR_14 - 1) : VAR_14;

        if (VAR_11)
            VAR_12 = (cmsFloat32Number) ((cmsFloat64Number*) VAR_3)[(VAR_14 + VAR_15) * VAR_4];
        else
            VAR_12 = (cmsFloat32Number) ((cmsFloat64Number*) VAR_3)[VAR_14 + VAR_15];

        VAR_13 = FUNC_9(VAR_12 * VAR_16);

        if (VAR_7)
            VAR_13 = FUNC_2(VAR_13);

        VAR_2[VAR_17] = VAR_13;
    }


    if (VAR_9 == 0 && VAR_8) {
        cmsUInt16Number VAR_18 = VAR_2[0];

        FUNC_10(&VAR_2[0], &VAR_2[1], (VAR_5-1) * sizeof(cmsUInt16Number));
        VAR_2[VAR_5-1] = VAR_18;
    }

    if (FUNC_7(VAR_1 -> InputFormat))
        return VAR_3 + sizeof(cmsFloat64Number);
    else
        return VAR_3 + (VAR_5 + VAR_9) * sizeof(cmsFloat64Number);
}
