
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int * elts; } ;
typedef TYPE_1__ ngx_array_t ;


 void* FUNC_0 (TYPE_1__*,size_t) ;

void *
FUNC_1(ngx_array_t *VAR_0, size_t VAR_1, void *VAR_2)
{
    u_char *VAR_3, **VAR_4;
    void *VAR_5;

    VAR_3 = VAR_0->elts;

    VAR_5 = FUNC_0(VAR_0, VAR_1);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_2) {
        if (VAR_3 != VAR_0->elts) {
            VAR_4 = VAR_2;
            *VAR_4 += (u_char *) VAR_0->elts - VAR_3;
        }
    }

    return VAR_5;
}
