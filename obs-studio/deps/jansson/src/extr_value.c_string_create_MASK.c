
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {char* value; size_t length; int json; } ;
typedef TYPE_1__ json_string_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 char* FUNC_3 (char const*,size_t) ;

__attribute__((used)) static json_t *FUNC_4(const char *VAR_1, size_t VAR_2, int VAR_3)
{
    char *VAR_4;
    json_string_t *VAR_5;

    if(!VAR_1)
        return ((void*)0);

    if(VAR_3)
        VAR_4 = (char *)VAR_1;
    else {
        VAR_4 = FUNC_3(VAR_1, VAR_2);
        if(!VAR_4)
            return ((void*)0);
    }

    VAR_5 = FUNC_2(sizeof(json_string_t));
    if(!VAR_5) {
        if(!VAR_3)
            FUNC_1(VAR_4);
        return ((void*)0);
    }
    FUNC_0(&VAR_5->json, VAR_0);
    VAR_5->value = VAR_4;
    VAR_5->length = VAR_2;

    return &VAR_5->json;
}
