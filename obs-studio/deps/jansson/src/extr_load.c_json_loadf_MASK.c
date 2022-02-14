
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lex_t ;
typedef int json_t ;
typedef int json_error_t ;
typedef int get_func ;
typedef int FILE ;


 int FUNC_0 (int *,int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,size_t,int *) ;
 int * FUNC_4 (int *,size_t,int *) ;
 int * VAR_1 ;

json_t *FUNC_5(FILE *VAR_2, size_t VAR_3, json_error_t *VAR_4)
{
    lex_t VAR_5;
    const char *VAR_6;
    json_t *VAR_7;

    if(VAR_2 == VAR_1)
        VAR_6 = "<stdin>";
    else
        VAR_6 = "<stream>";

    FUNC_1(VAR_4, VAR_6);

    if (VAR_2 == ((void*)0)) {
        FUNC_0(VAR_4, ((void*)0), "wrong arguments");
        return ((void*)0);
    }

    if(FUNC_3(&VAR_5, (get_func)VAR_0, VAR_3, VAR_2))
        return ((void*)0);

    VAR_7 = FUNC_4(&VAR_5, VAR_3, VAR_4);

    FUNC_2(&VAR_5);
    return VAR_7;
}
