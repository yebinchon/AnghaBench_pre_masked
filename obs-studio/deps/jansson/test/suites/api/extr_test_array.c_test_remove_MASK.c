
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
    json_t *VAR_0, *VAR_1, *VAR_2;
    int VAR_3;

    VAR_0 = FUNC_1();
    VAR_1 = FUNC_7(5);
    VAR_2 = FUNC_7(7);

    if(!VAR_0)
        FUNC_0("unable to create array");
    if(!VAR_1)
        FUNC_0("unable to create integer");
    if(!VAR_2)
        FUNC_0("unable to create integer");


    if(!FUNC_4(VAR_0, 0))
        FUNC_0("able to remove an unexisting index");


    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("unable to append");

    if(!FUNC_4(VAR_0, 1))
        FUNC_0("able to remove an unexisting index");

    if(FUNC_4(VAR_0, 0))
        FUNC_0("unable to remove");

    if(FUNC_5(VAR_0) != 0)
        FUNC_0("array size is invalid after removing");


    if(FUNC_2(VAR_0, VAR_1) ||
       FUNC_2(VAR_0, VAR_2) ||
       FUNC_2(VAR_0, VAR_1) ||
       FUNC_2(VAR_0, VAR_2))
        FUNC_0("unable to append");

    if(FUNC_4(VAR_0, 2))
        FUNC_0("unable to remove");

    if(FUNC_5(VAR_0) != 3)
        FUNC_0("array size is invalid after removing");

    if(FUNC_3(VAR_0, 0) != VAR_1 ||
       FUNC_3(VAR_0, 1) != VAR_2 ||
       FUNC_3(VAR_0, 2) != VAR_2)
        FUNC_0("remove works incorrectly");

    FUNC_6(VAR_0);

    VAR_0 = FUNC_1();
    for(VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_2(VAR_0, VAR_2);
    }
    if(FUNC_5(VAR_0) != 8)
        FUNC_0("unable to append 8 items to array");


    FUNC_4(VAR_0, 5);

    FUNC_6(VAR_1);
    FUNC_6(VAR_2);
    FUNC_6(VAR_0);
}
