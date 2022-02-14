
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void FUNC_6()
{
    json_t *VAR_1;
    char *VAR_2;

    VAR_1 = FUNC_4("nul byte \0 in string", 20);
    VAR_2 = FUNC_3(VAR_1, VAR_0);
    if(!VAR_2 || FUNC_5(VAR_2, "\"nul byte \\u0000 in string\"", 27))
        FUNC_0("json_dumps failed to dump an embedded NUL byte");

    FUNC_1(VAR_2);
    FUNC_2(VAR_1);
}
