
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_10__ {void* duration; void* time_scale; } ;
typedef TYPE_3__ ngx_rtmp_mp4_track_t ;
struct TYPE_11__ {TYPE_3__* track; } ;
typedef TYPE_4__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,void*,void*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_4, u_char *VAR_5, u_char *VAR_6)
{
    ngx_rtmp_mp4_ctx_t *VAR_7;
    ngx_rtmp_mp4_track_t *VAR_8;
    uint8_t VAR_9;

    VAR_7 = FUNC_1(VAR_4, VAR_3);

    if (VAR_7->track == ((void*)0)) {
        return VAR_2;
    }

    VAR_8 = VAR_7->track;

    if (VAR_5 + 1 > VAR_6) {
        return VAR_0;
    }

    VAR_9 = *(uint8_t *) VAR_5;

    switch (VAR_9) {
        case 0:
            if (VAR_5 + 20 > VAR_6) {
                return VAR_0;
            }

            VAR_5 += 12;
            VAR_8->time_scale = FUNC_2(*(uint32_t *) VAR_5);
            VAR_5 += 4;
            VAR_8->duration = FUNC_2(*(uint32_t *) VAR_5);
            break;

        case 1:
            if (VAR_5 + 28 > VAR_6) {
                return VAR_0;
            }

            VAR_5 += 20;
            VAR_8->time_scale = FUNC_2(*(uint32_t *) VAR_5);
            VAR_5 += 4;
            VAR_8->duration = FUNC_3(*(uint64_t *) VAR_5);
            break;

        default:
            return VAR_0;
    }

    FUNC_0(VAR_1, VAR_4->connection->log, 0,
                   "mp4: duration time_scale=%ui duration=%uL",
                   VAR_8->time_scale, VAR_8->duration);

    return VAR_2;
}
