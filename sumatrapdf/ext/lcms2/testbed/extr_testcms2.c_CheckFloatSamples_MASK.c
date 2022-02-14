
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsFloat32Number ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int *,int (*) (int)) ;
 int * FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static
cmsInt32Number FUNC_5(void)
{
    cmsFloat32Number VAR_1[VAR_0];
    int VAR_2;
    cmsToneCurve *VAR_3;
    cmsInt32Number VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        cmsFloat32Number VAR_5 = (cmsFloat32Number)VAR_2 / (VAR_0-1);

        VAR_1[VAR_2] = FUNC_1(VAR_5);
    }

    VAR_3 = FUNC_3(((void*)0), VAR_0, VAR_1);
    VAR_4 = FUNC_2( "Float Samples", VAR_3, FUNC_1);
    FUNC_4(FUNC_0(), VAR_3);

    return VAR_4;
}
