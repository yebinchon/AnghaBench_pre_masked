
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_4__ {int nSegments; TYPE_2__* Segments; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat32Number ;
struct TYPE_5__ {int Type; int nGridPoints; scalar_t__* Params; int * SampledPoints; int x1; } ;
typedef TYPE_2__ cmsCurveSegment ;
typedef int cmsContext ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_5, cmsIOHANDLER* VAR_6, cmsToneCurve* VAR_7)
{
    cmsUInt32Number VAR_8, VAR_9;
    cmsCurveSegment* VAR_10 = VAR_7 ->Segments;
    cmsUInt32Number VAR_11 = VAR_7 ->nSegments;

    if (!FUNC_2(VAR_5, VAR_6, VAR_4)) goto Error;
    if (!FUNC_2(VAR_5, VAR_6, 0)) goto Error;
    if (!FUNC_1(VAR_5, VAR_6, (cmsUInt16Number) VAR_11)) goto Error;
    if (!FUNC_1(VAR_5, VAR_6, 0)) goto Error;


    for (VAR_8=0; VAR_8 < VAR_11 - 1; VAR_8++) {
        if (!FUNC_0(VAR_5, VAR_6, VAR_10[VAR_8].x1)) goto Error;
    }


    for (VAR_8=0; VAR_8 < VAR_7 ->nSegments; VAR_8++) {

        cmsCurveSegment* VAR_12 = VAR_10 + VAR_8;

        if (VAR_12 -> Type == 0) {


            if (!FUNC_2(VAR_5, VAR_6, (cmsUInt32Number) VAR_3)) goto Error;
            if (!FUNC_2(VAR_5, VAR_6, 0)) goto Error;
            if (!FUNC_2(VAR_5, VAR_6, VAR_12 -> nGridPoints)) goto Error;

            for (VAR_9=0; VAR_9 < VAR_7 ->Segments[VAR_8].nGridPoints; VAR_9++) {
                if (!FUNC_0(VAR_5, VAR_6, VAR_12 -> SampledPoints[VAR_9])) goto Error;
            }

        }
        else {
            int VAR_13;
            cmsUInt32Number VAR_14[] = { 4, 5, 5 };


            if (!FUNC_2(VAR_5, VAR_6, (cmsUInt32Number) VAR_2)) goto Error;
            if (!FUNC_2(VAR_5, VAR_6, 0)) goto Error;


            VAR_13 = VAR_12 ->Type - 6;
            if (VAR_13 > 2 || VAR_13 < 0) goto Error;

            if (!FUNC_1(VAR_5, VAR_6, (cmsUInt16Number) VAR_13)) goto Error;
            if (!FUNC_1(VAR_5, VAR_6, 0)) goto Error;

            for (VAR_9=0; VAR_9 < VAR_14[VAR_13]; VAR_9++) {
                if (!FUNC_0(VAR_5, VAR_6, (cmsFloat32Number) VAR_12 ->Params[VAR_9])) goto Error;
            }
        }



    }

    return VAR_1;

Error:
    return VAR_0;
}
