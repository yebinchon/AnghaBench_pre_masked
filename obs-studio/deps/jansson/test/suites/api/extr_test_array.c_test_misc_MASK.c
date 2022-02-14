
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 scalar_t__ FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    json_t *VAR_0, *VAR_1, *VAR_2, *VAR_3;
    size_t VAR_4;

    VAR_0 = FUNC_1();
    VAR_1 = FUNC_9(5);
    VAR_2 = FUNC_9(7);

    if(!VAR_0)
        FUNC_0("unable to create array");
    if(!VAR_1 || !VAR_2)
        FUNC_0("unable to create integer");

    if(FUNC_7(VAR_0) != 0)
        FUNC_0("empty array has nonzero size");

    if(!FUNC_2(VAR_0, ((void*)0)))
        FUNC_0("able to append NULL");

    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("unable to append");

    if(FUNC_7(VAR_0) != 1)
        FUNC_0("wrong array size");

    VAR_3 = FUNC_4(VAR_0, 0);
    if(!VAR_3)
        FUNC_0("unable to get item");
    if(VAR_3 != VAR_1)
        FUNC_0("got wrong value");

    if(FUNC_2(VAR_0, VAR_2))
        FUNC_0("unable to append value");

    if(FUNC_7(VAR_0) != 2)
        FUNC_0("wrong array size");

    VAR_3 = FUNC_4(VAR_0, 1);
    if(!VAR_3)
        FUNC_0("unable to get item");
    if(VAR_3 != VAR_2)
        FUNC_0("got wrong value");

    if(FUNC_5(VAR_0, 0, VAR_2))
        FUNC_0("unable to set value");

    if(!FUNC_5(VAR_0, 0, ((void*)0)))
        FUNC_0("able to set NULL");

    if(FUNC_7(VAR_0) != 2)
        FUNC_0("wrong array size");

    VAR_3 = FUNC_4(VAR_0, 0);
    if(!VAR_3)
        FUNC_0("unable to get item");
    if(VAR_3 != VAR_2)
        FUNC_0("got wrong value");

    if(FUNC_4(VAR_0, 2) != ((void*)0))
        FUNC_0("able to get value out of bounds");

    if(!FUNC_5(VAR_0, 2, VAR_2))
        FUNC_0("able to set value out of bounds");

    for(VAR_4 = 2; VAR_4 < 30; VAR_4++) {
        if(FUNC_2(VAR_0, VAR_2))
            FUNC_0("unable to append value");

        if(FUNC_7(VAR_0) != VAR_4 + 1)
            FUNC_0("wrong array size");
    }

    for(VAR_4 = 0; VAR_4 < 30; VAR_4++) {
        VAR_3 = FUNC_4(VAR_0, VAR_4);
        if(!VAR_3)
            FUNC_0("unable to get item");
        if(VAR_3 != VAR_2)
            FUNC_0("got wrong value");
    }

    if(FUNC_6(VAR_0, 15, FUNC_9(123)))
        FUNC_0("unable to set new value");

    VAR_3 = FUNC_4(VAR_0, 15);
    if(!FUNC_11(VAR_3) || FUNC_10(VAR_3) != 123)
        FUNC_0("json_array_set_new works incorrectly");

    if(!FUNC_6(VAR_0, 15, ((void*)0)))
        FUNC_0("able to set_new NULL value");

    if(FUNC_3(VAR_0, FUNC_9(321)))
        FUNC_0("unable to append new value");

    VAR_3 = FUNC_4(VAR_0, FUNC_7(VAR_0) - 1);
    if(!FUNC_11(VAR_3) || FUNC_10(VAR_3) != 321)
        FUNC_0("json_array_append_new works incorrectly");

    if(!FUNC_3(VAR_0, ((void*)0)))
        FUNC_0("able to append_new NULL value");

    FUNC_8(VAR_1);
    FUNC_8(VAR_2);
    FUNC_8(VAR_0);
}
