
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int *) ;
 scalar_t__ FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    json_t *VAR_0, *VAR_1, *VAR_2, *VAR_3, *VAR_4;
    int VAR_5;

    VAR_0 = FUNC_1();
    VAR_1 = FUNC_7(5);
    VAR_2 = FUNC_7(7);
    VAR_3 = FUNC_7(11);

    if(!VAR_0)
        FUNC_0("unable to create array");
    if(!VAR_1 || !VAR_2 || !VAR_3)
        FUNC_0("unable to create integer");


    if(!FUNC_3(VAR_0, 1, VAR_1))
        FUNC_0("able to insert value out of bounds");


    if(FUNC_3(VAR_0, 0, VAR_1))
        FUNC_0("unable to insert value in an empty array");

    if(FUNC_2(VAR_0, 0) != VAR_1)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_5(VAR_0) != 1)
        FUNC_0("array size is invalid after insertion");


    if(FUNC_3(VAR_0, 1, VAR_2))
        FUNC_0("unable to insert value at the end of an array");

    if(FUNC_2(VAR_0, 0) != VAR_1)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_2(VAR_0, 1) != VAR_2)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_5(VAR_0) != 2)
        FUNC_0("array size is invalid after insertion");


    if(FUNC_3(VAR_0, 1, VAR_3))
        FUNC_0("unable to insert value in the middle of an array");

    if(FUNC_2(VAR_0, 0) != VAR_1)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_2(VAR_0, 1) != VAR_3)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_2(VAR_0, 2) != VAR_2)
        FUNC_0("json_array_insert works incorrectly");

    if(FUNC_5(VAR_0) != 3)
        FUNC_0("array size is invalid after insertion");


    if(FUNC_4(VAR_0, 2, FUNC_7(123)))
        FUNC_0("unable to insert value in the middle of an array");

    VAR_4 = FUNC_2(VAR_0, 2);
    if(!FUNC_9(VAR_4) || FUNC_8(VAR_4) != 123)
        FUNC_0("json_array_insert_new works incorrectly");

    if(FUNC_5(VAR_0) != 4)
        FUNC_0("array size is invalid after insertion");


    for(VAR_5 = 0; VAR_5 < 20; VAR_5++) {
        if(FUNC_3(VAR_0, 0, VAR_2))
            FUNC_0("unable to insert value at the begining of an array");
    }

    for(VAR_5 = 0; VAR_5 < 20; VAR_5++) {
        if(FUNC_2(VAR_0, VAR_5) != VAR_2)
            FUNC_0("json_aray_insert works incorrectly");
    }

    if(FUNC_5(VAR_0) != 24)
        FUNC_0("array size is invalid after loop insertion");

    FUNC_6(VAR_1);
    FUNC_6(VAR_2);
    FUNC_6(VAR_3);
    FUNC_6(VAR_0);
}
