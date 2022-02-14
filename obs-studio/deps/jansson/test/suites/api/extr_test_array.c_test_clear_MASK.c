
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void)
{
    json_t *VAR_0, *VAR_1, *VAR_2;
    int VAR_3;

    VAR_0 = FUNC_1();
    VAR_1 = FUNC_6(5);
    VAR_2 = FUNC_6(7);

    if(!VAR_0)
        FUNC_0("unable to create array");
    if(!VAR_1 || !VAR_2)
        FUNC_0("unable to create integer");

    for(VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        if(FUNC_2(VAR_0, VAR_1))
            FUNC_0("unable to append");
    }
    for(VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        if(FUNC_2(VAR_0, VAR_2))
            FUNC_0("unable to append");
    }

    if(FUNC_4(VAR_0) != 20)
        FUNC_0("array size is invalid after appending");

    if(FUNC_3(VAR_0))
        FUNC_0("unable to clear");

    if(FUNC_4(VAR_0) != 0)
        FUNC_0("array size is invalid after clearing");

    FUNC_5(VAR_1);
    FUNC_5(VAR_2);
    FUNC_5(VAR_0);
}
