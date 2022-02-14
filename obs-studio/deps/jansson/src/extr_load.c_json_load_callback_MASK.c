
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stream_data ;
typedef int lex_t ;
typedef int json_t ;
typedef int * json_load_callback_t ;
typedef int json_error_t ;
typedef int get_func ;
struct TYPE_4__ {void* arg; int * callback; } ;
typedef TYPE_1__ callback_data_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,size_t,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int * FUNC_5 (int *,size_t,int *) ;

json_t *FUNC_6(json_load_callback_t VAR_1, void *VAR_2, size_t VAR_3, json_error_t *VAR_4)
{
    lex_t VAR_5;
    json_t *VAR_6;

    callback_data_t VAR_7;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.callback = VAR_1;
    VAR_7.arg = VAR_2;

    FUNC_1(VAR_4, "<callback>");

    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_4, ((void*)0), "wrong arguments");
        return ((void*)0);
    }

    if(FUNC_3(&VAR_5, (get_func)VAR_0, VAR_3, &VAR_7))
        return ((void*)0);

    VAR_6 = FUNC_5(&VAR_5, VAR_3, VAR_4);

    FUNC_2(&VAR_5);
    return VAR_6;
}
