
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * FUNC_3 (int) ;
 int * FUNC_4 (double) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 () ;

__attribute__((used)) static void FUNC_7()
{
    json_t *VAR_0, *VAR_1;

    if(FUNC_2(((void*)0), ((void*)0)))
        FUNC_0("json_equal fails for two NULLs");

    VAR_0 = FUNC_6();
    if(FUNC_2(VAR_0, ((void*)0)) || FUNC_2(((void*)0), VAR_0))
        FUNC_0("json_equal fails for NULL");


    if(!FUNC_2(VAR_0, VAR_0))
        FUNC_0("identical objects are not equal");
    FUNC_1(VAR_0);


    VAR_0 = FUNC_3(1);
    VAR_1 = FUNC_3(1);
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create integers");
    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two equal integers");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_3(2);
    if(!VAR_1)
        FUNC_0("unable to create an integer");
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal integers");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);


    VAR_0 = FUNC_4(1.2);
    VAR_1 = FUNC_4(1.2);
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create reals");
    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two equal reals");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_4(3.141592);
    if(!VAR_1)
        FUNC_0("unable to create an real");
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal reals");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);


    VAR_0 = FUNC_5("foo");
    VAR_1 = FUNC_5("foo");
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create strings");
    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two equal strings");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_5("bar");
    if(!VAR_1)
        FUNC_0("unable to create an string");
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal strings");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
}
