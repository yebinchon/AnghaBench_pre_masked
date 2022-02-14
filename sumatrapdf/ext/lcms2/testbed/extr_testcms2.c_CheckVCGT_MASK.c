
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,double,double) ;
 int * FUNC_2 (int ,double) ;
 int FUNC_3 (int ,int *,double) ;
 int FUNC_4 (int ,int **) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ,int ,int **) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(cmsInt32Number VAR_1, cmsHPROFILE VAR_2)
{
    cmsToneCurve* VAR_3[3];
    cmsToneCurve** VAR_4;

     switch (VAR_1) {

        case 1:
            VAR_3[0] = FUNC_2(FUNC_0(), 1.1);
            VAR_3[1] = FUNC_2(FUNC_0(), 2.2);
            VAR_3[2] = FUNC_2(FUNC_0(), 3.4);

            if (!FUNC_6(FUNC_0(), VAR_2, VAR_0, VAR_3)) return 0;

            FUNC_4(FUNC_0(), VAR_3);
            return 1;


        case 2:

             VAR_4 = (cmsToneCurve **) FUNC_5(FUNC_0(), VAR_2, VAR_0);
             if (VAR_4 == ((void*)0)) return 0;
             if (!FUNC_1("VCGT R", FUNC_3(FUNC_0(), VAR_4[0], 0.01), 1.1, 0.001)) return 0;
             if (!FUNC_1("VCGT G", FUNC_3(FUNC_0(), VAR_4[1], 0.01), 2.2, 0.001)) return 0;
             if (!FUNC_1("VCGT B", FUNC_3(FUNC_0(), VAR_4[2], 0.01), 3.4, 0.001)) return 0;
             return 1;

        default:;
    }

    return 0;
}
