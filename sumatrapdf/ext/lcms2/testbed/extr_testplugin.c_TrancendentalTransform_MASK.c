
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmstransform_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsContext ;



__attribute__((used)) static
void FUNC_0(cmsContext VAR_0, struct _cmstransform_struct * VAR_1,
                              const void* VAR_2,
                              void* VAR_3,
                              cmsUInt32Number VAR_4,
                              cmsUInt32Number VAR_5)
{
    cmsUInt32Number VAR_6;

    for (VAR_6=0; VAR_6 < VAR_4; VAR_6++)
    {
        ((cmsUInt8Number*) VAR_3)[VAR_6] = 0x42;
    }

}
