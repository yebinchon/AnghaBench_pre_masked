
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {scalar_t__ len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_9__ {int utf8; scalar_t__ length; TYPE_1__ name; int * tables; } ;
typedef TYPE_2__ ngx_http_charset_t ;
struct TYPE_10__ {size_t nelts; TYPE_2__* elts; } ;
typedef TYPE_3__ ngx_array_t ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_array_t *VAR_1, ngx_str_t *VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_http_charset_t *VAR_4;

    VAR_4 = VAR_1->elts;
    for (VAR_3 = 0; VAR_3 < VAR_1->nelts; VAR_3++) {
        if (VAR_2->len != VAR_4[VAR_3].name.len) {
            continue;
        }

        if (FUNC_1(VAR_2->data, VAR_4[VAR_3].name.data) == 0) {
            break;
        }
    }

    if (VAR_3 < VAR_1->nelts) {
        return VAR_3;
    }

    VAR_4 = FUNC_0(VAR_1);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->tables = ((void*)0);
    VAR_4->name = *VAR_2;
    VAR_4->length = 0;

    if (FUNC_1(VAR_2->data, (u_char *) "utf-8") == 0) {
        VAR_4->utf8 = 1;

    } else {
        VAR_4->utf8 = 0;
    }

    return VAR_3;
}
