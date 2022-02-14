
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 char* FUNC_4 (int *,int ) ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8()
{



    json_t *VAR_1;
    FILE *VAR_2 = ((void*)0);
    char *VAR_3;

    VAR_1 = FUNC_6("foo");
    if(FUNC_4(VAR_1, 0) != ((void*)0))
        FUNC_0("json_dumps encoded a string!");
    if(FUNC_3(VAR_1, VAR_2, 0) == 0)
        FUNC_0("json_dumpf encoded a string!");

    VAR_3 = FUNC_4(VAR_1, VAR_0);
    if(!VAR_3 || FUNC_7(VAR_3, "\"foo\"") != 0)
        FUNC_0("json_dumps failed to encode a string with JSON_ENCODE_ANY");

    FUNC_1(VAR_3);
    FUNC_2(VAR_1);

    VAR_1 = FUNC_5(42);
    if(FUNC_4(VAR_1, 0) != ((void*)0))
        FUNC_0("json_dumps encoded an integer!");
    if(FUNC_3(VAR_1, VAR_2, 0) == 0)
        FUNC_0("json_dumpf encoded an integer!");

    VAR_3 = FUNC_4(VAR_1, VAR_0);
    if(!VAR_3 || FUNC_7(VAR_3, "42") != 0)
        FUNC_0("json_dumps failed to encode an integer with JSON_ENCODE_ANY");

    FUNC_1(VAR_3);
    FUNC_2(VAR_1);


}
