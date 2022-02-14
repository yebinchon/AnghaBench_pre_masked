
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_value {char* value; size_t len; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char,char) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) __attribute__((noinline)) static void FUNC_3(
    struct lwan_value *VAR_0, char *VAR_1, char *VAR_2, size_t VAR_3)
{
    VAR_2 += VAR_3;

    if (FUNC_0(FUNC_2(VAR_2) == FUNC_1(':', ' '))) {
        *VAR_1 = '\0';
        char *VAR_4 = VAR_2 + sizeof(": ") - 1;

        VAR_0->value = VAR_4;
        VAR_0->len = (size_t)(VAR_1 - VAR_4);
    }
}
