
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_15__ {scalar_t__ chunk_pos; scalar_t__ chunk_count; scalar_t__ chunk; } ;
struct TYPE_14__ {TYPE_2__* chunks; int id; TYPE_5__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
typedef TYPE_5__ ngx_rtmp_mp4_cursor_t ;
struct TYPE_16__ {int samples_per_chunk; int first_chunk; } ;
typedef TYPE_6__ ngx_rtmp_mp4_chunk_entry_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int entry_count; TYPE_6__* entries; } ;
struct TYPE_11__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_3, ngx_rtmp_mp4_track_t *VAR_4)
{
    ngx_rtmp_mp4_cursor_t *VAR_5;
    ngx_rtmp_mp4_chunk_entry_t *VAR_6, *VAR_7;
    ngx_int_t VAR_8;

    if (VAR_4->chunks == ((void*)0)) {
        return VAR_2;
    }

    VAR_5 = &VAR_4->cursor;

    if (VAR_5->chunk_pos >= FUNC_3(VAR_4->chunks->entry_count)) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui chunk[%ui/%uD] overflow",
                       VAR_4->id, VAR_5->chunk_pos,
                       FUNC_3(VAR_4->chunks->entry_count));

        return VAR_0;
    }

    VAR_6 = &VAR_4->chunks->entries[VAR_5->chunk_pos];

    VAR_5->chunk_count++;

    if (VAR_5->chunk_count >= FUNC_3(VAR_6->samples_per_chunk)) {
        VAR_5->chunk_count = 0;
        VAR_5->chunk++;

        if (VAR_5->chunk_pos + 1 < FUNC_3(VAR_4->chunks->entry_count)) {
            VAR_7 = VAR_6 + 1;
            if (VAR_5->chunk >= FUNC_3(VAR_7->first_chunk)) {
                VAR_5->chunk_pos++;
                VAR_6 = VAR_7;
            }
        }

        VAR_8 = 1;

    } else {
        VAR_8 = 0;
    }

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "mp4: track#%ui chunk[%ui/%uD][%uD..%ui][%ui/%uD]",
                   VAR_4->id, VAR_5->chunk_pos,
                   FUNC_3(VAR_4->chunks->entry_count),
                   FUNC_3(VAR_6->first_chunk),
                   VAR_5->chunk, VAR_5->chunk_count,
                   FUNC_3(VAR_6->samples_per_chunk));


    if (VAR_8) {
        return FUNC_2(VAR_3, VAR_4);
    }

    return VAR_2;
}
