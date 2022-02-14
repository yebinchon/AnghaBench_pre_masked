
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

cmsInt32Number FUNC_7(void)
{
    int VAR_0 = 1;
    int VAR_1 = 32;
    cmsInt32Number VAR_2 = 0;

    cmsContext VAR_3, VAR_4, VAR_5;



    VAR_3 = FUNC_3(&VAR_0);
    FUNC_5(VAR_3);

    VAR_3 = FUNC_3(&VAR_0);


    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    VAR_5 = FUNC_1(VAR_4, ((void*)0));


    VAR_2 = (*(int*) FUNC_6(VAR_5)) == 1 ;


    FUNC_5(VAR_3);
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);

    if (!VAR_2) {
        FUNC_2("Creation of user data failed");
        return 0;
    }


    VAR_3 = FUNC_4(((void*)0), &VAR_0);
    FUNC_0(VAR_3);

    VAR_4 = FUNC_1(VAR_3, ((void*)0));
    VAR_5 = FUNC_1(VAR_4, &VAR_1);

    VAR_2 = (*(int*) FUNC_6(VAR_5)) == 32 ;

    FUNC_5(VAR_3);
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);

    if (!VAR_2) {
        FUNC_2("Modification of user data failed");
        return 0;
    }


    return VAR_2;
}
