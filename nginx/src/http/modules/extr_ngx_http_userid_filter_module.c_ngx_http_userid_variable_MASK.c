
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int len; int valid; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_10__ {int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2, ngx_http_variable_value_t *VAR_3,
    ngx_str_t *VAR_4, uint32_t *VAR_5)
{
    VAR_3->len = VAR_4->len + sizeof("=00001111222233334444555566667777") - 1;
    VAR_3->data = FUNC_0(VAR_2->pool, VAR_3->len);
    if (VAR_3->data == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;

    FUNC_1(VAR_3->data, "%V=%08XD%08XD%08XD%08XD",
                VAR_4, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);

    return VAR_1;
}
