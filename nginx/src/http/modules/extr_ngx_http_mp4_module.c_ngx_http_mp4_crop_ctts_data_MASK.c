
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
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_11__ {int count; int offset; } ;
typedef TYPE_3__ ngx_mp4_ctts_entry_t ;
struct TYPE_12__ {scalar_t__ start_sample; scalar_t__ end_sample; int composition_offset_entries; TYPE_1__* out; } ;
typedef TYPE_4__ ngx_http_mp4_trak_t ;
struct TYPE_10__ {int log; } ;
struct TYPE_13__ {TYPE_2__ file; scalar_t__ length; } ;
typedef TYPE_5__ ngx_http_mp4_file_t ;
struct TYPE_14__ {int * last; int * pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_9__ {TYPE_6__* buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(ngx_http_mp4_file_t *VAR_2,
    ngx_http_mp4_trak_t *VAR_3, ngx_uint_t VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7;
    ngx_buf_t *VAR_8;
    ngx_uint_t VAR_9;
    ngx_mp4_ctts_entry_t *VAR_10, *VAR_11;



    if (VAR_4) {
        VAR_6 = VAR_3->start_sample + 1;

        FUNC_0(VAR_1, VAR_2->file.log, 0,
                       "mp4 ctts crop start_sample:%uD", VAR_6);

    } else if (VAR_2->length) {
        VAR_6 = VAR_3->end_sample - VAR_3->start_sample + 1;

        FUNC_0(VAR_1, VAR_2->file.log, 0,
                       "mp4 ctts crop end_sample:%uD", VAR_6);

    } else {
        return;
    }

    VAR_8 = VAR_3->out[VAR_0].buf;

    VAR_9 = VAR_3->composition_offset_entries;
    VAR_10 = (ngx_mp4_ctts_entry_t *) VAR_8->pos;
    VAR_11 = (ngx_mp4_ctts_entry_t *) VAR_8->last;

    while (VAR_10 < VAR_11) {
        VAR_5 = FUNC_2(VAR_10->count);

        FUNC_1(VAR_1, VAR_2->file.log, 0,
                       "sample:%uD, count:%uD, offset:%uD",
                       VAR_6, VAR_5, FUNC_2(VAR_10->offset));

        if (VAR_6 <= VAR_5) {
            VAR_7 = VAR_6 - 1;
            goto found;
        }

        VAR_6 -= VAR_5;
        VAR_9--;
        VAR_10++;
    }

    if (VAR_4) {
        VAR_8->pos = (u_char *) VAR_11;
        VAR_3->composition_offset_entries = 0;
    }

    return;

found:

    if (VAR_4) {
        FUNC_3(VAR_10->count, VAR_5 - VAR_7);
        VAR_8->pos = (u_char *) VAR_10;
        VAR_3->composition_offset_entries = VAR_9;

    } else {
        FUNC_3(VAR_10->count, VAR_7);
        VAR_8->last = (u_char *) (VAR_10 + 1);
        VAR_3->composition_offset_entries -= VAR_9 - 1;
    }
}
