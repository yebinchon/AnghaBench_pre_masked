
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
typedef int cmsCIExyY ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int*,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(void)
{
    cmsInt32Number VAR_0;
    cmsFloat64Number VAR_1, VAR_2, VAR_3 = 0;
    cmsCIExyY VAR_4;

    for (VAR_0=4000; VAR_0 < 25000; VAR_0++) {

        FUNC_2(FUNC_0(), &VAR_4, VAR_0);
        if (!FUNC_1(FUNC_0(), &VAR_2, &VAR_4)) return 0;

        VAR_1 = FUNC_3(VAR_2 - VAR_0);
        if (VAR_1 > VAR_3) VAR_3 = VAR_1;
    }


    return (VAR_3 < 100);
}
