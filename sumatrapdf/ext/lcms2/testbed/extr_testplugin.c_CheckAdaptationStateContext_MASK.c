
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat64Number ;
typedef int * cmsContext ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__,double,double) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;

cmsInt32Number FUNC_6(void)
{
    cmsInt32Number VAR_0 = 0;
    cmsContext VAR_1, VAR_2, VAR_3;
    cmsFloat64Number VAR_4, VAR_5;

    VAR_4 = FUNC_5(((void*)0), -1);

    VAR_1 = FUNC_3(((void*)0));

    FUNC_5(VAR_1, 0.7);

    VAR_2 = FUNC_0(VAR_1, ((void*)0));
    VAR_3 = FUNC_0(VAR_2, ((void*)0));

    VAR_0 = FUNC_2("Adaptation state", FUNC_5(VAR_3, -1), 0.7, 0.001);

    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);

    VAR_5 = FUNC_5(((void*)0), -1);

    if (VAR_4 != VAR_5) {
        FUNC_1("Adaptation state has changed");
        return 0;
    }

    return VAR_0;
}
