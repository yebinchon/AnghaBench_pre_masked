
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


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_13__ {int id; int samples; int chunk; } ;
typedef TYPE_4__ ngx_mp4_stsc_entry_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int temporary; int * last; int * pos; } ;
struct TYPE_14__ {int sample_to_chunk_entries; int chunks; int start_chunk; int start_chunk_samples; int end_chunk_samples; int end_chunk; TYPE_1__* out; TYPE_7__ stsc_end_chunk_buf; TYPE_4__ stsc_end_chunk_entry; TYPE_7__ stsc_start_chunk_buf; TYPE_4__ stsc_start_chunk_entry; scalar_t__ start_sample; scalar_t__ end_sample; } ;
typedef TYPE_5__ ngx_http_mp4_trak_t ;
struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int log; TYPE_3__ name; } ;
struct TYPE_15__ {TYPE_2__ file; scalar_t__ length; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_10__ {TYPE_7__* buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,int,int,int) ;
 int FUNC_3 (int ,int ,int ,char*,int,int,int,int,int) ;
 int FUNC_4 (int ,int ,int ,char*,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_mp4_file_t *VAR_7,
    ngx_http_mp4_trak_t *VAR_8, ngx_uint_t VAR_9)
{
    uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
                           VAR_16;
    ngx_buf_t *VAR_17, *VAR_18;
    ngx_uint_t VAR_19, VAR_20, VAR_21;
    ngx_mp4_stsc_entry_t *VAR_22, *VAR_23, *VAR_24;

    VAR_19 = VAR_8->sample_to_chunk_entries - 1;

    if (VAR_9) {
        VAR_10 = (uint32_t) VAR_8->start_sample;

        FUNC_0(VAR_4, VAR_7->file.log, 0,
                       "mp4 stsc crop start_sample:%uD", VAR_10);

    } else if (VAR_7->length) {
        VAR_10 = (uint32_t) (VAR_8->end_sample - VAR_8->start_sample);
        VAR_12 = 0;

        VAR_17 = VAR_8->out[VAR_3].buf;

        if (VAR_17) {
            VAR_22 = (ngx_mp4_stsc_entry_t *) VAR_17->pos;
            VAR_12 = FUNC_5(VAR_22->samples);
            VAR_19--;

            if (VAR_12 > VAR_10) {
                VAR_12 = VAR_10;
                FUNC_6(VAR_22->samples, VAR_12);
            }

            VAR_10 -= VAR_12;
        }

        FUNC_1(VAR_4, VAR_7->file.log, 0,
                       "mp4 stsc crop end_sample:%uD, ext_samples:%uD",
                       VAR_10, VAR_12);

    } else {
        return VAR_6;
    }

    VAR_17 = VAR_8->out[VAR_1].buf;

    VAR_22 = (ngx_mp4_stsc_entry_t *) VAR_17->pos;
    VAR_23 = (ngx_mp4_stsc_entry_t *) VAR_17->last;

    VAR_11 = FUNC_5(VAR_22->chunk);
    VAR_12 = FUNC_5(VAR_22->samples);
    VAR_13 = FUNC_5(VAR_22->id);
    VAR_16 = 0;
    VAR_22++;

    while (VAR_22 < VAR_23) {

        VAR_14 = FUNC_5(VAR_22->chunk);

        FUNC_3(VAR_4, VAR_7->file.log, 0,
                       "sample:%uD, chunk:%uD, chunks:%uD, "
                       "samples:%uD, id:%uD",
                       VAR_10, VAR_11, VAR_14 - VAR_11, VAR_12, VAR_13);

        VAR_15 = (VAR_14 - VAR_11) * VAR_12;

        if (VAR_10 < VAR_15) {
            goto found;
        }

        VAR_10 -= VAR_15;

        VAR_16 = VAR_12;
        VAR_11 = VAR_14;
        VAR_12 = FUNC_5(VAR_22->samples);
        VAR_13 = FUNC_5(VAR_22->id);
        VAR_19--;
        VAR_22++;
    }

    VAR_14 = VAR_8->chunks + 1;

    FUNC_2(VAR_4, VAR_7->file.log, 0,
                   "sample:%uD, chunk:%uD, chunks:%uD, samples:%uD",
                   VAR_10, VAR_11, VAR_14 - VAR_11, VAR_12);

    VAR_15 = (VAR_14 - VAR_11) * VAR_12;

    if (VAR_10 > VAR_15) {
        FUNC_4(VAR_5, VAR_7->file.log, 0,
                      "%s time is out mp4 stsc chunks in \"%s\"",
                      VAR_9 ? "start" : "end", VAR_7->file.name.data);
        return VAR_0;
    }

found:

    VAR_19++;
    VAR_22--;

    if (VAR_12 == 0) {
        FUNC_4(VAR_5, VAR_7->file.log, 0,
                      "zero number of samples in \"%s\"",
                      VAR_7->file.name.data);
        return VAR_0;
    }

    VAR_20 = VAR_11 - 1;
    VAR_20 += VAR_10 / VAR_12;
    VAR_21 = VAR_10 % VAR_12;

    if (VAR_9) {
        VAR_17->pos = (u_char *) VAR_22;

        VAR_8->sample_to_chunk_entries = VAR_19;
        VAR_8->start_chunk = VAR_20;
        VAR_8->start_chunk_samples = VAR_21;

        FUNC_6(VAR_22->chunk, VAR_8->start_chunk + 1);

        VAR_12 -= VAR_21;

        FUNC_1(VAR_4, VAR_7->file.log, 0,
                       "start_chunk:%ui, start_chunk_samples:%ui",
                       VAR_8->start_chunk, VAR_8->start_chunk_samples);

    } else {
        if (VAR_10) {
            VAR_17->last = (u_char *) (VAR_22 + 1);
            VAR_8->sample_to_chunk_entries -= VAR_19 - 1;
            VAR_8->end_chunk_samples = VAR_12;

        } else {
            VAR_17->last = (u_char *) VAR_22;
            VAR_8->sample_to_chunk_entries -= VAR_19;
            VAR_8->end_chunk_samples = VAR_16;
        }

        if (VAR_21) {
            VAR_8->end_chunk = VAR_20 + 1;
            VAR_8->end_chunk_samples = VAR_21;

        } else {
            VAR_8->end_chunk = VAR_20;
        }

        VAR_12 = VAR_21;
        VAR_14 = VAR_11 + 1;

        FUNC_1(VAR_4, VAR_7->file.log, 0,
                       "end_chunk:%ui, end_chunk_samples:%ui",
                       VAR_8->end_chunk, VAR_8->end_chunk_samples);
    }

    if (VAR_21 && VAR_14 - VAR_20 == 2) {

        FUNC_6(VAR_22->samples, VAR_12);

    } else if (VAR_21 && VAR_9) {

        VAR_24 = &VAR_8->stsc_start_chunk_entry;
        FUNC_6(VAR_24->chunk, 1);
        FUNC_6(VAR_24->samples, VAR_12);
        FUNC_6(VAR_24->id, VAR_13);

        VAR_18 = &VAR_8->stsc_start_chunk_buf;
        VAR_18->temporary = 1;
        VAR_18->pos = (u_char *) VAR_24;
        VAR_18->last = (u_char *) VAR_24 + sizeof(ngx_mp4_stsc_entry_t);

        VAR_8->out[VAR_3].buf = VAR_18;

        FUNC_6(VAR_22->chunk, VAR_8->start_chunk + 2);

        VAR_8->sample_to_chunk_entries++;

    } else if (VAR_21) {

        VAR_24 = &VAR_8->stsc_end_chunk_entry;
        FUNC_6(VAR_24->chunk, VAR_8->end_chunk - VAR_8->start_chunk);
        FUNC_6(VAR_24->samples, VAR_12);
        FUNC_6(VAR_24->id, VAR_13);

        VAR_18 = &VAR_8->stsc_end_chunk_buf;
        VAR_18->temporary = 1;
        VAR_18->pos = (u_char *) VAR_24;
        VAR_18->last = (u_char *) VAR_24 + sizeof(ngx_mp4_stsc_entry_t);

        VAR_8->out[VAR_2].buf = VAR_18;

        VAR_8->sample_to_chunk_entries++;
    }

    return VAR_6;
}
