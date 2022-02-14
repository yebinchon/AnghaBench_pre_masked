
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
struct TYPE_14__ {scalar_t__ time_pos; scalar_t__ timestamp; scalar_t__ time_count; scalar_t__ pos; } ;
struct TYPE_12__ {TYPE_2__* times; int id; TYPE_6__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
struct TYPE_13__ {scalar_t__ sample_delta; scalar_t__ sample_count; } ;
typedef TYPE_5__ ngx_rtmp_mp4_time_entry_t ;
typedef TYPE_6__ ngx_rtmp_mp4_cursor_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {scalar_t__ entry_count; TYPE_5__* entries; } ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, ngx_rtmp_mp4_track_t *VAR_4,
                       uint32_t VAR_5)
{
    ngx_rtmp_mp4_cursor_t *VAR_6;
    ngx_rtmp_mp4_time_entry_t *VAR_7;
    uint32_t VAR_8;

    if (VAR_4->times == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = &VAR_4->cursor;

    VAR_7 = VAR_4->times->entries;

    while (VAR_6->time_pos < FUNC_2(VAR_4->times->entry_count)) {
        VAR_8 = FUNC_2(VAR_7->sample_delta) * FUNC_2(VAR_7->sample_count);

        if (VAR_6->timestamp + VAR_8 >= VAR_5) {
            if (VAR_7->sample_delta == 0) {
                return VAR_0;
            }

            VAR_6->time_count = (VAR_5 - VAR_6->timestamp) /
                             FUNC_2(VAR_7->sample_delta);
            VAR_6->timestamp += FUNC_2(VAR_7->sample_delta) * VAR_6->time_count;
            VAR_6->pos += VAR_6->time_count;

            break;
        }

        VAR_6->timestamp += VAR_8;
        VAR_6->pos += FUNC_2(VAR_7->sample_count);
        VAR_6->time_pos++;
        VAR_7++;
    }

    if (VAR_6->time_pos >= FUNC_2(VAR_4->times->entry_count)) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui seek time[%ui/%uD] overflow",
                       VAR_4->id, VAR_6->time_pos,
                       FUNC_2(VAR_4->times->entry_count));

        return VAR_0;
    }

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "mp4: track#%ui seek time[%ui] [%ui/%uD][%ui/%uD]=%uD "
                   "t=%uD",
                   VAR_4->id, VAR_6->pos, VAR_6->time_pos,
                   FUNC_2(VAR_4->times->entry_count),
                   VAR_6->time_count,
                   FUNC_2(VAR_7->sample_count),
                   FUNC_2(VAR_7->sample_delta),
                   VAR_6->timestamp);

    return VAR_2;
}
