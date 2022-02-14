
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {TYPE_1__* split_parts; scalar_t__ large_stderr; scalar_t__ fastcgi_stdout; int state; } ;
typedef TYPE_3__ ngx_http_fastcgi_ctx_t ;
struct TYPE_7__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3)
{
    ngx_http_fastcgi_ctx_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_1);

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->state = VAR_2;
    VAR_4->fastcgi_stdout = 0;
    VAR_4->large_stderr = 0;

    if (VAR_4->split_parts) {
        VAR_4->split_parts->nelts = 0;
    }

    VAR_3->state = 0;

    return VAR_0;
}
