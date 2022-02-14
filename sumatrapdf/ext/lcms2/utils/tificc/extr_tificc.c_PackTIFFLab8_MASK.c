
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmstransform_struct {int dummy; } ;
typedef unsigned char cmsUInt8Number ;
typedef struct _cmstransform_struct* cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct _cmstransform_struct*) ;

__attribute__((used)) static
unsigned char* FUNC_2(cmsContext VAR_0, struct _cmstransform_struct* VAR_1,
                            register cmsUInt16Number VAR_2[],
                            register cmsUInt8Number* VAR_3,
                            register cmsUInt32Number VAR_4)
{
    int VAR_5, VAR_6;

    *VAR_3++ = (cmsUInt8Number) (FUNC_0(VAR_2[0] + 0x0080) >> 8);

    VAR_5 = (FUNC_0(VAR_2[1]) + 0x0080) >> 8;
    VAR_6 = (FUNC_0(VAR_2[2]) + 0x0080) >> 8;

    *VAR_3++ = (cmsUInt8Number) ((VAR_5 < 128) ? (VAR_5 + 128) : (VAR_5 - 128));
    *VAR_3++ = (cmsUInt8Number) ((VAR_6 < 128) ? (VAR_6 + 128) : (VAR_6 - 128));

    return VAR_3;

    FUNC_1(VAR_4);
    FUNC_1(VAR_1);
}
