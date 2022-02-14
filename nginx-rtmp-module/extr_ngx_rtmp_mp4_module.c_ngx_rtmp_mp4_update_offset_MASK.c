
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


typedef void* off_t ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {TYPE_2__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_14__ {int chunk; void* offset; scalar_t__ size; } ;
struct TYPE_13__ {TYPE_3__* offsets; int id; TYPE_1__* offsets64; TYPE_6__ cursor; } ;
typedef TYPE_5__ ngx_rtmp_mp4_track_t ;
typedef TYPE_6__ ngx_rtmp_mp4_cursor_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {int entry_count; int * entries; } ;
struct TYPE_10__ {int log; } ;
struct TYPE_9__ {int * entries; int entry_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int,size_t) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int,size_t,void*) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_3, ngx_rtmp_mp4_track_t *VAR_4)
{
    ngx_rtmp_mp4_cursor_t *VAR_5;
    ngx_uint_t VAR_6;

    VAR_5 = &VAR_4->cursor;

    if (VAR_5->chunk < 1) {
        FUNC_0(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui offset[%ui] underflow",
                       VAR_4->id, VAR_5->chunk);
        return VAR_0;
    }

    VAR_6 = VAR_5->chunk - 1;

    if (VAR_4->offsets) {
        if (VAR_6 >= FUNC_3(VAR_4->offsets->entry_count)) {
            FUNC_1(VAR_1, VAR_3->connection->log, 0,
                           "mp4: track#%ui offset[%ui/%uD] overflow",
                           VAR_4->id, VAR_5->chunk,
                           FUNC_3(VAR_4->offsets->entry_count));

            return VAR_0;
        }

        VAR_5->offset = (off_t) FUNC_3(VAR_4->offsets->entries[VAR_6]);
        VAR_5->size = 0;

        FUNC_2(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui offset[%ui/%uD]=%O",
                       VAR_4->id, VAR_5->chunk,
                       FUNC_3(VAR_4->offsets->entry_count),
                       VAR_5->offset);

        return VAR_2;
    }

    if (VAR_4->offsets64) {
        if (VAR_6 >= FUNC_3(VAR_4->offsets64->entry_count)) {
            FUNC_1(VAR_1, VAR_3->connection->log, 0,
                           "mp4: track#%ui offset64[%ui/%uD] overflow",
                           VAR_4->id, VAR_5->chunk,
                           FUNC_3(VAR_4->offsets->entry_count));

            return VAR_0;
        }

        VAR_5->offset = (off_t) FUNC_4(VAR_4->offsets64->entries[VAR_6]);
        VAR_5->size = 0;

        FUNC_2(VAR_1, VAR_3->connection->log, 0,
                       "mp4: track#%ui offset64[%ui/%uD]=%O",
                       VAR_4->id, VAR_5->chunk,
                       FUNC_3(VAR_4->offsets->entry_count),
                       VAR_5->offset);

        return VAR_2;
    }

    return VAR_0;
}
