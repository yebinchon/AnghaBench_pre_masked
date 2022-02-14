
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cmstransform_struct {int dummy; } ;
typedef unsigned char cmsUInt8Number ;
typedef struct _cmstransform_struct* cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct _cmstransform_struct*) ;

__attribute__((used)) static
unsigned char* FUNC_2(cmsContext VAR_0, struct _cmstransform_struct* VAR_1,
                              register cmsUInt16Number VAR_2[],
                              register cmsUInt8Number* VAR_3,
                              register cmsUInt32Number VAR_4 )
{
    cmsUInt16Number* VAR_5 = (cmsUInt16Number*) VAR_3;

    VAR_2[0] = (cmsUInt16Number) FUNC_0(VAR_5[0]);
    VAR_2[1] = (cmsUInt16Number) FUNC_0(((VAR_5[1] > 0x7f00) ? (VAR_5[1] - 0x8000) : (VAR_5[1] + 0x8000)) );
    VAR_2[2] = (cmsUInt16Number) FUNC_0(((VAR_5[2] > 0x7f00) ? (VAR_5[2] - 0x8000) : (VAR_5[2] + 0x8000)) );

    return VAR_3 + 3 * sizeof(cmsUInt16Number);

    FUNC_1(VAR_4);
    FUNC_1(VAR_1);
}
