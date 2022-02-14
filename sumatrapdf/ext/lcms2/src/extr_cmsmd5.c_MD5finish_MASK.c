
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
struct TYPE_5__ {int ID8; } ;
typedef TYPE_1__ cmsProfileID ;
typedef scalar_t__ cmsHANDLE ;
typedef int cmsContext ;
struct TYPE_6__ {int* bits; scalar_t__ buf; int * in; } ;
typedef TYPE_2__ _cmsMD5 ;


 int FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static
void FUNC_5(cmsContext VAR_0, cmsProfileID* VAR_1, cmsHANDLE VAR_2)
{
    _cmsMD5* VAR_3 = (_cmsMD5*) VAR_2;
    cmsUInt32Number VAR_4;
    cmsUInt8Number *VAR_5;

    VAR_4 = (VAR_3->bits[0] >> 3) & 0x3F;

    VAR_5 = VAR_3->in + VAR_4;
    *VAR_5++ = 0x80;

    VAR_4 = 64 - 1 - VAR_4;

    if (VAR_4 < 8) {

        FUNC_4(VAR_5, 0, VAR_4);
        FUNC_2(VAR_3->in, 16);
        FUNC_0(VAR_3->buf, (cmsUInt32Number *) VAR_3->in);

        FUNC_4(VAR_3->in, 0, 56);
    } else {
        FUNC_4(VAR_5, 0, VAR_4 - 8);
    }
    FUNC_2(VAR_3->in, 14);

    ((cmsUInt32Number *) VAR_3->in)[14] = VAR_3->bits[0];
    ((cmsUInt32Number *) VAR_3->in)[15] = VAR_3->bits[1];

    FUNC_0(VAR_3->buf, (cmsUInt32Number *) VAR_3->in);

    FUNC_2((cmsUInt8Number *) VAR_3->buf, 4);
    FUNC_3(VAR_1 ->ID8, VAR_3->buf, 16);

    FUNC_1(VAR_0, VAR_3);
}
