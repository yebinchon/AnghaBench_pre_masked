
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7()
{
    json_t *VAR_0, *VAR_1;

    VAR_0 = FUNC_3();
    VAR_1 = FUNC_2(10);

    if(!VAR_0)
        FUNC_0("unable to create object");
    if(!VAR_1)
        FUNC_0("unable to create integer");

    if(FUNC_5(VAR_0, "a", VAR_1) ||
       FUNC_5(VAR_0, "b", VAR_1) ||
       FUNC_5(VAR_0, "c", VAR_1) ||
       FUNC_5(VAR_0, "d", VAR_1) ||
       FUNC_5(VAR_0, "e", VAR_1))
        FUNC_0("unable to set value");

    if(FUNC_6(VAR_0) != 5)
        FUNC_0("invalid size");

    FUNC_4(VAR_0);

    if(FUNC_6(VAR_0) != 0)
        FUNC_0("invalid size after clear");

    FUNC_1(VAR_1);
    FUNC_1(VAR_0);
}
