
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_11__ {void* timestamp; int duration; } ;
typedef TYPE_3__ ngx_rtmp_dash_frag_t ;
struct TYPE_10__ {scalar_t__ mdat_size; } ;
struct TYPE_9__ {scalar_t__ mdat_size; } ;
struct TYPE_12__ {int nfrags; int opened; TYPE_2__ video; TYPE_1__ audio; scalar_t__ has_audio; scalar_t__ has_video; } ;
typedef TYPE_4__ ngx_rtmp_dash_ctx_t ;
struct TYPE_13__ {int fraglen; } ;
typedef TYPE_5__ ngx_rtmp_dash_app_conf_t ;
typedef int ngx_int_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *,int ) ;
 TYPE_4__* FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_int_t VAR_3,
    uint32_t VAR_4)
{
    int32_t VAR_5;
    ngx_int_t VAR_6;
    ngx_rtmp_dash_ctx_t *VAR_7;
    ngx_rtmp_dash_frag_t *VAR_8;
    ngx_rtmp_dash_app_conf_t *VAR_9;

    VAR_9 = FUNC_3(VAR_2, VAR_1);
    VAR_7 = FUNC_4(VAR_2, VAR_1);
    VAR_8 = FUNC_1(VAR_2, VAR_7->nfrags);

    VAR_5 = (int32_t) (VAR_4 - VAR_8->timestamp);

    if (VAR_5 >= 0) {

        VAR_8->duration = VAR_4 - VAR_8->timestamp;
        VAR_6 = (VAR_8->duration >= VAR_9->fraglen);


        if (VAR_8->duration >= VAR_9->fraglen * 2) {
            VAR_3 = 1;
        }

    } else {



        VAR_6 = (-VAR_5 > 1000);
    }

    if (VAR_7->has_video && !VAR_6) {
        VAR_3 = 0;
    }

    if (!VAR_7->has_video && VAR_7->has_audio) {
        VAR_3 = VAR_6;
    }

    if (VAR_7->audio.mdat_size >= VAR_0) {
        VAR_3 = 1;
    }

    if (VAR_7->video.mdat_size >= VAR_0) {
        VAR_3 = 1;
    }

    if (!VAR_7->opened) {
        VAR_3 = 1;
    }

    if (VAR_3) {
        FUNC_0(VAR_2);
        FUNC_2(VAR_2);

        VAR_8 = FUNC_1(VAR_2, VAR_7->nfrags);
        VAR_8->timestamp = VAR_4;
    }
}
