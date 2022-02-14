
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_12__ {TYPE_4__* connection; } ;
typedef TYPE_2__ ngx_stream_session_t ;
struct TYPE_11__ {size_t len; int * data; } ;
struct TYPE_13__ {TYPE_1__ addr_text; int socklen; int sockaddr; } ;
typedef TYPE_3__ ngx_stream_realip_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_1__ addr_text; int socklen; int sockaddr; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_15__ {int socklen; int sockaddr; } ;
typedef TYPE_5__ ngx_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,size_t) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,size_t) ;
 size_t FUNC_3 (int ,int ,int *,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_stream_session_t *VAR_4, ngx_addr_t *VAR_5)
{
    size_t VAR_6;
    u_char *VAR_7;
    u_char VAR_8[VAR_2];
    ngx_connection_t *VAR_9;
    ngx_stream_realip_ctx_t *VAR_10;

    VAR_9 = VAR_4->connection;

    VAR_10 = FUNC_1(VAR_9->pool, sizeof(ngx_stream_realip_ctx_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    VAR_6 = FUNC_3(VAR_5->sockaddr, VAR_5->socklen, VAR_8,
                        VAR_2, 0);
    if (VAR_6 == 0) {
        return VAR_1;
    }

    VAR_7 = FUNC_2(VAR_9->pool, VAR_6);
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_7, VAR_8, VAR_6);

    FUNC_4(VAR_4, VAR_10, VAR_3);

    VAR_10->sockaddr = VAR_9->sockaddr;
    VAR_10->socklen = VAR_9->socklen;
    VAR_10->addr_text = VAR_9->addr_text;

    VAR_9->sockaddr = VAR_5->sockaddr;
    VAR_9->socklen = VAR_5->socklen;
    VAR_9->addr_text.len = VAR_6;
    VAR_9->addr_text.data = VAR_7;

    return VAR_0;
}
