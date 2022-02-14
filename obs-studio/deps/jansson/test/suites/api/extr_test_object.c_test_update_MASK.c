
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9()
{
    json_t *VAR_0, *VAR_1, *VAR_2, *VAR_3;

    VAR_0 = FUNC_3();
    VAR_1 = FUNC_3();

    VAR_2 = FUNC_2(9);
    VAR_3 = FUNC_2(10);

    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create object");
    if(!VAR_2 || !VAR_3)
        FUNC_0("unable to create integer");




    if(FUNC_8(VAR_0, VAR_1))
        FUNC_0("unable to update an emtpy object with an empty object");

    if(FUNC_7(VAR_0) != 0)
        FUNC_0("invalid size after update");

    if(FUNC_7(VAR_1) != 0)
        FUNC_0("invalid size for updater after update");




    if(FUNC_6(VAR_1, "a", VAR_3) ||
       FUNC_6(VAR_1, "b", VAR_3) ||
       FUNC_6(VAR_1, "c", VAR_3) ||
       FUNC_6(VAR_1, "d", VAR_3) ||
       FUNC_6(VAR_1, "e", VAR_3))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, VAR_1))
        FUNC_0("unable to update an empty object");

    if(FUNC_7(VAR_0) != 5)
        FUNC_0("invalid size after update");

    if(FUNC_5(VAR_0, "a") != VAR_3 ||
       FUNC_5(VAR_0, "b") != VAR_3 ||
       FUNC_5(VAR_0, "c") != VAR_3 ||
       FUNC_5(VAR_0, "d") != VAR_3 ||
       FUNC_5(VAR_0, "e") != VAR_3)
        FUNC_0("update works incorrectly");




    if(FUNC_8(VAR_0, VAR_1))
        FUNC_0("unable to update a non-empty object");

    if(FUNC_7(VAR_0) != 5)
        FUNC_0("invalid size after update");

    if(FUNC_5(VAR_0, "a") != VAR_3 ||
       FUNC_5(VAR_0, "b") != VAR_3 ||
       FUNC_5(VAR_0, "c") != VAR_3 ||
       FUNC_5(VAR_0, "d") != VAR_3 ||
       FUNC_5(VAR_0, "e") != VAR_3)
        FUNC_0("update works incorrectly");





    if(FUNC_4(VAR_1))
        FUNC_0("clear failed");

    if(FUNC_6(VAR_1, "a", VAR_2) ||
       FUNC_6(VAR_1, "b", VAR_2) ||
       FUNC_6(VAR_1, "f", VAR_2) ||
       FUNC_6(VAR_1, "g", VAR_2) ||
       FUNC_6(VAR_1, "h", VAR_2))
        FUNC_0("unable to set value");

    if(FUNC_8(VAR_0, VAR_1))
        FUNC_0("unable to update a nonempty object");

    if(FUNC_7(VAR_0) != 8)
        FUNC_0("invalid size after update");

    if(FUNC_5(VAR_0, "a") != VAR_2 ||
       FUNC_5(VAR_0, "b") != VAR_2 ||
       FUNC_5(VAR_0, "f") != VAR_2 ||
       FUNC_5(VAR_0, "g") != VAR_2 ||
       FUNC_5(VAR_0, "h") != VAR_2)
        FUNC_0("update works incorrectly");

    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    FUNC_1(VAR_1);
    FUNC_1(VAR_0);
}
