
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {int valid; int len; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_8__ {TYPE_1__* connection; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3,
    ngx_http_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    u_char *VAR_6;





    VAR_6 = FUNC_2(VAR_3->pool, 32);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    VAR_4->len = 32;
    VAR_4->data = VAR_6;
    FUNC_4(VAR_6, "%08xD%08xD%08xD%08xD",
                (uint32_t) FUNC_3(), (uint32_t) FUNC_3(),
                (uint32_t) FUNC_3(), (uint32_t) FUNC_3());

    return VAR_2;
}
