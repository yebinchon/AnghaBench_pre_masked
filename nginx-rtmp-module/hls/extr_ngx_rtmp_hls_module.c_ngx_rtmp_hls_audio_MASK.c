
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_23__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_24__ {int aframe_num; int aframe_pts; int aframe_base; TYPE_9__* aframe; } ;
typedef TYPE_4__ ngx_rtmp_hls_ctx_t ;
struct TYPE_25__ {int audio_buffer_size; scalar_t__ sync; int hls; } ;
typedef TYPE_5__ ngx_rtmp_hls_app_conf_t ;
struct TYPE_26__ {int mlen; scalar_t__ timestamp; } ;
typedef TYPE_6__ ngx_rtmp_header_t ;
struct TYPE_27__ {scalar_t__ audio_codec_id; int sample_rate; int * avc_header; int * aac_header; } ;
typedef TYPE_7__ ngx_rtmp_codec_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {TYPE_1__* buf; struct TYPE_28__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_29__ {int* start; int* end; int* pos; int* last; } ;
typedef TYPE_9__ ngx_buf_t ;
typedef int int64_t ;
struct TYPE_22__ {int log; int pool; } ;
struct TYPE_21__ {size_t last; size_t pos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* FUNC_0 (int*,size_t,size_t) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,int,int) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int* FUNC_5 (int ,int) ;
 TYPE_9__* FUNC_6 (int ,int) ;
 int VAR_5 ;
 TYPE_5__* FUNC_7 (TYPE_3__*,int ) ;
 void* FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (TYPE_3__*,int*,int*,int*) ;
 int FUNC_11 (TYPE_3__*,int,int ,int) ;
 scalar_t__ FUNC_12 (TYPE_8__*) ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_rtmp_session_t *VAR_7, ngx_rtmp_header_t *VAR_8,
    ngx_chain_t *VAR_9)
{
    ngx_rtmp_hls_app_conf_t *VAR_10;
    ngx_rtmp_hls_ctx_t *VAR_11;
    ngx_rtmp_codec_ctx_t *VAR_12;
    uint64_t VAR_13, VAR_14;
    int64_t VAR_15;
    size_t VAR_16;
    ngx_buf_t *VAR_17;
    u_char *VAR_18;
    ngx_uint_t VAR_19, VAR_20, VAR_21, VAR_22;

    VAR_10 = FUNC_7(VAR_7, VAR_6);

    VAR_11 = FUNC_8(VAR_7, VAR_6);

    VAR_12 = FUNC_8(VAR_7, VAR_5);

    if (VAR_10 == ((void*)0) || !VAR_10->hls || VAR_11 == ((void*)0) ||
        VAR_12 == ((void*)0) || VAR_8->mlen < 2)
    {
        return VAR_3;
    }

    if (VAR_12->audio_codec_id != VAR_4 ||
        VAR_12->aac_header == ((void*)0) || FUNC_12(VAR_9))
    {
        return VAR_3;
    }

    VAR_17 = VAR_11->aframe;

    if (VAR_17 == ((void*)0)) {

        VAR_17 = FUNC_6(VAR_7->connection->pool, sizeof(ngx_buf_t));
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        VAR_11->aframe = VAR_17;

        VAR_17->start = FUNC_5(VAR_7->connection->pool, VAR_10->audio_buffer_size);
        if (VAR_17->start == ((void*)0)) {
            return VAR_0;
        }

        VAR_17->end = VAR_17->start + VAR_10->audio_buffer_size;
        VAR_17->pos = VAR_17->last = VAR_17->start;
    }

    VAR_22 = VAR_8->mlen - 2 + 7;
    VAR_13 = (uint64_t) VAR_8->timestamp * 90;

    if (VAR_17->start + VAR_22 > VAR_17->end) {
        FUNC_4(VAR_2, VAR_7->connection->log, 0,
                      "hls: too big audio frame");
        return VAR_3;
    }







    FUNC_11(VAR_7, VAR_13, VAR_12->avc_header == ((void*)0), 2);

    if (VAR_17->last + VAR_22 > VAR_17->end) {
        FUNC_9(VAR_7);
    }

    FUNC_2(VAR_1, VAR_7->connection->log, 0,
                   "hls: audio pts=%uL", VAR_13);

    if (VAR_17->last + 7 > VAR_17->end) {
        FUNC_1(VAR_1, VAR_7->connection->log, 0,
                       "hls: not enough buffer for audio header");
        return VAR_3;
    }

    VAR_18 = VAR_17->last;
    VAR_17->last += 5;



    for (; VAR_9 && VAR_17->last < VAR_17->end; VAR_9 = VAR_9->next) {

        VAR_16 = VAR_9->buf->last - VAR_9->buf->pos;
        if (VAR_17->last + VAR_16 > VAR_17->end) {
            VAR_16 = VAR_17->end - VAR_17->last;
        }

        VAR_17->last = FUNC_0(VAR_17->last, VAR_9->buf->pos, VAR_16);
    }



    if (FUNC_10(VAR_7, &VAR_19, &VAR_20, &VAR_21)
        != VAR_3)
    {
        FUNC_4(VAR_2, VAR_7->connection->log, 0,
                      "hls: aac header error");
        return VAR_3;
    }



    VAR_18[0] = 0xff;
    VAR_18[1] = 0xf1;
    VAR_18[2] = (u_char) (((VAR_19 - 1) << 6) | (VAR_20 << 2) |
                     ((VAR_21 & 0x04) >> 2));
    VAR_18[3] = (u_char) (((VAR_21 & 0x03) << 6) | ((VAR_22 >> 11) & 0x03));
    VAR_18[4] = (u_char) (VAR_22 >> 3);
    VAR_18[5] = (u_char) ((VAR_22 << 5) | 0x1f);
    VAR_18[6] = 0xfc;

    if (VAR_18 != VAR_17->start) {
        VAR_11->aframe_num++;
        return VAR_3;
    }

    VAR_11->aframe_pts = VAR_13;

    if (!VAR_10->sync || VAR_12->sample_rate == 0) {
        return VAR_3;
    }






    VAR_14 = VAR_11->aframe_base + VAR_11->aframe_num * 90000 * 1024 /
                                 VAR_12->sample_rate;
    VAR_15 = (int64_t) (VAR_14 - VAR_13);

    FUNC_3(VAR_1, VAR_7->connection->log, 0,
                   "hls: audio sync dpts=%L (%.5fs)",
                   VAR_15, VAR_15 / 90000.);

    if (VAR_15 <= (int64_t) VAR_10->sync * 90 &&
        VAR_15 >= (int64_t) VAR_10->sync * -90)
    {
        VAR_11->aframe_num++;
        VAR_11->aframe_pts = VAR_14;
        return VAR_3;
    }

    VAR_11->aframe_base = VAR_13;
    VAR_11->aframe_num = 1;

    FUNC_3(VAR_1, VAR_7->connection->log, 0,
                   "hls: audio sync gap dpts=%L (%.5fs)",
                   VAR_15, VAR_15 / 90000.);

    return VAR_3;
}
