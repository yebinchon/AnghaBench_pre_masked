
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cms_interp_struc {int dummy; } ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsContext ;



__attribute__((used)) static
void FUNC_0(cmsContext VAR_0, register const cmsUInt16Number VAR_1[],
              register cmsUInt16Number VAR_2[],
              register const struct _cms_interp_struc* VAR_3)
{
       VAR_2[0] = 0xFFFF - VAR_1[2];
       VAR_2[1] = 0xFFFF - VAR_1[1];
       VAR_2[2] = 0xFFFF - VAR_1[0];
}
