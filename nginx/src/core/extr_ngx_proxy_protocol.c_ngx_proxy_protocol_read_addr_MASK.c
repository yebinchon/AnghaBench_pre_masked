
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_6__ {int pool; } ;
typedef TYPE_2__ ngx_connection_t ;


 int FUNC_0 (int *,char*,size_t) ;
 int * FUNC_1 (int ,size_t) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_connection_t *VAR_0, u_char *VAR_1, u_char *VAR_2,
    ngx_str_t *VAR_3)
{
    size_t VAR_4;
    u_char VAR_5, *VAR_6;

    VAR_6 = VAR_1;

    for ( ;; ) {
        if (VAR_1 == VAR_2) {
            return ((void*)0);
        }

        VAR_5 = *VAR_1++;

        if (VAR_5 == ' ') {
            break;
        }

        if (VAR_5 != ':' && VAR_5 != '.'
            && (VAR_5 < 'a' || VAR_5 > 'f')
            && (VAR_5 < 'A' || VAR_5 > 'F')
            && (VAR_5 < '0' || VAR_5 > '9'))
        {
            return ((void*)0);
        }
    }

    VAR_4 = VAR_1 - VAR_6 - 1;

    VAR_3->data = FUNC_1(VAR_0->pool, VAR_4);
    if (VAR_3->data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0(VAR_3->data, VAR_6, VAR_4);
    VAR_3->len = VAR_4;

    return VAR_1;
}
