
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ngx_uint_t ;
struct TYPE_26__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_27__ {scalar_t__ type; } ;
typedef TYPE_4__ ngx_rtmp_header_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
struct TYPE_28__ {int audio_codec_id; int audio_channels; int sample_size; scalar_t__ sample_rate; int video_codec_id; TYPE_6__* avc_header; TYPE_6__* aac_header; } ;
typedef TYPE_5__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_29__ {TYPE_2__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_25__ {int* last; int* pos; } ;
struct TYPE_24__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int ,int) ;
 TYPE_6__* FUNC_1 (int *,int *,TYPE_6__*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int VAR_6 ;
 int FUNC_4 (int *,TYPE_6__*) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;
 int * FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_7, ngx_rtmp_header_t *VAR_8,
        ngx_chain_t *VAR_9)
{
    ngx_rtmp_core_srv_conf_t *VAR_10;
    ngx_rtmp_codec_ctx_t *VAR_11;
    ngx_chain_t **VAR_12;
    uint8_t VAR_13;
    static ngx_uint_t VAR_14[] =
                                        { 5512, 11025, 22050, 44100 };

    if (VAR_8->type != VAR_2 && VAR_8->type != VAR_3) {
        return VAR_0;
    }

    VAR_11 = FUNC_5(VAR_7, VAR_5);
    if (VAR_11 == ((void*)0)) {
        VAR_11 = FUNC_0(VAR_7->connection->pool, sizeof(ngx_rtmp_codec_ctx_t));
        FUNC_8(VAR_7, VAR_11, VAR_5);
    }


    if (VAR_9->buf->last - VAR_9->buf->pos < 1) {
        return VAR_0;
    }

    VAR_13 = VAR_9->buf->pos[0];
    if (VAR_8->type == VAR_2) {
        VAR_11->audio_codec_id = (VAR_13 & 0xf0) >> 4;
        VAR_11->audio_channels = (VAR_13 & 0x01) + 1;
        VAR_11->sample_size = (VAR_13 & 0x02) ? 2 : 1;

        if (VAR_11->sample_rate == 0) {
            VAR_11->sample_rate = VAR_14[(VAR_13 & 0x0c) >> 2];
        }
    } else {
        VAR_11->video_codec_id = (VAR_13 & 0x0f);
    }


    if (VAR_9->buf->last - VAR_9->buf->pos < 3) {
        return VAR_0;
    }


    if (!FUNC_7(VAR_9)) {
        return VAR_0;
    }

    VAR_10 = FUNC_6(VAR_7, VAR_6);
    VAR_12 = ((void*)0);

    if (VAR_8->type == VAR_2) {
        if (VAR_11->audio_codec_id == VAR_1) {
            VAR_12 = &VAR_11->aac_header;
            FUNC_2(VAR_7, VAR_9);
        }
    } else {
        if (VAR_11->video_codec_id == VAR_4) {
            VAR_12 = &VAR_11->avc_header;
            FUNC_3(VAR_7, VAR_9);
        }
    }

    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    if (*VAR_12) {
        FUNC_4(VAR_10, *VAR_12);
    }

    *VAR_12 = FUNC_1(VAR_10, ((void*)0), VAR_9);

    return VAR_0;
}
