
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmstransform_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef struct _cmstransform_struct* cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct _cmstransform_struct*) ;

__attribute__((used)) static
unsigned char* FUNC_2(cmsContext VAR_0, struct _cmstransform_struct* VAR_1,
                              register cmsUInt16Number VAR_2[],
                              register cmsUInt8Number* VAR_3,
                              register cmsUInt32Number VAR_4)
{
    VAR_2[0] = (cmsUInt16Number) FUNC_0((VAR_3[0]) << 8);
    VAR_2[1] = (cmsUInt16Number) FUNC_0(((VAR_3[1] > 127) ? (VAR_3[1] - 128) : (VAR_3[1] + 128)) << 8);
    VAR_2[2] = (cmsUInt16Number) FUNC_0(((VAR_3[2] > 127) ? (VAR_3[2] - 128) : (VAR_3[2] + 128)) << 8);

    return VAR_3 + 3;

    FUNC_1(VAR_4);
    FUNC_1(VAR_1);
}
