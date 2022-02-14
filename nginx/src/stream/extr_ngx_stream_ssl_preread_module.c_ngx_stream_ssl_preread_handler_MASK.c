
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_16__ {int enabled; } ;
typedef TYPE_2__ ngx_stream_ssl_preread_srv_conf_t ;
struct TYPE_17__ {int* pos; int* version; int log; int pool; } ;
typedef TYPE_3__ ngx_stream_ssl_preread_ctx_t ;
struct TYPE_18__ {TYPE_5__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {scalar_t__ type; TYPE_1__* buffer; int log; int pool; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_15__ {int* pos; int* last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_3__* FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int*,int*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_stream_session_t *VAR_7)
{
    u_char *VAR_8, *VAR_9;
    size_t VAR_10;
    ngx_int_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_stream_ssl_preread_ctx_t *VAR_13;
    ngx_stream_ssl_preread_srv_conf_t *VAR_14;

    VAR_12 = VAR_7->connection;

    FUNC_0(VAR_3, VAR_12->log, 0, "ssl preread handler");

    VAR_14 = FUNC_3(VAR_7, VAR_6);

    if (!VAR_14->enabled) {
        return VAR_1;
    }

    if (VAR_12->type != VAR_5) {
        return VAR_1;
    }

    if (VAR_12->buffer == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = FUNC_2(VAR_7, VAR_6);
    if (VAR_13 == ((void*)0)) {
        VAR_13 = FUNC_1(VAR_12->pool, sizeof(ngx_stream_ssl_preread_ctx_t));
        if (VAR_13 == ((void*)0)) {
            return VAR_2;
        }

        FUNC_4(VAR_7, VAR_13, VAR_6);

        VAR_13->pool = VAR_12->pool;
        VAR_13->log = VAR_12->log;
        VAR_13->pos = VAR_12->buffer->pos;
    }

    VAR_9 = VAR_13->pos;
    VAR_8 = VAR_12->buffer->last;

    while (VAR_8 - VAR_9 >= 5) {

        if ((VAR_9[0] & 0x80) && VAR_9[2] == 1 && (VAR_9[3] == 0 || VAR_9[3] == 3)) {
            FUNC_0(VAR_3, VAR_13->log, 0,
                           "ssl preread: version 2 ClientHello");
            VAR_13->version[0] = VAR_9[3];
            VAR_13->version[1] = VAR_9[4];
            return VAR_4;
        }

        if (VAR_9[0] != 0x16) {
            FUNC_0(VAR_3, VAR_13->log, 0,
                           "ssl preread: not a handshake");
            FUNC_4(VAR_7, ((void*)0), VAR_6);
            return VAR_1;
        }

        if (VAR_9[1] != 3) {
            FUNC_0(VAR_3, VAR_13->log, 0,
                           "ssl preread: unsupported SSL version");
            FUNC_4(VAR_7, ((void*)0), VAR_6);
            return VAR_1;
        }

        VAR_10 = (VAR_9[3] << 8) + VAR_9[4];


        if ((size_t) (VAR_8 - VAR_9) < VAR_10 + 5) {
            break;
        }

        VAR_9 += 5;

        VAR_11 = FUNC_5(VAR_13, VAR_9, VAR_9 + VAR_10);

        if (VAR_11 == VAR_1) {
            FUNC_4(VAR_7, ((void*)0), VAR_6);
            return VAR_1;
        }

        if (VAR_11 != VAR_0) {
            return VAR_11;
        }

        VAR_9 += VAR_10;
    }

    VAR_13->pos = VAR_9;

    return VAR_0;
}
