
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_12__ {int key; scalar_t__ key_pos; scalar_t__ pos; } ;
struct TYPE_11__ {TYPE_2__* keys; int id; TYPE_5__ cursor; } ;
typedef TYPE_4__ ngx_rtmp_mp4_track_t ;
typedef TYPE_5__ ngx_rtmp_mp4_cursor_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int entry_count; int * entries; } ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ,size_t,scalar_t__,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_2, ngx_rtmp_mp4_track_t *VAR_3)
{
    ngx_rtmp_mp4_cursor_t *VAR_4;
    uint32_t *VAR_5;

    VAR_4 = &VAR_3->cursor;

    if (VAR_3->keys == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_4->key) {
        VAR_4->key_pos++;
    }

    if (VAR_4->key_pos >= FUNC_2(VAR_3->keys->entry_count)) {
        FUNC_0(VAR_0, VAR_2->connection->log, 0,
                "mp4: track#%ui key[%ui/%uD] overflow",
                VAR_3->id, VAR_4->key_pos,
                FUNC_2(VAR_3->keys->entry_count));

        VAR_4->key = 0;

        return VAR_1;
    }

    VAR_5 = &VAR_3->keys->entries[VAR_4->key_pos];
    VAR_4->key = (VAR_4->pos + 1 == FUNC_2(*VAR_5));

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "mp4: track#%ui key[%ui/%uD][%ui/%uD]=%s",
                   VAR_3->id, VAR_4->key_pos,
                   FUNC_2(VAR_3->keys->entry_count),
                   VAR_4->pos, FUNC_2(*VAR_5),
                   VAR_4->key ? "match" : "miss");

    return VAR_1;
}
