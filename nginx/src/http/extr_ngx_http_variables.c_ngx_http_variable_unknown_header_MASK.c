
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_11__ {int data; int len; } ;
struct TYPE_10__ {size_t len; char* data; } ;
struct TYPE_12__ {scalar_t__ hash; TYPE_2__ value; TYPE_1__ key; } ;
typedef TYPE_3__ ngx_table_elt_t ;
struct TYPE_13__ {size_t len; char* data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_14__ {size_t nelts; TYPE_3__* elts; struct TYPE_14__* next; } ;
typedef TYPE_5__ ngx_list_part_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int valid; int not_found; int data; scalar_t__ no_cacheable; int len; } ;
typedef TYPE_6__ ngx_http_variable_value_t ;


 int VAR_0 ;

ngx_int_t
FUNC_0(ngx_http_variable_value_t *VAR_1, ngx_str_t *VAR_2,
    ngx_list_part_t *VAR_3, size_t VAR_4)
{
    u_char VAR_5;
    ngx_uint_t VAR_6, VAR_7;
    ngx_table_elt_t *VAR_8;

    VAR_8 = VAR_3->elts;

    for (VAR_6 = 0; ; VAR_6++) {

        if (VAR_6 >= VAR_3->nelts) {
            if (VAR_3->next == ((void*)0)) {
                break;
            }

            VAR_3 = VAR_3->next;
            VAR_8 = VAR_3->elts;
            VAR_6 = 0;
        }

        if (VAR_8[VAR_6].hash == 0) {
            continue;
        }

        for (VAR_7 = 0; VAR_7 + VAR_4 < VAR_2->len && VAR_7 < VAR_8[VAR_6].key.len; VAR_7++) {
            VAR_5 = VAR_8[VAR_6].key.data[VAR_7];

            if (VAR_5 >= 'A' && VAR_5 <= 'Z') {
                VAR_5 |= 0x20;

            } else if (VAR_5 == '-') {
                VAR_5 = '_';
            }

            if (VAR_2->data[VAR_7 + VAR_4] != VAR_5) {
                break;
            }
        }

        if (VAR_7 + VAR_4 == VAR_2->len && VAR_7 == VAR_8[VAR_6].key.len) {
            VAR_1->len = VAR_8[VAR_6].value.len;
            VAR_1->valid = 1;
            VAR_1->no_cacheable = 0;
            VAR_1->not_found = 0;
            VAR_1->data = VAR_8[VAR_6].value.data;

            return VAR_0;
        }
    }

    VAR_1->not_found = 1;

    return VAR_0;
}
