
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
struct TYPE_8__ {size_t* flushes; } ;
typedef TYPE_3__ ngx_http_complex_value_t ;
struct TYPE_6__ {scalar_t__ not_found; scalar_t__ valid; scalar_t__ no_cacheable; } ;



void
FUNC_0(ngx_http_request_t *VAR_0,
    ngx_http_complex_value_t *VAR_1)
{
    ngx_uint_t *VAR_2;

    VAR_2 = VAR_1->flushes;

    if (VAR_2) {
        while (*VAR_2 != (ngx_uint_t) -1) {

            if (VAR_0->variables[*VAR_2].no_cacheable) {
                VAR_0->variables[*VAR_2].valid = 0;
                VAR_0->variables[*VAR_2].not_found = 0;
            }

            VAR_2++;
        }
    }
}
