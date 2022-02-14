
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int msec; scalar_t__ sec; } ;
typedef TYPE_2__ ngx_time_t ;
struct TYPE_25__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_30__ {scalar_t__ fd; scalar_t__ offset; } ;
struct TYPE_26__ {scalar_t__ nframes; int initialized; int aac_header_sent; int avc_header_sent; int video_key_sent; TYPE_8__ file; scalar_t__ time_shift; scalar_t__ epoch; int failed; TYPE_2__ last; TYPE_5__* conf; } ;
typedef TYPE_4__ ngx_rtmp_record_rec_ctx_t ;
struct TYPE_27__ {int flags; scalar_t__ interval; int id; } ;
typedef TYPE_5__ ngx_rtmp_record_app_conf_t ;
struct TYPE_28__ {scalar_t__ type; void* mlen; scalar_t__ timestamp; } ;
typedef TYPE_6__ ngx_rtmp_header_t ;
struct TYPE_29__ {scalar_t__ video_codec_id; scalar_t__ audio_codec_id; int * avc_header; int * aac_header; } ;
typedef TYPE_7__ ngx_rtmp_codec_ctx_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_23__ {scalar_t__ sec; int msec; } ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_21__* VAR_14 ;
 int FUNC_0 (int ,int ,int ,char*,int *) ;
 int VAR_15 ;
 TYPE_7__* FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,TYPE_6__*,int *,int) ;
 int FUNC_8 (TYPE_8__*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_16, ngx_rtmp_record_rec_ctx_t *VAR_17,
                        ngx_rtmp_header_t *VAR_18, ngx_chain_t *VAR_19)
{
    ngx_time_t VAR_20;
    ngx_rtmp_header_t VAR_21;
    ngx_rtmp_codec_ctx_t *VAR_22;
    ngx_int_t VAR_23, VAR_24;
    ngx_rtmp_record_app_conf_t *VAR_25;

    VAR_25 = VAR_17->conf;

    if (VAR_25->flags & VAR_10) {
        FUNC_5(VAR_16, VAR_17);
        return VAR_3;
    }

    VAR_23 = (VAR_18->type == VAR_6)
             ? (FUNC_2(VAR_19) == VAR_13)
             : 0;

    VAR_24 = (VAR_18->type == VAR_6)
             ? VAR_23
             : (VAR_25->flags & VAR_11) == 0;

    if (VAR_24 && (VAR_25->flags & VAR_9) == 0) {

        if (VAR_25->interval != (ngx_msec_t) VAR_0) {

            VAR_20 = VAR_17->last;
            VAR_20.msec += VAR_25->interval;
            VAR_20.sec += (VAR_20.msec / 1000);
            VAR_20.msec %= 1000;

            if (VAR_14->sec > VAR_20.sec ||
               (VAR_14->sec == VAR_20.sec &&
                VAR_14->msec > VAR_20.msec))
            {
                FUNC_5(VAR_16, VAR_17);
                FUNC_6(VAR_16, VAR_17);
            }

        } else if (!VAR_17->failed) {
            FUNC_6(VAR_16, VAR_17);
        }
    }

    if ((VAR_25->flags & VAR_9) &&
        !VAR_24 && VAR_17->nframes == 0)
    {
        return VAR_3;
    }

    if (VAR_17->file.fd == VAR_1) {
        return VAR_3;
    }

    if (VAR_18->type == VAR_5 &&
       (VAR_25->flags & VAR_7) == 0)
    {
        return VAR_3;
    }

    if (VAR_18->type == VAR_6 &&
       (VAR_25->flags & VAR_11) == 0 &&
       ((VAR_25->flags & VAR_8) == 0 || !VAR_23))
    {
        return VAR_3;
    }

    if (!VAR_17->initialized) {

        VAR_17->initialized = 1;
        VAR_17->epoch = VAR_18->timestamp - VAR_17->time_shift;

        if (VAR_17->file.offset == 0 &&
            FUNC_8(&VAR_17->file) != VAR_3)
        {
            FUNC_5(VAR_16, VAR_17);
            return VAR_3;
        }
    }

    VAR_22 = FUNC_1(VAR_16, VAR_15);
    if (VAR_22) {
        VAR_21 = *VAR_18;


        if (!VAR_17->aac_header_sent && VAR_22->aac_header &&
           (VAR_25->flags & VAR_7))
        {
            FUNC_0(VAR_2, VAR_16->connection->log, 0,
                           "record: %V writing AAC header", &VAR_25->id);

            VAR_21.type = VAR_5;
            VAR_21.mlen = FUNC_4(VAR_22->aac_header);

            if (FUNC_7(VAR_16, VAR_17, &VAR_21,
                                            VAR_22->aac_header, 0)
                != VAR_3)
            {
                return VAR_3;
            }

            VAR_17->aac_header_sent = 1;
        }


        if (!VAR_17->avc_header_sent && VAR_22->avc_header &&
           (VAR_25->flags & (VAR_11|
                            VAR_8)))
        {
            FUNC_0(VAR_2, VAR_16->connection->log, 0,
                           "record: %V writing AVC header", &VAR_25->id);

            VAR_21.type = VAR_6;
            VAR_21.mlen = FUNC_4(VAR_22->avc_header);

            if (FUNC_7(VAR_16, VAR_17, &VAR_21,
                                            VAR_22->avc_header, 0)
                != VAR_3)
            {
                return VAR_3;
            }

            VAR_17->avc_header_sent = 1;
        }
    }

    if (VAR_18->type == VAR_6) {
        if (VAR_22 && VAR_22->video_codec_id == VAR_12 &&
            !VAR_17->avc_header_sent)
        {
            FUNC_0(VAR_2, VAR_16->connection->log, 0,
                           "record: %V skipping until H264 header", &VAR_25->id);
            return VAR_3;
        }

        if (FUNC_2(VAR_19) == VAR_13 &&
            ((VAR_22 && VAR_22->video_codec_id != VAR_12) ||
             !FUNC_3(VAR_19)))
        {
            VAR_17->video_key_sent = 1;
        }

        if (!VAR_17->video_key_sent) {
            FUNC_0(VAR_2, VAR_16->connection->log, 0,
                           "record: %V skipping until keyframe", &VAR_25->id);
            return VAR_3;
        }

    } else {
        if (VAR_22 && VAR_22->audio_codec_id == VAR_4 &&
            !VAR_17->aac_header_sent)
        {
            FUNC_0(VAR_2, VAR_16->connection->log, 0,
                           "record: %V skipping until AAC header", &VAR_25->id);
            return VAR_3;
        }
    }

    return FUNC_7(VAR_16, VAR_17, VAR_18, VAR_19, 1);
}
