
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* data; scalar_t__ pos; } ;
typedef TYPE_1__ string_data_t ;
typedef int lex_t ;
typedef int json_t ;
typedef int json_error_t ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,size_t,void*) ;
 int * FUNC_4 (int *,size_t,int *) ;
 int VAR_0 ;

json_t *FUNC_5(const char *VAR_1, size_t VAR_2, json_error_t *VAR_3)
{
    lex_t VAR_4;
    json_t *VAR_5;
    string_data_t VAR_6;

    FUNC_1(VAR_3, "<string>");

    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_3, ((void*)0), "wrong arguments");
        return ((void*)0);
    }

    VAR_6.data = VAR_1;
    VAR_6.pos = 0;

    if(FUNC_3(&VAR_4, VAR_0, VAR_2, (void *)&VAR_6))
        return ((void*)0);

    VAR_5 = FUNC_4(&VAR_4, VAR_2, VAR_3);

    FUNC_2(&VAR_4);
    return VAR_5;
}
