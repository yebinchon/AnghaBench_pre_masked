
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ngx_uint_t ;
struct TYPE_18__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_19__ {int duration; } ;
typedef TYPE_3__ ngx_rtmp_hls_frag_t ;
struct TYPE_20__ {int frag_ts; int aframe_pts; scalar_t__ opened; TYPE_6__* aframe; int nfrags; } ;
typedef TYPE_4__ ngx_rtmp_hls_ctx_t ;
struct TYPE_21__ {int slicing; int fraglen; scalar_t__ max_audio_delay; scalar_t__ max_fraglen; } ;
typedef TYPE_5__ ngx_rtmp_hls_app_conf_t ;
typedef int ngx_msec_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {scalar_t__ last; scalar_t__ pos; } ;
typedef TYPE_6__ ngx_buf_t ;
typedef int int64_t ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ,char*,int) ;
 TYPE_5__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_7(ngx_rtmp_session_t *VAR_2, uint64_t VAR_3,
    ngx_int_t VAR_4, ngx_uint_t VAR_5)
{
    ngx_rtmp_hls_ctx_t *VAR_6;
    ngx_rtmp_hls_app_conf_t *VAR_7;
    ngx_rtmp_hls_frag_t *VAR_8;
    ngx_msec_t VAR_9;
    ngx_int_t VAR_10, VAR_11,VAR_12;
    ngx_buf_t *VAR_13;
    int64_t VAR_14;

    VAR_7 = FUNC_1(VAR_2, VAR_1);
    VAR_6 = FUNC_2(VAR_2, VAR_1);
    VAR_8 = ((void*)0);
    VAR_11 = 0;
    VAR_12 = 1;

    if (VAR_6->opened) {
        VAR_8 = FUNC_5(VAR_2, VAR_6->nfrags);
        VAR_14 = (int64_t) (VAR_3 - VAR_6->frag_ts);

        if (VAR_14 > (int64_t) VAR_7->max_fraglen * 90 || VAR_14 < -90000) {
            FUNC_0(VAR_0, VAR_2->connection->log, 0,
                          "hls: force fragment split: %.3f sec, ", VAR_14 / 90000.);
            VAR_11 = 1;

        } else {
            VAR_8->duration = (VAR_3 - VAR_6->frag_ts) / 90000.;
            VAR_12 = 0;
        }
    }

    switch (VAR_7->slicing) {
        case 128:
            if (VAR_8 && VAR_8->duration < VAR_7->fraglen / 1000.) {
                VAR_4 = 0;
            }
            break;

        case 129:

            VAR_9 = VAR_7->fraglen * 90;
            VAR_10 = VAR_6->frag_ts / VAR_9 == VAR_3 / VAR_9;

            if (VAR_8 && VAR_10) {
                VAR_4 = 0;
            }

            if (VAR_8 == ((void*)0) && (VAR_6->frag_ts == 0 || VAR_10)) {
                VAR_6->frag_ts = VAR_3;
                VAR_4 = 0;
            }

            break;
    }

    if (VAR_4 || VAR_11) {
        FUNC_3(VAR_2);
        FUNC_6(VAR_2, VAR_3, VAR_12);
    }

    VAR_13 = VAR_6->aframe;
    if (VAR_6->opened && VAR_13 && VAR_13->last > VAR_13->pos &&
        VAR_6->aframe_pts + (uint64_t) VAR_7->max_audio_delay * 90 / VAR_5
        < VAR_3)
    {
        FUNC_4(VAR_2);
    }
}
