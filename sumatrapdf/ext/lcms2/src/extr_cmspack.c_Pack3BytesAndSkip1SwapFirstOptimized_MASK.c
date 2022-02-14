
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int * cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;
typedef int _cmsTRANSFORM ;


 int FUNC_0 (int *) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_1(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                                                     register cmsUInt16Number VAR_2[],
                                                     register cmsUInt8Number* VAR_3,
                                                     register cmsUInt32Number VAR_4)
{
    VAR_3++;
    *VAR_3++ = (VAR_2[0] & 0xFFU);
    *VAR_3++ = (VAR_2[1] & 0xFFU);
    *VAR_3++ = (VAR_2[2] & 0xFFU);

    return VAR_3;

    FUNC_0(VAR_1);
    FUNC_0(VAR_4);
}
