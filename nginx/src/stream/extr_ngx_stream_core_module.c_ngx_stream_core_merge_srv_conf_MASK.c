
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int preread_timeout; int preread_buffer_size; int tcp_nodelay; int proxy_protocol_timeout; int * error_log; int line; int file_name; int * handler; int * resolver; int resolver_timeout; } ;
typedef TYPE_2__ ngx_stream_core_srv_conf_t ;
struct TYPE_8__ {TYPE_1__* cycle; int log; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_6__ {int new_log; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ) ;
 int * FUNC_4 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_stream_core_srv_conf_t *VAR_6 = VAR_4;
    ngx_stream_core_srv_conf_t *VAR_7 = VAR_5;

    FUNC_0(VAR_7->resolver_timeout,
                              VAR_6->resolver_timeout, 30000);

    if (VAR_7->resolver == ((void*)0)) {

        if (VAR_6->resolver == ((void*)0)) {






            VAR_6->resolver = FUNC_4(VAR_3, ((void*)0), 0);
            if (VAR_6->resolver == ((void*)0)) {
                return VAR_0;
            }
        }

        VAR_7->resolver = VAR_6->resolver;
    }

    if (VAR_7->handler == ((void*)0)) {
        FUNC_3(VAR_2, VAR_3->log, 0,
                      "no handler for server in %s:%ui",
                      VAR_7->file_name, VAR_7->line);
        return VAR_0;
    }

    if (VAR_7->error_log == ((void*)0)) {
        if (VAR_6->error_log) {
            VAR_7->error_log = VAR_6->error_log;
        } else {
            VAR_7->error_log = &VAR_3->cycle->new_log;
        }
    }

    FUNC_0(VAR_7->proxy_protocol_timeout,
                              VAR_6->proxy_protocol_timeout, 30000);

    FUNC_2(VAR_7->tcp_nodelay, VAR_6->tcp_nodelay, 1);

    FUNC_1(VAR_7->preread_buffer_size,
                              VAR_6->preread_buffer_size, 16384);

    FUNC_0(VAR_7->preread_timeout,
                              VAR_6->preread_timeout, 30000);

    return VAR_1;
}
