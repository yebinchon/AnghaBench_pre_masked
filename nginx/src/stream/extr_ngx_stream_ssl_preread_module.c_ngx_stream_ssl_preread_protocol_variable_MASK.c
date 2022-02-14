
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int not_found; int valid; int data; int len; scalar_t__ no_cacheable; } ;
typedef TYPE_1__ ngx_variable_value_t ;
struct TYPE_9__ {int* version; } ;
typedef TYPE_2__ ngx_stream_ssl_preread_ctx_t ;
typedef int ngx_stream_session_t ;
struct TYPE_10__ {int data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_stream_session_t *VAR_2,
    ngx_variable_value_t *VAR_3, uintptr_t VAR_4)
{
    ngx_str_t VAR_5;
    ngx_stream_ssl_preread_ctx_t *VAR_6;

    VAR_6 = FUNC_2(VAR_2, VAR_1);

    if (VAR_6 == ((void*)0)) {
        VAR_3->not_found = 1;
        return VAR_0;
    }



    FUNC_0(&VAR_5);

    switch (VAR_6->version[0]) {
    case 0:
        switch (VAR_6->version[1]) {
        case 2:
            FUNC_1(&VAR_5, "SSLv2");
            break;
        }
        break;
    case 3:
        switch (VAR_6->version[1]) {
        case 0:
            FUNC_1(&VAR_5, "SSLv3");
            break;
        case 1:
            FUNC_1(&VAR_5, "TLSv1");
            break;
        case 2:
            FUNC_1(&VAR_5, "TLSv1.1");
            break;
        case 3:
            FUNC_1(&VAR_5, "TLSv1.2");
            break;
        case 4:
            FUNC_1(&VAR_5, "TLSv1.3");
            break;
        }
    }

    VAR_3->valid = 1;
    VAR_3->no_cacheable = 0;
    VAR_3->not_found = 0;
    VAR_3->len = VAR_5.len;
    VAR_3->data = VAR_5.data;

    return VAR_0;
}
