
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_int_t ;


 double VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 double FUNC_4 (int *) ;
 int * FUNC_5 (double) ;
 int FUNC_6 (int *,double) ;
 double FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9()
{
    json_t *VAR_1, *VAR_2;
    json_int_t VAR_3;
    double VAR_4;

    VAR_1 = FUNC_2(5);
    VAR_2 = FUNC_5(100.1);

    if(!VAR_1)
        FUNC_0("unable to create integer");
    if(!VAR_2)
        FUNC_0("unable to create real");

    VAR_3 = FUNC_3(VAR_1);
    if(VAR_3 != 5)
        FUNC_0("wrong integer value");

    VAR_4 = FUNC_7(VAR_2);
    if(VAR_4 != 100.1)
        FUNC_0("wrong real value");

    VAR_4 = FUNC_4(VAR_1);
    if(VAR_4 != 5.0)
        FUNC_0("wrong number value");
    VAR_4 = FUNC_4(VAR_2);
    if(VAR_4 != 100.1)
        FUNC_0("wrong number value");

    FUNC_1(VAR_1);
    FUNC_1(VAR_2);
}
