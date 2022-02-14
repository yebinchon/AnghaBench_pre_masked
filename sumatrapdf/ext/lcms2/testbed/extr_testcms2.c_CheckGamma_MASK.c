
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,double) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    cmsToneCurve *VAR_3, *VAR_4;
    cmsInt32Number VAR_5;

    switch (VAR_0) {

        case 1:

            VAR_3 = FUNC_1(FUNC_0(), 1.0);
            VAR_5 = FUNC_5(FUNC_0(), VAR_1, VAR_2, VAR_3);
            FUNC_2(FUNC_0(), VAR_3);
            return VAR_5;

        case 2:
            VAR_4 = (cmsToneCurve *) FUNC_4(FUNC_0(), VAR_1, VAR_2);
            if (VAR_4 == ((void*)0)) return 0;
            return FUNC_3(FUNC_0(), VAR_4);

        default:
            return 0;
    }
}
