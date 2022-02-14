
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_7__ {double* XYZ; double* RGB; } ;
struct TYPE_8__ {double D; TYPE_1__ adoptedWhite; } ;
typedef TYPE_2__ cmsCIECAM02 ;
struct TYPE_9__ {double* RGB; double* RGBc; } ;
typedef TYPE_3__ CAM02COLOR ;



__attribute__((used)) static
CAM02COLOR FUNC_0(CAM02COLOR VAR_0, cmsCIECAM02* VAR_1)
{
    cmsUInt32Number VAR_2;
    for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
        VAR_0.RGB[VAR_2] = VAR_0.RGBc[VAR_2] /
            ((VAR_1->adoptedWhite.XYZ[1] * VAR_1->D / VAR_1->adoptedWhite.RGB[VAR_2]) + 1.0 - VAR_1->D);
    }
    return VAR_0;
}
