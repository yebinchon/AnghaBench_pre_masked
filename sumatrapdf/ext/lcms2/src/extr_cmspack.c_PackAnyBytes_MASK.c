
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;
struct TYPE_3__ {int OutputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int *,scalar_t__) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_9(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                             register cmsUInt16Number VAR_2[],
                             register cmsUInt8Number* VAR_3,
                             register cmsUInt32Number VAR_4)
{
    cmsUInt32Number VAR_5 = FUNC_2(VAR_1 -> OutputFormat);
    cmsUInt32Number VAR_6 = FUNC_3(VAR_1 ->OutputFormat);
    cmsUInt32Number VAR_7 = FUNC_5(VAR_1 ->OutputFormat);
    cmsUInt32Number VAR_8 = FUNC_4(VAR_1 -> OutputFormat);
    cmsUInt32Number VAR_9 = FUNC_6(VAR_1 -> OutputFormat);
    cmsUInt32Number VAR_10 = VAR_6 ^ VAR_9;
    cmsUInt8Number* VAR_11;
    cmsUInt8Number VAR_12 = 0;
    cmsUInt32Number VAR_13;

    VAR_11 = VAR_3;

    if (VAR_10) {
        VAR_3 += VAR_8;
    }

    for (VAR_13=0; VAR_13 < VAR_5; VAR_13++) {

        cmsUInt32Number VAR_14 = VAR_6 ? (VAR_5 - VAR_13 - 1) : VAR_13;

        VAR_12 = FUNC_0(VAR_2[VAR_14]);

        if (VAR_7)
            VAR_12 = FUNC_1(VAR_12);

        *VAR_3++ = VAR_12;
    }

    if (!VAR_10) {
        VAR_3 += VAR_8;
    }

    if (VAR_8 == 0 && VAR_9) {

        FUNC_8(VAR_11 + 1, VAR_11, VAR_5-1);
        *VAR_11 = VAR_12;
    }


    return VAR_3;

    FUNC_7(VAR_4);
}
