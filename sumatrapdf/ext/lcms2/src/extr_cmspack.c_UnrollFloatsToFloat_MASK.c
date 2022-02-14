
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsFloat32Number ;
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
 int FUNC_8 (int*,int*,int) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_9(cmsContext VAR_0, _cmsTRANSFORM* VAR_1,
                                    cmsFloat32Number VAR_2[],
                                    cmsUInt8Number* VAR_3,
                                    cmsUInt32Number VAR_4)
{

    cmsUInt32Number VAR_5 = FUNC_2(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_6 = FUNC_3(VAR_1 ->InputFormat);
    cmsUInt32Number VAR_7 = FUNC_5(VAR_1 ->InputFormat);
    cmsUInt32Number VAR_8 = FUNC_7(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_9 = FUNC_4(VAR_1 -> InputFormat);
    cmsUInt32Number VAR_10 = VAR_6 ^ VAR_8;
    cmsUInt32Number VAR_11 = FUNC_6(VAR_1 -> InputFormat);
    cmsFloat32Number VAR_12;
    cmsUInt32Number VAR_13, VAR_14 = 0;
    cmsFloat32Number VAR_15 = FUNC_0(VAR_1 ->InputFormat) ? 100.0F : 1.0F;

    VAR_4 /= FUNC_1(VAR_1->InputFormat);

    if (VAR_10)
            VAR_14 = VAR_9;

    for (VAR_13=0; VAR_13 < VAR_5; VAR_13++) {

        cmsUInt32Number VAR_16 = VAR_6 ? (VAR_5 - VAR_13 - 1) : VAR_13;

        if (VAR_11)
            VAR_12 = (cmsFloat32Number) ((cmsFloat32Number*) VAR_3)[(VAR_13 + VAR_14) * VAR_4];
        else
            VAR_12 = (cmsFloat32Number) ((cmsFloat32Number*) VAR_3)[VAR_13 + VAR_14];

        VAR_12 /= VAR_15;

        VAR_2[VAR_16] = VAR_7 ? 1 - VAR_12 : VAR_12;
    }


    if (VAR_9 == 0 && VAR_8) {
        cmsFloat32Number VAR_17 = VAR_2[0];

        FUNC_8(&VAR_2[0], &VAR_2[1], (VAR_5-1) * sizeof(cmsFloat32Number));
        VAR_2[VAR_5-1] = VAR_17;
    }

    if (FUNC_6(VAR_1 -> InputFormat))
        return VAR_3 + sizeof(cmsFloat32Number);
    else
        return VAR_3 + (VAR_5 + VAR_9) * sizeof(cmsFloat32Number);
}
