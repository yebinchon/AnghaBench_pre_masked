
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;
typedef double cmsFloat64Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,double*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsInt32Number VAR_0, cmsHPROFILE VAR_1, cmsTagSignature VAR_2)
{
    cmsFloat64Number *VAR_3;
    cmsFloat64Number VAR_4[] = { 0, .1, .2, .3, .4, .5, .6, .7, .8 };
    cmsInt32Number VAR_5;

    switch (VAR_0) {

        case 1:
            return FUNC_3(FUNC_0(), VAR_1, VAR_2, VAR_4);


        case 2:
            VAR_3 = (cmsFloat64Number *) FUNC_2(FUNC_0(), VAR_1, VAR_2);
            if (VAR_3 == ((void*)0)) return 0;

            for (VAR_5=0; VAR_5 < 9; VAR_5++) {
                if (!FUNC_1("CHAD", VAR_3[VAR_5], VAR_4[VAR_5])) return 0;
            }

            return 1;

        default:
            return 0;
    }
}
