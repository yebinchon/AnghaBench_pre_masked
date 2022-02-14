
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {char* value; size_t length; } ;
typedef TYPE_1__ json_string_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,size_t) ;

int FUNC_4(json_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
    char *VAR_3;
    json_string_t *VAR_4;

    if(!FUNC_0(VAR_0) || !VAR_1)
        return -1;

    VAR_3 = FUNC_3(VAR_1, VAR_2);
    if(!VAR_3)
        return -1;

    VAR_4 = FUNC_1(VAR_0);
    FUNC_2(VAR_4->value);
    VAR_4->value = VAR_3;
    VAR_4->length = VAR_2;

    return 0;
}
