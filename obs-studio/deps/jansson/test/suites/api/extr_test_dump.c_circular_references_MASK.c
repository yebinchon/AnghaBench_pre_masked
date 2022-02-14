
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int *,int ) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,int *) ;
 int FUNC_13 (int *,char*,int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;

__attribute__((used)) static void FUNC_15()
{
    json_t *VAR_0;
    char *VAR_1;

    VAR_0 = FUNC_9();
    FUNC_13(VAR_0, "a", FUNC_9());
    FUNC_13(FUNC_11(VAR_0, "a"), "b", FUNC_9());
    FUNC_12(FUNC_11(FUNC_11(VAR_0, "a"), "b"), "c",
                    FUNC_11(VAR_0, "a"));

    if(FUNC_8(VAR_0, 0))
        FUNC_0("json_dumps encoded a circular reference!");

    FUNC_10(FUNC_11(FUNC_11(VAR_0, "a"), "b"), "c");

    VAR_1 = FUNC_8(VAR_0, 0);
    if(!VAR_1 || FUNC_14(VAR_1, "{\"a\": {\"b\": {}}}"))
        FUNC_0("json_dumps failed!");
    FUNC_1(VAR_1);

    FUNC_7(VAR_0);

    VAR_0 = FUNC_2();
    FUNC_4(VAR_0, FUNC_2());
    FUNC_4(FUNC_5(VAR_0, 0), FUNC_2());
    FUNC_3(FUNC_5(FUNC_5(VAR_0, 0), 0),
                      FUNC_5(VAR_0, 0));

    if(FUNC_8(VAR_0, 0))
        FUNC_0("json_dumps encoded a circular reference!");

    FUNC_6(FUNC_5(FUNC_5(VAR_0, 0), 0), 0);

    VAR_1 = FUNC_8(VAR_0, 0);
    if(!VAR_1 || FUNC_14(VAR_1, "[[[]]]"))
        FUNC_0("json_dumps failed!");
    FUNC_1(VAR_1);

    FUNC_7(VAR_0);
}
