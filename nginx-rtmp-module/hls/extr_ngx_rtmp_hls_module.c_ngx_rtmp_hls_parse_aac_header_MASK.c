
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
typedef int ngx_uint_t ;
struct TYPE_13__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_14__ {TYPE_5__* aac_header; } ;
typedef TYPE_4__ ngx_rtmp_codec_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_1__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_12__ {int log; } ;
struct TYPE_11__ {int* pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int*,int**,int,TYPE_5__**) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_4, ngx_uint_t *VAR_5,
    ngx_uint_t *VAR_6, ngx_uint_t *VAR_7)
{
    ngx_rtmp_codec_ctx_t *VAR_8;
    ngx_chain_t *VAR_9;
    u_char *VAR_10, VAR_11, VAR_12;

    VAR_8 = FUNC_2(VAR_4, VAR_3);

    VAR_9 = VAR_8->aac_header;

    VAR_10 = VAR_9->buf->pos;

    if (FUNC_3(VAR_4, ((void*)0), &VAR_10, 2, &VAR_9) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_3(VAR_4, &VAR_11, &VAR_10, 1, &VAR_9) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_3(VAR_4, &VAR_12, &VAR_10, 1, &VAR_9) != VAR_2) {
        return VAR_0;
    }

    *VAR_5 = VAR_11 >> 3;
    if (*VAR_5 == 0 || *VAR_5 == 0x1f) {
        FUNC_0(VAR_1, VAR_4->connection->log, 0,
                       "hls: unsupported adts object type:%ui", *VAR_5);
        return VAR_0;
    }

    if (*VAR_5 > 4) {






        *VAR_5 = 2;
    }

    *VAR_6 = ((VAR_11 << 1) & 0x0f) | ((VAR_12 & 0x80) >> 7);
    if (*VAR_6 == 0x0f) {
        FUNC_0(VAR_1, VAR_4->connection->log, 0,
                       "hls: unsupported adts sample rate:%ui", *VAR_6);
        return VAR_0;
    }

    *VAR_7 = (VAR_12 >> 3) & 0x0f;

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "hls: aac object_type:%ui, sample_rate_index:%ui, "
                   "channel_config:%ui", *VAR_5, *VAR_6, *VAR_7);

    return VAR_2;
}
