
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int ) ;
 int FUNC_6 (int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,char*,int ) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10()
{


    json_t *VAR_0;
    char *VAR_1;

    VAR_0 = FUNC_7();
    VAR_1 = FUNC_5(VAR_0, 0);
    if(!VAR_1 || FUNC_9(VAR_1, "{}"))
      FUNC_0("json_dumps failed");
    FUNC_1(VAR_1);

    FUNC_8(VAR_0, "foo", FUNC_6(5));
    VAR_1 = FUNC_5(VAR_0, 0);
    if(!VAR_1 || FUNC_9(VAR_1, "{\"foo\": 5}"))
      FUNC_0("json_dumps failed");
    FUNC_1(VAR_1);

    FUNC_4(VAR_0);

    VAR_0 = FUNC_2();
    VAR_1 = FUNC_5(VAR_0, 0);
    if(!VAR_1 || FUNC_9(VAR_1, "[]"))
      FUNC_0("json_dumps failed");
    FUNC_1(VAR_1);

    FUNC_3(VAR_0, FUNC_6(5));
    VAR_1 = FUNC_5(VAR_0, 0);
    if(!VAR_1 || FUNC_9(VAR_1, "[5]"))
      FUNC_0("json_dumps failed");
    FUNC_1(VAR_1);

    FUNC_4(VAR_0);
}
