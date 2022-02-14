
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsTagSignature ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int,int **) ;
 int FUNC_12 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_13(cmsInt32Number VAR_2, cmsHPROFILE VAR_3, cmsTagSignature VAR_4)
{
    cmsPipeline* VAR_5, *VAR_6;
    cmsToneCurve* VAR_7[3];
    cmsInt32Number VAR_8;

    switch (VAR_2) {

        case 1:

            VAR_5 = FUNC_7(FUNC_3(), 3, 3);

            FUNC_9(FUNC_3(), VAR_5, VAR_0, FUNC_4(FUNC_3()));
            FUNC_9(FUNC_3(), VAR_5, VAR_1, FUNC_5(FUNC_3()));
            FUNC_0(VAR_5);

            VAR_7[0] = VAR_7[1] = VAR_7[2] = FUNC_2();
            FUNC_9(FUNC_3(), VAR_5, VAR_1, FUNC_11(FUNC_3(), 3, VAR_7));
            FUNC_6(FUNC_3(), VAR_7[0]);

            VAR_8 = FUNC_12(FUNC_3(), VAR_3, VAR_4, VAR_5);
            FUNC_8(FUNC_3(), VAR_5);
            return VAR_8;

        case 2:
            VAR_6 = (cmsPipeline *) FUNC_10(FUNC_3(), VAR_3, VAR_4);
            if (VAR_6 == ((void*)0)) return 0;
            return FUNC_1(VAR_6);

        default:
            return 0;
    }
}
