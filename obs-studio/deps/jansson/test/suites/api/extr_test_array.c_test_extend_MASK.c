
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
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
    json_t *VAR_0, *VAR_1, *VAR_2, *VAR_3;
    int VAR_4;

    VAR_0 = FUNC_1();
    VAR_1 = FUNC_1();
    VAR_2 = FUNC_7(5);
    VAR_3 = FUNC_7(7);

    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create array");
    if(!VAR_2 || !VAR_3)
        FUNC_0("unable to create integer");

    for(VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        if(FUNC_2(VAR_0, VAR_2))
            FUNC_0("unable to append");
    }
    for(VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        if(FUNC_2(VAR_1, VAR_3))
            FUNC_0("unable to append");
    }

    if(FUNC_5(VAR_0) != 10 || FUNC_5(VAR_1) != 10)
        FUNC_0("array size is invalid after appending");

    if(FUNC_3(VAR_0, VAR_1))
        FUNC_0("unable to extend");

    for(VAR_4 = 0; VAR_4 < 10; VAR_4++) {
        if(FUNC_4(VAR_0, VAR_4) != VAR_2)
            FUNC_0("invalid array contents after extending");
    }
    for(VAR_4 = 10; VAR_4 < 20; VAR_4++) {
        if(FUNC_4(VAR_0, VAR_4) != VAR_3)
            FUNC_0("invalid array contents after extending");
    }

    FUNC_6(VAR_2);
    FUNC_6(VAR_3);
    FUNC_6(VAR_0);
    FUNC_6(VAR_1);
}
