
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_7__ {TYPE_1__* Segments; } ;
typedef TYPE_2__ cmsToneCurve ;
typedef int cmsIOHANDLER ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_8__ {scalar_t__ Max; scalar_t__ Min; scalar_t__ Gamma; } ;
typedef TYPE_3__ _cmsVCGTGAMMA ;
struct TYPE_6__ {scalar_t__* Params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int ) ;
 double FUNC_4 (int ,TYPE_2__*,double) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_8(cmsContext VAR_4, struct _cms_typehandler_struct* VAR_5, cmsIOHANDLER* VAR_6, void* VAR_7, cmsUInt32Number VAR_8)
{
    cmsToneCurve** VAR_9 = (cmsToneCurve**) VAR_7;
    cmsUInt32Number VAR_10, VAR_11;

    if (FUNC_5(VAR_4, VAR_9[0]) == 5 &&
        FUNC_5(VAR_4, VAR_9[1]) == 5 &&
        FUNC_5(VAR_4, VAR_9[2]) == 5) {

            if (!FUNC_3(VAR_4, VAR_6, VAR_2)) return VAR_0;


            for (VAR_10=0; VAR_10 < 3; VAR_10++) {

                _cmsVCGTGAMMA VAR_12;

                VAR_12.Gamma = VAR_9[VAR_10] ->Segments[0].Params[0];
                VAR_12.Min = VAR_9[VAR_10] ->Segments[0].Params[5];
                VAR_12.Max = FUNC_7(VAR_9[VAR_10] ->Segments[0].Params[1], VAR_12.Gamma) + VAR_12.Min;

                if (!FUNC_1(VAR_4, VAR_6, VAR_12.Gamma)) return VAR_0;
                if (!FUNC_1(VAR_4, VAR_6, VAR_12.Min)) return VAR_0;
                if (!FUNC_1(VAR_4, VAR_6, VAR_12.Max)) return VAR_0;
            }
    }

    else {


        if (!FUNC_3(VAR_4, VAR_6, VAR_3)) return VAR_0;
        if (!FUNC_2(VAR_4, VAR_6, 3)) return VAR_0;
        if (!FUNC_2(VAR_4, VAR_6, 256)) return VAR_0;
        if (!FUNC_2(VAR_4, VAR_6, 2)) return VAR_0;

        for (VAR_10=0; VAR_10 < 3; VAR_10++) {
            for (VAR_11=0; VAR_11 < 256; VAR_11++) {

                cmsFloat32Number VAR_13 = FUNC_4(VAR_4, VAR_9[VAR_10], (cmsFloat32Number) (VAR_11 / 255.0));
                cmsUInt16Number VAR_14 = FUNC_0(VAR_13 * 65535.0);

                if (!FUNC_2(VAR_4, VAR_6, VAR_14)) return VAR_0;
            }
        }
    }

    return VAR_1;

    FUNC_6(VAR_5);
    FUNC_6(VAR_8);
}
