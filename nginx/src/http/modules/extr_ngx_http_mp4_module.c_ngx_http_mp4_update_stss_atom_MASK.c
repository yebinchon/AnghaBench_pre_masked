
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


typedef size_t uint32_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {size_t sync_samples_entries; size_t start_sample; size_t size; TYPE_2__* out; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_14__ {size_t* size; size_t* entries; } ;
typedef TYPE_4__ ngx_http_mp4_stss_atom_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_15__ {TYPE_1__ file; } ;
typedef TYPE_5__ ngx_http_mp4_file_t ;
struct TYPE_16__ {int pos; int last; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {TYPE_6__* buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 size_t FUNC_3 (size_t*) ;
 int FUNC_4 (size_t*,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_mp4_file_t *VAR_4,
    ngx_http_mp4_trak_t *VAR_5)
{
    size_t VAR_6;
    uint32_t VAR_7, VAR_8, *VAR_9, *VAR_10;
    ngx_buf_t *VAR_11, *VAR_12;
    ngx_http_mp4_stss_atom_t *VAR_13;







    FUNC_1(VAR_2, VAR_4->file.log, 0,
                   "mp4 stss atom update");

    VAR_12 = VAR_5->out[VAR_1].buf;

    if (VAR_12 == ((void*)0)) {
        return VAR_3;
    }

    FUNC_0(VAR_4, VAR_5, 1);
    FUNC_0(VAR_4, VAR_5, 0);

    FUNC_2(VAR_2, VAR_4->file.log, 0,
                   "sync sample entries:%uD", VAR_5->sync_samples_entries);

    if (VAR_5->sync_samples_entries) {
        VAR_9 = (uint32_t *) VAR_12->pos;
        VAR_10 = (uint32_t *) VAR_12->last;

        VAR_8 = VAR_5->start_sample;

        while (VAR_9 < VAR_10) {
            VAR_7 = FUNC_3(VAR_9);
            VAR_7 -= VAR_8;
            FUNC_4(VAR_9, VAR_7);
            VAR_9++;
        }

    } else {
        VAR_5->out[VAR_1].buf = ((void*)0);
    }

    VAR_6 = sizeof(ngx_http_mp4_stss_atom_t) + (VAR_12->last - VAR_12->pos);
    VAR_5->size += VAR_6;

    VAR_11 = VAR_5->out[VAR_0].buf;
    VAR_13 = (ngx_http_mp4_stss_atom_t *) VAR_11->pos;

    FUNC_4(VAR_13->size, VAR_6);
    FUNC_4(VAR_13->entries, VAR_5->sync_samples_entries);

    return VAR_3;
}
