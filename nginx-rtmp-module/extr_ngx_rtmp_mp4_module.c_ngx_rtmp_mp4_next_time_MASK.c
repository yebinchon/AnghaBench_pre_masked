
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
struct TYPE_14__ {scalar_t__ time_pos; int not_first; scalar_t__ time_count; int pos; int timestamp; int last_timestamp; } ;
struct TYPE_12__ {TYPE_2__* times; int id; TYPE_6__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
struct TYPE_13__ {int sample_count; int sample_delta; } ;
typedef TYPE_5__ ngx_rtmp_mp4_time_entry_t ;
typedef TYPE_6__ ngx_rtmp_mp4_cursor_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int entry_count; TYPE_5__* entries; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ,size_t,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, ngx_rtmp_mp4_track_t *VAR_4)
{
    ngx_rtmp_mp4_cursor_t *VAR_5;
    ngx_rtmp_mp4_time_entry_t *VAR_6;

    if (VAR_4->times == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = &VAR_4->cursor;

    if (VAR_5->time_pos >= FUNC_2(VAR_4->times->entry_count)) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui time[%ui/%uD] overflow",
                       VAR_4->id, VAR_5->time_pos,
                       FUNC_2(VAR_4->times->entry_count));

        return VAR_0;
    }

    VAR_6 = &VAR_4->times->entries[VAR_5->time_pos];

    VAR_5->last_timestamp = VAR_5->timestamp;
    VAR_5->timestamp += FUNC_2(VAR_6->sample_delta);

    VAR_5->not_first = 1;

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "mp4: track#%ui time[%ui] [%ui/%uD][%ui/%uD]=%uD t=%uD",
                   VAR_4->id, VAR_5->pos, VAR_5->time_pos,
                   FUNC_2(VAR_4->times->entry_count),
                   VAR_5->time_count, FUNC_2(VAR_6->sample_count),
                   FUNC_2(VAR_6->sample_delta),
                   VAR_5->timestamp);

    VAR_5->time_count++;
    VAR_5->pos++;

    if (VAR_5->time_count >= FUNC_2(VAR_6->sample_count)) {
        VAR_5->time_pos++;
        VAR_5->time_count = 0;
    }

    return VAR_2;
}
