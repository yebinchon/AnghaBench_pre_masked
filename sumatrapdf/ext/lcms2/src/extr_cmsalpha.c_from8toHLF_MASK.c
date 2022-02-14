
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float cmsUInt8Number ;
typedef int cmsUInt16Number ;
typedef float cmsFloat32Number ;


 int FUNC_0 (float) ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static
void FUNC_2(void* VAR_0, const void* VAR_1)
{

       cmsFloat32Number VAR_2 = (*(cmsUInt8Number*)VAR_1) / 255.0f;
       *(cmsUInt16Number*)VAR_0 = FUNC_0(VAR_2);




}
