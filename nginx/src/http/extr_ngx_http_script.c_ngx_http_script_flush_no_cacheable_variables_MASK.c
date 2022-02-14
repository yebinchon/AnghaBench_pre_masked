
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {TYPE_1__* variables; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_8__ {size_t* elts; size_t nelts; } ;
typedef TYPE_3__ ngx_array_t ;
struct TYPE_6__ {scalar_t__ not_found; scalar_t__ valid; scalar_t__ no_cacheable; } ;



void
FUNC_0(ngx_http_request_t *VAR_0,
    ngx_array_t *VAR_1)
{
    ngx_uint_t VAR_2, *VAR_3;

    if (VAR_1) {
        VAR_3 = VAR_1->elts;
        for (VAR_2 = 0; VAR_2 < VAR_1->nelts; VAR_2++) {
            if (VAR_0->variables[VAR_3[VAR_2]].no_cacheable) {
                VAR_0->variables[VAR_3[VAR_2]].valid = 0;
                VAR_0->variables[VAR_3[VAR_2]].not_found = 0;
            }
        }
    }
}
