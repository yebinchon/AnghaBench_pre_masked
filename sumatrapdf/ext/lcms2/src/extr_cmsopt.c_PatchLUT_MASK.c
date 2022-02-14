
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
struct TYPE_7__ {scalar_t__ Type; scalar_t__ Data; } ;
typedef TYPE_2__ cmsStage ;
struct TYPE_8__ {double* Domain; scalar_t__* opta; } ;
typedef TYPE_3__ cmsInterpParams ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_6__ {scalar_t__* T; } ;
struct TYPE_9__ {TYPE_1__ Tab; TYPE_3__* Params; } ;
typedef TYPE_4__ _cmsStageCLutData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (double) ;

__attribute__((used)) static
cmsBool FUNC_2(cmsContext VAR_4, cmsStage* VAR_5, cmsUInt16Number VAR_6[], cmsUInt16Number VAR_7[],
                  cmsUInt32Number VAR_8, cmsUInt32Number VAR_9)
{
    _cmsStageCLutData* VAR_10 = (_cmsStageCLutData*) VAR_5 ->Data;
    cmsInterpParams* VAR_11 = VAR_10 ->Params;
    cmsFloat64Number VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21;

    if (VAR_5 -> Type != VAR_3) {
        FUNC_0(VAR_4, VAR_2, "(internal) Attempt to PatchLUT on non-lut stage");
        return VAR_0;
    }

    if (VAR_9 == 4) {

        VAR_12 = ((cmsFloat64Number) VAR_6[0] * (VAR_11->Domain[0])) / 65535.0;
        VAR_13 = ((cmsFloat64Number) VAR_6[1] * (VAR_11->Domain[1])) / 65535.0;
        VAR_14 = ((cmsFloat64Number) VAR_6[2] * (VAR_11->Domain[2])) / 65535.0;
        VAR_15 = ((cmsFloat64Number) VAR_6[3] * (VAR_11->Domain[3])) / 65535.0;

        VAR_16 = (int) FUNC_1(VAR_12);
        VAR_17 = (int) FUNC_1(VAR_13);
        VAR_18 = (int) FUNC_1(VAR_14);
        VAR_19 = (int) FUNC_1(VAR_15);

        if (((VAR_12 - VAR_16) != 0) ||
            ((VAR_13 - VAR_17) != 0) ||
            ((VAR_14 - VAR_18) != 0) ||
            ((VAR_15 - VAR_19) != 0)) return VAR_0;

        VAR_21 = (int) VAR_11 -> opta[3] * VAR_16 +
                (int) VAR_11 -> opta[2] * VAR_17 +
                (int) VAR_11 -> opta[1] * VAR_18 +
                (int) VAR_11 -> opta[0] * VAR_19;
    }
    else
        if (VAR_9 == 3) {

            VAR_12 = ((cmsFloat64Number) VAR_6[0] * (VAR_11->Domain[0])) / 65535.0;
            VAR_13 = ((cmsFloat64Number) VAR_6[1] * (VAR_11->Domain[1])) / 65535.0;
            VAR_14 = ((cmsFloat64Number) VAR_6[2] * (VAR_11->Domain[2])) / 65535.0;

            VAR_16 = (int) FUNC_1(VAR_12);
            VAR_17 = (int) FUNC_1(VAR_13);
            VAR_18 = (int) FUNC_1(VAR_14);

            if (((VAR_12 - VAR_16) != 0) ||
                ((VAR_13 - VAR_17) != 0) ||
                ((VAR_14 - VAR_18) != 0)) return VAR_0;

            VAR_21 = (int) VAR_11 -> opta[2] * VAR_16 +
                    (int) VAR_11 -> opta[1] * VAR_17 +
                    (int) VAR_11 -> opta[0] * VAR_18;
        }
        else
            if (VAR_9 == 1) {

                VAR_12 = ((cmsFloat64Number) VAR_6[0] * (VAR_11->Domain[0])) / 65535.0;

                VAR_16 = (int) FUNC_1(VAR_12);

                if (((VAR_12 - VAR_16) != 0)) return VAR_0;

                VAR_21 = (int) VAR_11 -> opta[0] * VAR_16;
            }
            else {
                FUNC_0(VAR_4, VAR_2, "(internal) %d Channels are not supported on PatchLUT", VAR_9);
                return VAR_0;
            }

    for (VAR_20 = 0; VAR_20 < (int) VAR_8; VAR_20++)
        VAR_10->Tab.T[VAR_21 + VAR_20] = VAR_7[VAR_20];

    return VAR_1;
}
