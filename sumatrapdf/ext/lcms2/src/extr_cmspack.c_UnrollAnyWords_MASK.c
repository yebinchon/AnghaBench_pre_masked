
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;
struct TYPE_3__ {int InputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_10(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                               register cmsUInt16Number VAR_2[],
                               register cmsUInt8Number* VAR_3,
                               register cmsUInt32Number VAR_4)
{
   cmsUInt32Number VAR_5 = FUNC_2(VAR_1 -> InputFormat);
   cmsUInt32Number VAR_6 = FUNC_4(VAR_1 -> InputFormat);
   cmsUInt32Number VAR_7 = FUNC_3(VAR_1 ->InputFormat);
   cmsUInt32Number VAR_8 = FUNC_6(VAR_1 ->InputFormat);
   cmsUInt32Number VAR_9 = FUNC_7(VAR_1 -> InputFormat);
   cmsUInt32Number VAR_10 = FUNC_5(VAR_1 -> InputFormat);
   cmsUInt32Number VAR_11 = VAR_7 ^ VAR_9;
   cmsUInt32Number VAR_12;

    if (VAR_11) {
        VAR_3 += VAR_10 * sizeof(cmsUInt16Number);
    }

    for (VAR_12=0; VAR_12 < VAR_5; VAR_12++) {

        cmsUInt32Number VAR_13 = VAR_7 ? (VAR_5 - VAR_12 - 1) : VAR_12;
        cmsUInt16Number VAR_14 = *(cmsUInt16Number*) VAR_3;

        if (VAR_6)
            VAR_14 = FUNC_0(VAR_14);

        VAR_2[VAR_13] = VAR_8 ? FUNC_1(VAR_14) : VAR_14;

        VAR_3 += sizeof(cmsUInt16Number);
    }

    if (!VAR_11) {
        VAR_3 += VAR_10 * sizeof(cmsUInt16Number);
    }

    if (VAR_10 == 0 && VAR_9) {

        cmsUInt16Number VAR_15 = VAR_2[0];

        FUNC_9(&VAR_2[0], &VAR_2[1], (VAR_5-1) * sizeof(cmsUInt16Number));
        VAR_2[VAR_5-1] = VAR_15;
    }

    return VAR_3;

    FUNC_8(VAR_4);
}
