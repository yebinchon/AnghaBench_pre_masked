
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_2__ {int sRGB2Lab; } ;
typedef TYPE_1__ FakeCMYKParams ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int*,double*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsContext VAR_0, register const cmsUInt16Number VAR_1[], register cmsUInt16Number VAR_2[], register void* VAR_3)
{
    FakeCMYKParams* VAR_4 = (FakeCMYKParams*) VAR_3;
    cmsFloat64Number VAR_5, VAR_6, VAR_7, VAR_8, VAR_9[3];

    VAR_5 = VAR_1[0] / 65535.0;
    VAR_6 = VAR_1[1] / 65535.0;
    VAR_7 = VAR_1[2] / 65535.0;
    VAR_8 = VAR_1[3] / 65535.0;

    if (VAR_8 == 0) {

        VAR_9[0] = FUNC_0(1 - VAR_5);
        VAR_9[1] = FUNC_0(1 - VAR_6);
        VAR_9[2] = FUNC_0(1 - VAR_7);
    }
    else
        if (VAR_8 == 1) {

            VAR_9[0] = VAR_9[1] = VAR_9[2] = 0;
        }
        else {

            VAR_9[0] = FUNC_0((1 - VAR_5) * (1 - VAR_8));
            VAR_9[1] = FUNC_0((1 - VAR_6) * (1 - VAR_8));
            VAR_9[2] = FUNC_0((1 - VAR_7) * (1 - VAR_8));
        }

        FUNC_2(FUNC_1(), VAR_4 ->sRGB2Lab, VAR_9, VAR_2, 1);
        return 1;
}
