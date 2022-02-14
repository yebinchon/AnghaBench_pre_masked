
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsContext ;



__attribute__((used)) static
cmsContext FUNC_0(void)
{
    static cmsUInt32Number VAR_0 = 1;

    return (cmsContext) (void*)(VAR_0++ % 0xff0);
}
