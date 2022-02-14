
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;
typedef int _cmsTRANSFORM ;


 scalar_t__ FUNC_0 (int) ;

cmsUInt8Number* FUNC_1(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                           register cmsUInt16Number VAR_2[],
                           register cmsUInt8Number* VAR_3,
                           register cmsUInt32Number VAR_4)
{

    register cmsUInt16Number VAR_5;
    int VAR_6, VAR_7, VAR_8;

    VAR_6 = (int) FUNC_0(( VAR_2[2] * 31) / 65535.0 + 0.5);
    VAR_7 = (int) FUNC_0(( VAR_2[1] * 63) / 65535.0 + 0.5);
    VAR_8 = (int) FUNC_0(( VAR_2[0] * 31) / 65535.0 + 0.5);


    VAR_5 = (VAR_6 & 31) | (( VAR_7 & 63) << 5) | ((VAR_8 & 31) << 11);


    *(cmsUInt16Number*) VAR_3 = VAR_5;
    return VAR_3 + 2;
}
