
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_10__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int valid; scalar_t__ len; int * data; scalar_t__ not_found; scalar_t__ no_cacheable; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_12__ {TYPE_1__ timefmt; } ;
typedef TYPE_3__ ngx_http_ssi_ctx_t ;
struct TYPE_13__ {int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ,struct tm*) ;
 int FUNC_2 (int ,struct tm*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 void* FUNC_4 (int ,scalar_t__) ;
 int * FUNC_5 (int *,char*,int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (char*,int,char*,struct tm*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_6,
    ngx_http_variable_value_t *VAR_7, uintptr_t VAR_8)
{
    time_t VAR_9;
    ngx_http_ssi_ctx_t *VAR_10;
    ngx_str_t *VAR_11;
    struct tm VAR_12;
    char VAR_13[VAR_1];

    VAR_7->valid = 1;
    VAR_7->no_cacheable = 0;
    VAR_7->not_found = 0;

    VAR_9 = FUNC_6();

    VAR_10 = FUNC_0(VAR_6, VAR_4);

    VAR_11 = VAR_10 ? &VAR_10->timefmt : &VAR_5;

    if (VAR_11->len == sizeof("%s") - 1
        && VAR_11->data[0] == '%' && VAR_11->data[1] == 's')
    {
        VAR_7->data = FUNC_4(VAR_6->pool, VAR_3);
        if (VAR_7->data == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->len = FUNC_5(VAR_7->data, "%T", VAR_9) - VAR_7->data;

        return VAR_2;
    }

    if (VAR_8) {
        FUNC_1(VAR_9, &VAR_12);
    } else {
        FUNC_2(VAR_9, &VAR_12);
    }

    VAR_7->len = FUNC_7(VAR_13, VAR_1,
                      (char *) VAR_11->data, &VAR_12);
    if (VAR_7->len == 0) {
        return VAR_0;
    }

    VAR_7->data = FUNC_4(VAR_6->pool, VAR_7->len);
    if (VAR_7->data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_7->data, VAR_13, VAR_7->len);

    return VAR_2;
}
