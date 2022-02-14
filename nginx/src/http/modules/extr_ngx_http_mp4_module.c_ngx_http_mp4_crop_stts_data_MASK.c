
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_13__ {int count; int duration; } ;
typedef TYPE_4__ ngx_mp4_stts_entry_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int timescale; int time_to_sample_entries; int end_sample; int start_sample; TYPE_1__* out; } ;
typedef TYPE_5__ ngx_http_mp4_trak_t ;
struct TYPE_11__ {int data; } ;
struct TYPE_12__ {int log; TYPE_2__ name; } ;
struct TYPE_15__ {int start; int length; TYPE_3__ file; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
struct TYPE_16__ {int * last; int * pos; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_10__ {TYPE_7__* buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,int,int) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_mp4_file_t *VAR_5,
    ngx_http_mp4_trak_t *VAR_6, ngx_uint_t VAR_7)
{
    uint32_t VAR_8, VAR_9, VAR_10;
    uint64_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_uint_t VAR_13, VAR_14, VAR_15;
    ngx_mp4_stts_entry_t *VAR_16, *VAR_17;

    if (VAR_7) {
        VAR_15 = VAR_5->start;

        FUNC_0(VAR_2, VAR_5->file.log, 0,
                       "mp4 stts crop start_time:%ui", VAR_15);

    } else if (VAR_5->length) {
        VAR_15 = VAR_5->length;

        FUNC_0(VAR_2, VAR_5->file.log, 0,
                       "mp4 stts crop end_time:%ui", VAR_15);

    } else {
        return VAR_4;
    }

    VAR_12 = VAR_6->out[VAR_1].buf;

    VAR_11 = (uint64_t) VAR_15 * VAR_6->timescale / 1000;

    VAR_14 = VAR_6->time_to_sample_entries;
    VAR_13 = 0;
    VAR_16 = (ngx_mp4_stts_entry_t *) VAR_12->pos;
    VAR_17 = (ngx_mp4_stts_entry_t *) VAR_12->last;

    while (VAR_16 < VAR_17) {
        VAR_8 = FUNC_4(VAR_16->count);
        VAR_9 = FUNC_4(VAR_16->duration);

        FUNC_2(VAR_2, VAR_5->file.log, 0,
                       "time:%uL, count:%uD, duration:%uD",
                       VAR_11, VAR_8, VAR_9);

        if (VAR_11 < (uint64_t) VAR_8 * VAR_9) {
            VAR_13 += (ngx_uint_t) (VAR_11 / VAR_9);
            VAR_10 = (uint32_t) (VAR_11 / VAR_9);
            goto found;
        }

        VAR_13 += VAR_8;
        VAR_11 -= VAR_8 * VAR_9;
        VAR_14--;
        VAR_16++;
    }

    if (VAR_7) {
        FUNC_3(VAR_3, VAR_5->file.log, 0,
                      "start time is out mp4 stts samples in \"%s\"",
                      VAR_5->file.name.data);

        return VAR_0;

    } else {
        VAR_6->end_sample = VAR_6->start_sample + VAR_13;

        FUNC_0(VAR_2, VAR_5->file.log, 0,
                       "end_sample:%ui", VAR_6->end_sample);

        return VAR_4;
    }

found:

    if (VAR_7) {
        FUNC_5(VAR_16->count, VAR_8 - VAR_10);
        VAR_12->pos = (u_char *) VAR_16;
        VAR_6->time_to_sample_entries = VAR_14;
        VAR_6->start_sample = VAR_13;

        FUNC_1(VAR_2, VAR_5->file.log, 0,
                       "start_sample:%ui, new count:%uD",
                       VAR_6->start_sample, VAR_8 - VAR_10);

    } else {
        FUNC_5(VAR_16->count, VAR_10);
        VAR_12->last = (u_char *) (VAR_16 + 1);
        VAR_6->time_to_sample_entries -= VAR_14 - 1;
        VAR_6->end_sample = VAR_6->start_sample + VAR_13;

        FUNC_1(VAR_2, VAR_5->file.log, 0,
                       "end_sample:%ui, new count:%uD",
                       VAR_6->end_sample, VAR_10);
    }

    return VAR_4;
}
