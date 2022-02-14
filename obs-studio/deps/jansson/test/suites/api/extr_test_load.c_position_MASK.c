
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int position; } ;
typedef TYPE_1__ json_error_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,size_t,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3()
{
    json_t *VAR_1;
    size_t VAR_2 = VAR_0;
    json_error_t VAR_3;

    VAR_1 = FUNC_2("{\"foo\": \"bar\"}", 0, &VAR_3);
    if(VAR_3.position != 14)
        FUNC_0("json_loads returned a wrong position");
    FUNC_1(VAR_1);

    VAR_1 = FUNC_2("{\"foo\": \"bar\"} baz quux", VAR_2, &VAR_3);
    if(VAR_3.position != 14)
        FUNC_0("json_loads returned a wrong position");
    FUNC_1(VAR_1);
}
