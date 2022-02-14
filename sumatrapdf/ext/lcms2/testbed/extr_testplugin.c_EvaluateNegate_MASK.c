
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsStage ;
typedef scalar_t__ cmsFloat32Number ;
typedef int cmsContext ;



__attribute__((used)) static
void FUNC_0(cmsContext VAR_0, const cmsFloat32Number VAR_1[],
                     cmsFloat32Number VAR_2[],
                     const cmsStage *VAR_3)
{
    VAR_2[0] = 1.0f - VAR_1[0];
    VAR_2[1] = 1.0f - VAR_1[1];
    VAR_2[2] = 1.0f - VAR_1[2];
}
