
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;
typedef float cmsFloat32Number ;


 int FUNC_0 () ;
 double FUNC_1 (double) ;
 int * FUNC_2 (int *,int,double*) ;
 double FUNC_3 (int ,int *,float) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (double) ;
 double FUNC_6 (double,double) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(void)
{
    cmsFloat64Number VAR_0[7];
    cmsToneCurve* VAR_1;
    int VAR_2;

    VAR_0[0] = 0.45;
    VAR_0[1] = FUNC_6(1.099, 1.0 / 0.45);
    VAR_0[2] = 0.0;
    VAR_0[3] = 4.5;
    VAR_0[4] = 0.018;
    VAR_0[5] = -0.099;
    VAR_0[6] = 0.0;

    VAR_1 = FUNC_2 (((void*)0), 5, VAR_0);


    for (VAR_2=0; VAR_2 < 256; VAR_2++)
    {
        cmsFloat32Number VAR_3 = (cmsFloat32Number) VAR_2 / 255.0F;
        cmsUInt16Number VAR_4 = (cmsUInt16Number) FUNC_5(255.0 * FUNC_3(FUNC_0(), VAR_1, VAR_3) + 0.5);
        cmsUInt16Number VAR_5 = (cmsUInt16Number) FUNC_5(255.0*FUNC_1((double) VAR_2 / 255.0) + 0.5);

        if (VAR_4 != VAR_5)
        {
            FUNC_4(FUNC_0(), VAR_1);
            return 0;
        }
    }

    FUNC_4(FUNC_0(), VAR_1);
    return 1;
}
