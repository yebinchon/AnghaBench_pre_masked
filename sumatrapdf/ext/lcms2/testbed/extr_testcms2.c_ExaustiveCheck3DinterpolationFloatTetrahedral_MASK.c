
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* LerpFloat ) (int ,double*,double*,TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ Interpolation; } ;
typedef TYPE_2__ cmsInterpParams ;
typedef int cmsInt32Number ;
typedef double cmsFloat32Number ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;
 double VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int,int,int,double*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (char*,double) ;
 int FUNC_5 (int ,double*,double*,TYPE_2__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsInterpParams* VAR_2;
    cmsInt32Number VAR_3, VAR_4, VAR_5;
    cmsFloat32Number VAR_6[3], VAR_7[3];
    cmsFloat32Number VAR_8[] = {

        0, 0, 0,
        0, 0, .25,

        0, .5, 0,
        0, .5, .25,

        1, 0, 0,
        1, 0, .25,

        1, .5, 0,
        1, .5, .25

    };

    VAR_2 = FUNC_2(FUNC_0(), 2, 3, 3, VAR_8, VAR_0);

    VAR_1 = 0.0;
    for (VAR_3=0; VAR_3 < 0xff; VAR_3++)
        for (VAR_4=0; VAR_4 < 0xff; VAR_4++)
            for (VAR_5=0; VAR_5 < 0xff; VAR_5++)
        {

            VAR_6[0] = (cmsFloat32Number) VAR_3 / 255.0F;
            VAR_6[1] = (cmsFloat32Number) VAR_4 / 255.0F;
            VAR_6[2] = (cmsFloat32Number) VAR_5 / 255.0F;


        VAR_2 ->Interpolation.LerpFloat(FUNC_0(), VAR_6, VAR_7, VAR_2);

       if (!FUNC_1("Channel 1", VAR_7[0], VAR_6[0])) goto Error;
       if (!FUNC_1("Channel 2", VAR_7[1], (cmsFloat32Number) VAR_6[1] / 2.F)) goto Error;
       if (!FUNC_1("Channel 3", VAR_7[2], (cmsFloat32Number) VAR_6[2] / 4.F)) goto Error;
     }

    if (VAR_1 > 0) FUNC_4("|Err|<%lf ", VAR_1);
    FUNC_3(FUNC_0(), VAR_2);
    return 1;

Error:
    FUNC_3(FUNC_0(), VAR_2);
    return 0;
}
