
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_14__ {void* delay_pos; scalar_t__ pos; void* delay; scalar_t__ delay_count; } ;
struct TYPE_12__ {TYPE_2__* delays; int id; TYPE_6__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
struct TYPE_13__ {int sample_count; int sample_offset; } ;
typedef TYPE_5__ ngx_rtmp_mp4_delay_entry_t ;
typedef TYPE_6__ ngx_rtmp_mp4_cursor_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int entry_count; TYPE_5__* entries; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,void*,void*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,void*,void*,scalar_t__,void*,void*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_2, ngx_rtmp_mp4_track_t *VAR_3)
{
    ngx_rtmp_mp4_cursor_t *VAR_4;
    ngx_rtmp_mp4_delay_entry_t *VAR_5;
    uint32_t VAR_6, VAR_7;

    VAR_4 = &VAR_3->cursor;

    if (VAR_3->delays == ((void*)0)) {
        return VAR_1;
    }

    VAR_6 = 0;
    VAR_5 = VAR_3->delays->entries;

    while (VAR_4->delay_pos < FUNC_2(VAR_3->delays->entry_count)) {
        VAR_7 = FUNC_2(VAR_5->sample_count);

        if (VAR_6 + VAR_7 > VAR_4->pos) {
            VAR_4->delay_count = VAR_4->pos - VAR_6;
            VAR_4->delay = FUNC_2(VAR_5->sample_offset);
            break;
        }

        VAR_4->delay_pos++;
        VAR_6 += VAR_7;
        VAR_5++;
    }

    if (VAR_4->delay_pos >= FUNC_2(VAR_3->delays->entry_count)) {
        FUNC_0(VAR_0, VAR_2->connection->log, 0,
                "mp4: track#%ui seek delay[%ui/%uD] overflow",
                VAR_3->id, VAR_4->delay_pos,
                FUNC_2(VAR_3->delays->entry_count));

        return VAR_1;
    }

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "mp4: track#%ui seek delay[%ui/%uD][%ui/%uD]=%ui",
                   VAR_3->id, VAR_4->delay_pos,
                   FUNC_2(VAR_3->delays->entry_count),
                   VAR_4->delay_count,
                   FUNC_2(VAR_5->sample_count), VAR_4->delay);

    return VAR_1;
}
