
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* XYZ; double* RGB; } ;
typedef TYPE_1__ CAM02COLOR ;



__attribute__((used)) static
CAM02COLOR FUNC_0(CAM02COLOR VAR_0)
{
    VAR_0.XYZ[0] = (VAR_0.RGB[0] * 1.096124) + (VAR_0.RGB[1] * -0.278869) + (VAR_0.RGB[2] * 0.182745);
    VAR_0.XYZ[1] = (VAR_0.RGB[0] * 0.454369) + (VAR_0.RGB[1] * 0.473533) + (VAR_0.RGB[2] * 0.072098);
    VAR_0.XYZ[2] = (VAR_0.RGB[0] * -0.009628) + (VAR_0.RGB[1] * -0.005698) + (VAR_0.RGB[2] * 1.015326);

    return VAR_0;
}
