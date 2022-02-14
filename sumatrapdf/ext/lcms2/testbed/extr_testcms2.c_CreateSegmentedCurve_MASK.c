
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsToneCurve ;
typedef int cmsFloat32Number ;
struct TYPE_3__ {int Type; int* Params; float x0; int x1; int nGridPoints; int* SampledPoints; } ;
typedef TYPE_1__ cmsCurveSegment ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,TYPE_1__*) ;

__attribute__((used)) static
cmsToneCurve *FUNC_2(void)
{
    cmsCurveSegment VAR_0[3];
    cmsFloat32Number VAR_1[2] = { 0, 1};

    VAR_0[0].Type = 6;
    VAR_0[0].Params[0] = 1;
    VAR_0[0].Params[1] = 0;
    VAR_0[0].Params[2] = 0;
    VAR_0[0].Params[3] = 0;
    VAR_0[0].x0 = -1E22F;
    VAR_0[0].x1 = 0;

    VAR_0[1].Type = 0;
    VAR_0[1].nGridPoints = 2;
    VAR_0[1].SampledPoints = VAR_1;
    VAR_0[1].x0 = 0;
    VAR_0[1].x1 = 1;

    VAR_0[2].Type = 6;
    VAR_0[2].Params[0] = 1;
    VAR_0[2].Params[1] = 0;
    VAR_0[2].Params[2] = 0;
    VAR_0[2].Params[3] = 0;
    VAR_0[2].x0 = 1;
    VAR_0[2].x1 = 1E22F;

    return FUNC_1(FUNC_0(), 3, VAR_0);
}
