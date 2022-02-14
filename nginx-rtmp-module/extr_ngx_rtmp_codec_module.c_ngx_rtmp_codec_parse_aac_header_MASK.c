
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_14__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_15__ {int aac_profile; int sample_rate; int aac_chan_conf; int aac_ps; int aac_sbr; } ;
typedef TYPE_4__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_rtmp_bit_reader_t ;
struct TYPE_16__ {TYPE_1__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_13__ {int log; } ;
struct TYPE_12__ {int last; int pos; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,char*,TYPE_5__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_rtmp_codec_ctx_t *VAR_5;
    ngx_rtmp_bit_reader_t VAR_6;

    static ngx_uint_t VAR_7[] =
        { 96000, 88200, 64000, 48000,
          44100, 32000, 24000, 22050,
          16000, 12000, 11025, 8000,
           7350, 0, 0, 0 };





    VAR_5 = FUNC_4(VAR_2, VAR_1);

    FUNC_1(&VAR_6, VAR_3->buf->pos, VAR_3->buf->last);

    FUNC_2(&VAR_6, 16);

    VAR_5->aac_profile = (ngx_uint_t) FUNC_2(&VAR_6, 5);
    if (VAR_5->aac_profile == 31) {
        VAR_5->aac_profile = (ngx_uint_t) FUNC_2(&VAR_6, 6) + 32;
    }

    VAR_4 = (ngx_uint_t) FUNC_2(&VAR_6, 4);
    if (VAR_4 == 15) {
        VAR_5->sample_rate = (ngx_uint_t) FUNC_2(&VAR_6, 24);
    } else {
        VAR_5->sample_rate = VAR_7[VAR_4];
    }

    VAR_5->aac_chan_conf = (ngx_uint_t) FUNC_2(&VAR_6, 4);

    if (VAR_5->aac_profile == 5 || VAR_5->aac_profile == 29) {

        if (VAR_5->aac_profile == 29) {
            VAR_5->aac_ps = 1;
        }

        VAR_5->aac_sbr = 1;

        VAR_4 = (ngx_uint_t) FUNC_2(&VAR_6, 4);
        if (VAR_4 == 15) {
            VAR_5->sample_rate = (ngx_uint_t) FUNC_2(&VAR_6, 24);
        } else {
            VAR_5->sample_rate = VAR_7[VAR_4];
        }

        VAR_5->aac_profile = (ngx_uint_t) FUNC_2(&VAR_6, 5);
        if (VAR_5->aac_profile == 31) {
            VAR_5->aac_profile = (ngx_uint_t) FUNC_2(&VAR_6, 6) + 32;
        }
    }
    FUNC_0(VAR_0, VAR_2->connection->log, 0,
                   "codec: aac header profile=%ui, "
                   "sample_rate=%ui, chan_conf=%ui",
                   VAR_5->aac_profile, VAR_5->sample_rate, VAR_5->aac_chan_conf);
}
