
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_16__ {int chunk; } ;
typedef TYPE_4__ ngx_mp4_stsc_entry_t ;
struct TYPE_17__ {int entries; int size; } ;
typedef TYPE_5__ ngx_mp4_stsc_atom_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int sample_to_chunk_entries; size_t size; TYPE_3__* out; scalar_t__ start_chunk; } ;
typedef TYPE_6__ ngx_http_mp4_trak_t ;
struct TYPE_13__ {int data; } ;
struct TYPE_14__ {int log; TYPE_1__ name; } ;
struct TYPE_19__ {TYPE_2__ file; } ;
typedef TYPE_7__ ngx_http_mp4_file_t ;
struct TYPE_20__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_15__ {TYPE_8__* buf; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*,TYPE_6__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_mp4_file_t *VAR_6,
    ngx_http_mp4_trak_t *VAR_7)
{
    size_t VAR_8;
    uint32_t VAR_9;
    ngx_buf_t *VAR_10, *VAR_11;
    ngx_mp4_stsc_atom_t *VAR_12;
    ngx_mp4_stsc_entry_t *VAR_13, *VAR_14;







    FUNC_1(VAR_3, VAR_6->file.log, 0,
                   "mp4 stsc atom update");

    VAR_11 = VAR_7->out[VAR_2].buf;

    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_4, VAR_6->file.log, 0,
                      "no mp4 stsc atoms were found in \"%s\"",
                      VAR_6->file.name.data);
        return VAR_0;
    }

    if (VAR_7->sample_to_chunk_entries == 0) {
        FUNC_3(VAR_4, VAR_6->file.log, 0,
                      "zero number of entries in stsc atom in \"%s\"",
                      VAR_6->file.name.data);
        return VAR_0;
    }

    if (FUNC_0(VAR_6, VAR_7, 1) != VAR_5) {
        return VAR_0;
    }

    if (FUNC_0(VAR_6, VAR_7, 0) != VAR_5) {
        return VAR_0;
    }

    FUNC_2(VAR_3, VAR_6->file.log, 0,
                   "sample-to-chunk entries:%uD",
                   VAR_7->sample_to_chunk_entries);

    VAR_13 = (ngx_mp4_stsc_entry_t *) VAR_11->pos;
    VAR_14 = (ngx_mp4_stsc_entry_t *) VAR_11->last;

    while (VAR_13 < VAR_14) {
        VAR_9 = FUNC_4(VAR_13->chunk);
        VAR_9 -= VAR_7->start_chunk;
        FUNC_5(VAR_13->chunk, VAR_9);
        VAR_13++;
    }

    VAR_8 = sizeof(ngx_mp4_stsc_atom_t)
                + VAR_7->sample_to_chunk_entries * sizeof(ngx_mp4_stsc_entry_t);

    VAR_7->size += VAR_8;

    VAR_10 = VAR_7->out[VAR_1].buf;
    VAR_12 = (ngx_mp4_stsc_atom_t *) VAR_10->pos;

    FUNC_5(VAR_12->size, VAR_8);
    FUNC_5(VAR_12->entries, VAR_7->sample_to_chunk_entries);

    return VAR_5;
}
