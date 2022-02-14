
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef float cmsFloat32Number ;


 int FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float) ;
 int FUNC_3 (void const*) ;

__attribute__((used)) static
void FUNC_4(void* VAR_0, const void* VAR_1)
{

    cmsFloat32Number VAR_2 = FUNC_1(*(cmsUInt16Number*)VAR_1);
    cmsUInt16Number VAR_3 = FUNC_2(VAR_2 * 65535.0f);
    *(cmsUInt16Number*)VAR_0 = FUNC_0(VAR_3);




}
