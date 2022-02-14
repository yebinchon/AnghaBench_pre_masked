
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef scalar_t__ cmsHANDLE ;
struct TYPE_2__ {int* bits; int * in; int buf; } ;
typedef TYPE_1__ _cmsMD5 ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static
void FUNC_3(cmsHANDLE VAR_0, cmsUInt8Number* VAR_1, cmsUInt32Number VAR_2)
{
    _cmsMD5* VAR_3 = (_cmsMD5*) VAR_0;
    cmsUInt32Number VAR_4;

    VAR_4 = VAR_3->bits[0];
    if ((VAR_3->bits[0] = VAR_4 + (VAR_2 << 3)) < VAR_4)
        VAR_3->bits[1]++;

    VAR_3->bits[1] += VAR_2 >> 29;

    VAR_4 = (VAR_4 >> 3) & 0x3f;

    if (VAR_4) {

        cmsUInt8Number *VAR_5 = (cmsUInt8Number *) VAR_3->in + VAR_4;

        VAR_4 = 64 - VAR_4;
        if (VAR_2 < VAR_4) {
            FUNC_2(VAR_5, VAR_1, VAR_2);
            return;
        }

        FUNC_2(VAR_5, VAR_1, VAR_4);
        FUNC_1(VAR_3->in, 16);

        FUNC_0(VAR_3->buf, (cmsUInt32Number *) VAR_3->in);
        VAR_1 += VAR_4;
        VAR_2 -= VAR_4;
    }

    while (VAR_2 >= 64) {
        FUNC_2(VAR_3->in, VAR_1, 64);
        FUNC_1(VAR_3->in, 16);
        FUNC_0(VAR_3->buf, (cmsUInt32Number *) VAR_3->in);
        VAR_1 += 64;
        VAR_2 -= 64;
    }

    FUNC_2(VAR_3->in, VAR_1, VAR_2);
}
