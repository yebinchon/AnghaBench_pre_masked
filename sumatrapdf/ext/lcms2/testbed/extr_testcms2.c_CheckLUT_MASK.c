
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_9(cmsInt32Number VAR_2, cmsHPROFILE VAR_3, cmsTagSignature VAR_4)
{
    cmsPipeline* VAR_5, *VAR_6;
    cmsInt32Number VAR_7;


    switch (VAR_2) {

        case 1:

            VAR_5 = FUNC_4(FUNC_1(), 3, 3);
            if (VAR_5 == ((void*)0)) return 0;


            FUNC_6(FUNC_1(), VAR_5, VAR_0, FUNC_3(FUNC_1(), 3));
            FUNC_6(FUNC_1(), VAR_5, VAR_1, FUNC_2(FUNC_1(), 3));
            FUNC_6(FUNC_1(), VAR_5, VAR_1, FUNC_3(FUNC_1(), 3));

            VAR_7 = FUNC_8(FUNC_1(), VAR_3, VAR_4, VAR_5);
            FUNC_5(FUNC_1(), VAR_5);
            return VAR_7;

        case 2:
            VAR_6 = (cmsPipeline *) FUNC_7(FUNC_1(), VAR_3, VAR_4);
            if (VAR_6 == ((void*)0)) return 0;


            return FUNC_0(VAR_6);

        default:
            return 0;
    }
}
