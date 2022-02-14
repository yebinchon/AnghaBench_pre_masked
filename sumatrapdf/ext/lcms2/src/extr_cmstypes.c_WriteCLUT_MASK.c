
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int gridPoints ;
typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
struct TYPE_14__ {scalar_t__ Data; } ;
typedef TYPE_3__ cmsStage ;
struct TYPE_15__ {int (* Write ) (int ,TYPE_4__*,int,int*) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_13__ {int * T; } ;
struct TYPE_16__ {size_t nEntries; TYPE_2__ Tab; TYPE_1__* Params; scalar_t__ HasFloatValues; } ;
typedef TYPE_5__ _cmsStageCLutData ;
struct TYPE_12__ {scalar_t__* nSamples; scalar_t__ nInputs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,size_t,int *) ;
 int FUNC_3 (int ,TYPE_4__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,char*,...) ;
 int FUNC_5 (struct _cms_typehandler_struct*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,TYPE_4__*,int,int*) ;

__attribute__((used)) static
cmsBool FUNC_8(cmsContext VAR_5, struct _cms_typehandler_struct* VAR_6, cmsIOHANDLER* VAR_7, cmsUInt8Number VAR_8, cmsStage* VAR_9)
{
    cmsUInt8Number VAR_10[VAR_4];
    cmsUInt32Number VAR_11;
    _cmsStageCLutData* VAR_12 = ( _cmsStageCLutData*) VAR_9 -> Data;
    FUNC_5(VAR_6);

    if (VAR_12 ->HasFloatValues) {
         FUNC_4(VAR_5, VAR_2, "Cannot save floating point data, CLUT are 8 or 16 bit only");
         return VAR_0;
    }

    FUNC_6(VAR_10, 0, sizeof(VAR_10));
    for (VAR_11=0; VAR_11 < (cmsUInt32Number) VAR_12 ->Params ->nInputs; VAR_11++)
        VAR_10[VAR_11] = (cmsUInt8Number) VAR_12 ->Params ->nSamples[VAR_11];

    if (!VAR_7 -> Write(VAR_5, VAR_7, VAR_4*sizeof(cmsUInt8Number), VAR_10)) return VAR_0;

    if (!FUNC_3(VAR_5, VAR_7, (cmsUInt8Number) VAR_8)) return VAR_0;
    if (!FUNC_3(VAR_5, VAR_7, 0)) return VAR_0;
    if (!FUNC_3(VAR_5, VAR_7, 0)) return VAR_0;
    if (!FUNC_3(VAR_5, VAR_7, 0)) return VAR_0;


    if (VAR_8 == 1) {

        for (VAR_11=0; VAR_11 < VAR_12->nEntries; VAR_11++) {

            if (!FUNC_3(VAR_5, VAR_7, FUNC_0(VAR_12->Tab.T[VAR_11]))) return VAR_0;
        }
    }
    else
        if (VAR_8 == 2) {

            if (!FUNC_2(VAR_5, VAR_7, VAR_12->nEntries, VAR_12 ->Tab.T)) return VAR_0;
        }
        else {
             FUNC_4(VAR_5, VAR_3, "Unknown precision of '%d'", VAR_8);
            return VAR_0;
        }

    if (!FUNC_1(VAR_5, VAR_7)) return VAR_0;

    return VAR_1;
}
