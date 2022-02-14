
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


struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_14__ {scalar_t__ delay_pos; scalar_t__ delay_count; scalar_t__ delay; } ;
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
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_2, ngx_rtmp_mp4_track_t *VAR_3)
{
    ngx_rtmp_mp4_cursor_t *VAR_4;
    ngx_rtmp_mp4_delay_entry_t *VAR_5;

    VAR_4 = &VAR_3->cursor;

    if (VAR_3->delays == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_4->delay_pos >= FUNC_2(VAR_3->delays->entry_count)) {
        FUNC_0(VAR_0, VAR_2->connection->log, 0,
                "mp4: track#%ui delay[%ui/%uD] overflow",
                VAR_3->id, VAR_4->delay_pos,
                FUNC_2(VAR_3->delays->entry_count));

        return VAR_1;
    }

    VAR_4->delay_count++;
    VAR_5 = &VAR_3->delays->entries[VAR_4->delay_pos];

    if (VAR_4->delay_count >= FUNC_2(VAR_5->sample_count)) {
        VAR_4->delay_pos++;
        VAR_5++;
        VAR_4->delay_count = 0;
    }

    if (VAR_4->delay_pos >= FUNC_2(VAR_3->delays->entry_count)) {
        FUNC_0(VAR_0, VAR_2->connection->log, 0,
                "mp4: track#%ui delay[%ui/%uD] overflow",
                VAR_3->id, VAR_4->delay_pos,
                FUNC_2(VAR_3->delays->entry_count));

        return VAR_1;
    }

    VAR_4->delay = FUNC_2(VAR_5->sample_offset);

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "mp4: track#%ui delay[%ui/%uD][%ui/%uD]=%ui",
                   VAR_3->id, VAR_4->delay_pos,
                   FUNC_2(VAR_3->delays->entry_count),
                   VAR_4->delay_count,
                   FUNC_2(VAR_5->sample_count), VAR_4->delay);

    return VAR_1;
}
