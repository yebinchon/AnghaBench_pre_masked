
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef char u_char ;
typedef int ngx_str_t ;
struct TYPE_8__ {int hs_old; TYPE_1__* connection; int hs_digest; scalar_t__ peer_epoch; TYPE_3__* hs_buf; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {char* pos; char* last; } ;
typedef TYPE_3__ ngx_buf_t ;
struct TYPE_7__ {int log; int pool; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,...) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,int,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,int *,int ,int ) ;
 int FUNC_6 (scalar_t__*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_5,
        ngx_str_t *VAR_6, ngx_str_t *VAR_7)
{
    ngx_buf_t *VAR_8;
    u_char *VAR_9;
    ngx_int_t VAR_10;

    VAR_8 = VAR_5->hs_buf;
    if (*VAR_8->pos != '\x03') {
        FUNC_2(VAR_2, VAR_5->connection->log, 0,
                "handshake: unexpected RTMP version: %i",
                (ngx_int_t)*VAR_8->pos);
        return VAR_0;
    }
    ++VAR_8->pos;
    VAR_5->peer_epoch = 0;
    FUNC_6(&VAR_5->peer_epoch, VAR_8->pos, 4);

    VAR_9 = VAR_8->pos + 4;
    FUNC_1(VAR_1, VAR_5->connection->log, 0,
            "handshake: peer version=%i.%i.%i.%i epoch=%uD",
            (ngx_int_t)VAR_9[3], (ngx_int_t)VAR_9[2],
            (ngx_int_t)VAR_9[1], (ngx_int_t)VAR_9[0],
            (uint32_t)VAR_5->peer_epoch);
    if (*(uint32_t *)VAR_9 == 0) {
        VAR_5->hs_old = 1;
        return VAR_3;
    }

    VAR_10 = FUNC_4(VAR_8, VAR_6, 772, VAR_5->connection->log);
    if (VAR_10 == VAR_0) {
        VAR_10 = FUNC_4(VAR_8, VAR_6, 8, VAR_5->connection->log);
    }
    if (VAR_10 == VAR_0) {
        FUNC_2(VAR_2, VAR_5->connection->log, 0,
                "handshake: digest not found");
        VAR_5->hs_old = 1;
        return VAR_3;
    }
    FUNC_0(VAR_1, VAR_5->connection->log, 0,
            "handshake: digest found at pos=%i", VAR_10);
    VAR_8->pos += VAR_10;
    VAR_8->last = VAR_8->pos + VAR_4;
    VAR_5->hs_digest = FUNC_3(VAR_5->connection->pool, VAR_4);
    if (FUNC_5(VAR_7, VAR_8, ((void*)0), VAR_5->hs_digest, VAR_5->connection->log)
            != VAR_3)
    {
        return VAR_0;
    }
    return VAR_3;
}
