
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef float cmsFloat64Number ;


 float FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(void* VAR_0, const void* VAR_1)
{
    *(cmsFloat64Number*)VAR_0 = (FUNC_0(*(cmsUInt16Number*)VAR_1)) / 65535.0f;
}
