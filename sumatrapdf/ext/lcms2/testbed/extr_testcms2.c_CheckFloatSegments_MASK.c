
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsFloat32Number ;
struct TYPE_3__ {float x0; float x1; int Type; float* Params; int nGridPoints; int* SampledPoints; } ;
typedef TYPE_1__ cmsCurveSegment ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int (*) (int)) ;
 int * FUNC_3 (int ,int,TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static
cmsInt32Number FUNC_5(void)
{
    cmsInt32Number VAR_1 = 1;
    int VAR_2;
    cmsToneCurve *VAR_3;

    cmsFloat32Number VAR_4[ VAR_0];


    cmsCurveSegment VAR_5[3];


    VAR_5[0].x0 = -1e22f;
    VAR_5[0].x1 = 0.1f;
    VAR_5[0].Type = 6;
    VAR_5[0].Params[0] = 1.0f;
    VAR_5[0].Params[1] = 0.9f;
    VAR_5[0].Params[2] = 0.0f;
    VAR_5[0].Params[3] = 0.1f;
    VAR_5[0].Params[4] = 0.0f;


    VAR_5[1].x0 = 0.1f;
    VAR_5[1].x1 = 0.9f;
    VAR_5[1].Type = 0;

    VAR_5[1].nGridPoints = VAR_0;
    VAR_5[1].SampledPoints = VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        cmsFloat32Number VAR_6 = (cmsFloat32Number) (0.1 + ((cmsFloat32Number)VAR_2 / (VAR_0-1)) * (0.9 - 0.1));
        VAR_4[VAR_2] = FUNC_1(VAR_6);
    }


    VAR_5[2].x0 = 0.9f;
    VAR_5[2].x1 = 1e22f;
    VAR_5[2].Type = 6;

    VAR_5[2].Params[0] = 1.0f;
    VAR_5[2].Params[1] = 0.9f;
    VAR_5[2].Params[2] = 0.0f;
    VAR_5[2].Params[3] = 0.1f;
    VAR_5[2].Params[4] = 0.0f;

    VAR_3 = FUNC_3(0, 3, VAR_5);

    VAR_1 = FUNC_2( "Float Segmented Curve", VAR_3, FUNC_1);

    FUNC_4(FUNC_0(), VAR_3);

    return VAR_1;
}
