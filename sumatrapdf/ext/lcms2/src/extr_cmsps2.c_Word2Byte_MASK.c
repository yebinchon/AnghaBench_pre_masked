
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef double cmsFloat64Number ;


 int FUNC_0 (double) ;

__attribute__((used)) static
cmsUInt8Number FUNC_1(cmsUInt16Number VAR_0)
{
    return (cmsUInt8Number) FUNC_0((cmsFloat64Number) VAR_0 / 257.0 + 0.5);
}
