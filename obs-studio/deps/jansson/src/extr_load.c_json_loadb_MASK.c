
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lex_t ;
typedef int json_t ;
typedef int json_error_t ;
struct TYPE_2__ {char const* data; size_t len; scalar_t__ pos; } ;
typedef TYPE_1__ buffer_data_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,size_t,void*) ;
 int * FUNC_4 (int *,size_t,int *) ;

json_t *FUNC_5(const char *VAR_1, size_t VAR_2, size_t VAR_3, json_error_t *VAR_4)
{
    lex_t VAR_5;
    json_t *VAR_6;
    buffer_data_t VAR_7;

    FUNC_1(VAR_4, "<buffer>");

    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_4, ((void*)0), "wrong arguments");
        return ((void*)0);
    }

    VAR_7.data = VAR_1;
    VAR_7.pos = 0;
    VAR_7.len = VAR_2;

    if(FUNC_3(&VAR_5, VAR_0, VAR_3, (void *)&VAR_7))
        return ((void*)0);

    VAR_6 = FUNC_4(&VAR_5, VAR_3, VAR_4);

    FUNC_2(&VAR_5);
    return VAR_6;
}
