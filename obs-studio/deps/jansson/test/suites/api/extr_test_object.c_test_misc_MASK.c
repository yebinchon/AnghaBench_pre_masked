
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char*,int *) ;
 scalar_t__ FUNC_9 (int *,char*,int *) ;
 int * FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11()
{
    json_t *VAR_0, *VAR_1, *VAR_2, *VAR_3;

    VAR_0 = FUNC_5();
    VAR_1 = FUNC_10("test");
    VAR_2 = FUNC_10("other");

    if(!VAR_0)
        FUNC_0("unable to create object");
    if(!VAR_1 || !VAR_2)
        FUNC_0("unable to create string");

    if(FUNC_7(VAR_0, "a"))
        FUNC_0("value for nonexisting key");

    if(FUNC_8(VAR_0, "a", VAR_1))
        FUNC_0("unable to set value");

    if(!FUNC_8(VAR_0, ((void*)0), VAR_1))
        FUNC_0("able to set NULL key");

    if(FUNC_6(VAR_0, "a"))
        FUNC_0("unable to del the only key");

    if(FUNC_8(VAR_0, "a", VAR_1))
        FUNC_0("unable to set value");

    if(!FUNC_8(VAR_0, "a", ((void*)0)))
        FUNC_0("able to set NULL value");


    if(!FUNC_8(VAR_0, "a\xefz", VAR_1))
        FUNC_0("able to set invalid unicode key");

    VAR_3 = FUNC_7(VAR_0, "a");
    if(!VAR_3)
        FUNC_0("no value for existing key");
    if(VAR_3 != VAR_1)
        FUNC_0("got different value than what was added");


    if(FUNC_8(VAR_0, "b", VAR_1) ||
       FUNC_8(VAR_0, "lp", VAR_1) ||
       FUNC_8(VAR_0, "px", VAR_1))
        FUNC_0("unable to set value");

    VAR_3 = FUNC_7(VAR_0, "a");
    if(!VAR_3)
        FUNC_0("no value for existing key");
    if(VAR_3 != VAR_1)
        FUNC_0("got different value than what was added");

    if(FUNC_8(VAR_0, "a", VAR_2))
        FUNC_0("unable to replace an existing key");

    VAR_3 = FUNC_7(VAR_0, "a");
    if(!VAR_3)
        FUNC_0("no value for existing key");
    if(VAR_3 != VAR_2)
        FUNC_0("got different value than what was set");

    if(!FUNC_6(VAR_0, "nonexisting"))
        FUNC_0("able to delete a nonexisting key");

    if(FUNC_6(VAR_0, "px"))
        FUNC_0("unable to delete an existing key");

    if(FUNC_6(VAR_0, "a"))
        FUNC_0("unable to delete an existing key");

    if(FUNC_6(VAR_0, "lp"))
        FUNC_0("unable to delete an existing key");




    if(FUNC_8(VAR_0, "a", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, "lp", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, "px", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, "c", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, "d", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, "e", VAR_1))
        FUNC_0("unable to set value");


    if(FUNC_9(VAR_0, "foo", FUNC_2(123)))
        FUNC_0("unable to set new value");

    VAR_3 = FUNC_7(VAR_0, "foo");
    if(!FUNC_4(VAR_3) || FUNC_3(VAR_3) != 123)
        FUNC_0("json_object_set_new works incorrectly");

    if(!FUNC_9(VAR_0, ((void*)0), FUNC_2(432)))
        FUNC_0("able to set_new NULL key");

    if(!FUNC_9(VAR_0, "foo", ((void*)0)))
        FUNC_0("able to set_new NULL value");

    FUNC_1(VAR_1);
    FUNC_1(VAR_2);
    FUNC_1(VAR_0);
}
