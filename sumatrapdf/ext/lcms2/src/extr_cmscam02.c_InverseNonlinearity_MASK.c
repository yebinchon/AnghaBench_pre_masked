
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef double cmsFloat64Number ;
struct TYPE_6__ {double FL; } ;
typedef TYPE_1__ cmsCIECAM02 ;
struct TYPE_7__ {double* RGBpa; double* RGBp; } ;
typedef TYPE_2__ CAM02COLOR ;


 double FUNC_0 (double) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static
CAM02COLOR FUNC_2(CAM02COLOR VAR_0, cmsCIECAM02* VAR_1)
{
    cmsUInt32Number VAR_2;
    cmsFloat64Number VAR_3;

    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        if ((VAR_0.RGBpa[VAR_2] - 0.1) < 0) VAR_3 = -1;
        else VAR_3 = 1;
        VAR_0.RGBp[VAR_2] = VAR_3 * (100.0 / VAR_1->FL) *
            FUNC_1(((27.13 * FUNC_0(VAR_0.RGBpa[VAR_2] - 0.1)) /
            (400.0 - FUNC_0(VAR_0.RGBpa[VAR_2] - 0.1))),
            (1.0 / 0.42));
    }

    return VAR_0;
}
