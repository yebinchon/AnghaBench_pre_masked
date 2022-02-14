
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
struct TYPE_6__ {int L; int a; int b; } ;
typedef TYPE_1__ cmsCIELab ;
typedef int cmsCIELCh ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(void)
{
    cmsInt32Number VAR_0, VAR_1, VAR_2;
    cmsFloat64Number VAR_3, VAR_4 = 0;
    cmsCIELab VAR_5, VAR_6;
    cmsCIELCh VAR_7;

    for (VAR_0=0; VAR_0 <= 100; VAR_0 += 10) {

        for (VAR_1=-128; VAR_1 <= +128; VAR_1 += 8) {

            for (VAR_2=-128; VAR_2 <= 128; VAR_2 += 8) {

                VAR_5.L = VAR_0;
                VAR_5.a = VAR_1;
                VAR_5.b = VAR_2;

                FUNC_3(FUNC_0(), &VAR_7, &VAR_5);
                FUNC_2(FUNC_0(), &VAR_6, &VAR_7);

                VAR_3 = FUNC_1(FUNC_0(), &VAR_5, &VAR_6);
                if (VAR_3 > VAR_4) VAR_4 = VAR_3;
            }
        }
    }

    return VAR_4 < 1E-12;
}
