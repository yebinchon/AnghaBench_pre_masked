
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmstransform_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;


 double FUNC_0 (int) ;

cmsUInt8Number* FUNC_1(cmsContext VAR_0, register struct _cmstransform_struct* VAR_1,
                            register cmsUInt16Number VAR_2[],
                            register cmsUInt8Number* VAR_3,
                            register cmsUInt32Number VAR_4)
{
    cmsUInt16Number VAR_5 = *(cmsUInt16Number*) VAR_3;

    double VAR_6 = FUNC_0(((double) (VAR_5 & 31) * 65535.0) / 31.0 + 0.5);
    double VAR_7 = FUNC_0((((VAR_5 >> 5) & 63) * 65535.0) / 63.0 + 0.5);
    double VAR_8 = FUNC_0((((VAR_5 >> 11) & 31) * 65535.0) / 31.0 + 0.5);

    VAR_2[2] = (cmsUInt16Number) VAR_6;
    VAR_2[1] = (cmsUInt16Number) VAR_7;
    VAR_2[0] = (cmsUInt16Number) VAR_8;

    return VAR_3 + 2;
}
