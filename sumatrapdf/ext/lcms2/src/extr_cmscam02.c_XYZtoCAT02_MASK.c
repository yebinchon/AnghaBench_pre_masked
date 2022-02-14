
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double* RGB; double* XYZ; } ;
typedef TYPE_1__ CAM02COLOR ;



__attribute__((used)) static
CAM02COLOR FUNC_0(CAM02COLOR VAR_0)
{
    VAR_0.RGB[0] = (VAR_0.XYZ[0] * 0.7328) + (VAR_0.XYZ[1] * 0.4296) + (VAR_0.XYZ[2] * -0.1624);
    VAR_0.RGB[1] = (VAR_0.XYZ[0] * -0.7036) + (VAR_0.XYZ[1] * 1.6975) + (VAR_0.XYZ[2] * 0.0061);
    VAR_0.RGB[2] = (VAR_0.XYZ[0] * 0.0030) + (VAR_0.XYZ[1] * 0.0136) + (VAR_0.XYZ[2] * 0.9834);

    return VAR_0;
}
