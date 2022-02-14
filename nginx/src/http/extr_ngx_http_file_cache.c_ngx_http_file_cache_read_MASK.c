
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_14__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
typedef scalar_t__ ssize_t ;
typedef size_t ngx_uint_t ;
struct TYPE_22__ {int len; int data; } ;
typedef TYPE_10__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int cached; TYPE_8__* connection; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_4__* shpool; TYPE_2__* sh; } ;
typedef TYPE_12__ ngx_http_file_cache_t ;
typedef int ngx_http_file_cache_key ;
struct TYPE_25__ {scalar_t__ version; scalar_t__ crc32; size_t body_start; scalar_t__ vary_len; scalar_t__ valid_sec; scalar_t__ updating_sec; scalar_t__ error_sec; int etag; int etag_len; int valid_msec; int date; int last_modified; int variant; int vary; scalar_t__ header_start; } ;
typedef TYPE_13__ ngx_http_file_cache_header_t ;
struct TYPE_27__ {int data; int len; } ;
struct TYPE_32__ {int data; } ;
struct TYPE_33__ {TYPE_6__ name; } ;
struct TYPE_31__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_26__ {size_t header_start; scalar_t__ crc32; size_t body_start; scalar_t__ valid_sec; scalar_t__ updating_sec; scalar_t__ error_sec; int stale_updating; int stale_error; int updating; TYPE_3__* node; int lock_time; scalar_t__ fs_size; int uniq; TYPE_12__* file_cache; TYPE_1__ etag; int valid_msec; int date; int last_modified; TYPE_9__* buf; int * variant; TYPE_7__ file; TYPE_5__ keys; } ;
typedef TYPE_14__ ngx_http_cache_t ;
struct TYPE_35__ {int last; int * pos; } ;
struct TYPE_34__ {int log; } ;
struct TYPE_30__ {int mutex; } ;
struct TYPE_29__ {int exists; int uses; size_t body_start; int updating; int lock_time; scalar_t__ fs_size; int uniq; } ;
struct TYPE_28__ {int size; scalar_t__ cold; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_11__*,TYPE_14__*) ;
 scalar_t__ FUNC_1 (TYPE_11__*,TYPE_14__*) ;
 int FUNC_2 (TYPE_11__*,int ,scalar_t__,int *) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,char*,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_10, ngx_http_cache_t *VAR_11)
{
    u_char *VAR_12;
    time_t VAR_13;
    ssize_t VAR_14;
    ngx_str_t *VAR_15;
    ngx_int_t VAR_16;
    ngx_uint_t VAR_17;
    ngx_http_file_cache_t *VAR_18;
    ngx_http_file_cache_header_t *VAR_19;

    VAR_14 = FUNC_0(VAR_10, VAR_11);

    if (VAR_14 < 0) {
        return VAR_14;
    }

    if ((size_t) VAR_14 < VAR_11->header_start) {
        FUNC_5(VAR_6, VAR_10->connection->log, 0,
                      "cache file \"%s\" is too small", VAR_11->file.name.data);
        return VAR_0;
    }

    VAR_19 = (ngx_http_file_cache_header_t *) VAR_11->buf->pos;

    if (VAR_19->version != VAR_5) {
        FUNC_5(VAR_8, VAR_10->connection->log, 0,
                      "cache file \"%s\" version mismatch", VAR_11->file.name.data);
        return VAR_0;
    }

    if (VAR_19->crc32 != VAR_11->crc32 || (size_t) VAR_19->header_start != VAR_11->header_start) {
        FUNC_5(VAR_6, VAR_10->connection->log, 0,
                      "cache file \"%s\" has md5 collision", VAR_11->file.name.data);
        return VAR_0;
    }

    VAR_12 = VAR_11->buf->pos + sizeof(ngx_http_file_cache_header_t)
        + sizeof(ngx_http_file_cache_key);

    VAR_15 = VAR_11->keys.elts;
    for (VAR_17 = 0; VAR_17 < VAR_11->keys.nelts; VAR_17++) {
        if (FUNC_6(VAR_12, VAR_15[VAR_17].data, VAR_15[VAR_17].len) != 0) {
            FUNC_5(VAR_6, VAR_10->connection->log, 0,
                          "cache file \"%s\" has md5 collision",
                          VAR_11->file.name.data);
            return VAR_0;
        }

        VAR_12 += VAR_15[VAR_17].len;
    }

    if ((size_t) VAR_19->body_start > VAR_11->body_start) {
        FUNC_5(VAR_6, VAR_10->connection->log, 0,
                      "cache file \"%s\" has too long header",
                      VAR_11->file.name.data);
        return VAR_0;
    }

    if (VAR_19->vary_len > VAR_4) {
        FUNC_5(VAR_6, VAR_10->connection->log, 0,
                      "cache file \"%s\" has incorrect vary length",
                      VAR_11->file.name.data);
        return VAR_0;
    }

    if (VAR_19->vary_len) {
        FUNC_2(VAR_10, VAR_19->vary, VAR_19->vary_len, VAR_11->variant);

        if (FUNC_6(VAR_11->variant, VAR_19->variant, VAR_1) != 0) {
            FUNC_3(VAR_7, VAR_10->connection->log, 0,
                           "http file cache vary mismatch");
            return FUNC_1(VAR_10, VAR_11);
        }
    }

    VAR_11->buf->last += VAR_14;

    VAR_11->valid_sec = VAR_19->valid_sec;
    VAR_11->updating_sec = VAR_19->updating_sec;
    VAR_11->error_sec = VAR_19->error_sec;
    VAR_11->last_modified = VAR_19->last_modified;
    VAR_11->date = VAR_19->date;
    VAR_11->valid_msec = VAR_19->valid_msec;
    VAR_11->body_start = VAR_19->body_start;
    VAR_11->etag.len = VAR_19->etag_len;
    VAR_11->etag.data = VAR_19->etag;

    VAR_10->cached = 1;

    VAR_18 = VAR_11->file_cache;

    if (VAR_18->sh->cold) {

        FUNC_7(&VAR_18->shpool->mutex);

        if (!VAR_11->node->exists) {
            VAR_11->node->uses = 1;
            VAR_11->node->body_start = VAR_11->body_start;
            VAR_11->node->exists = 1;
            VAR_11->node->uniq = VAR_11->uniq;
            VAR_11->node->fs_size = VAR_11->fs_size;

            VAR_18->sh->size += VAR_11->fs_size;
        }

        FUNC_8(&VAR_18->shpool->mutex);
    }

    VAR_13 = FUNC_9();

    if (VAR_11->valid_sec < VAR_13) {
        VAR_11->stale_updating = VAR_11->valid_sec + VAR_11->updating_sec >= VAR_13;
        VAR_11->stale_error = VAR_11->valid_sec + VAR_11->error_sec >= VAR_13;

        FUNC_7(&VAR_18->shpool->mutex);

        if (VAR_11->node->updating) {
            VAR_16 = VAR_3;

        } else {
            VAR_11->node->updating = 1;
            VAR_11->updating = 1;
            VAR_11->lock_time = VAR_11->node->lock_time;
            VAR_16 = VAR_2;
        }

        FUNC_8(&VAR_18->shpool->mutex);

        FUNC_4(VAR_7, VAR_10->connection->log, 0,
                       "http file cache expired: %i %T %T",
                       VAR_16, VAR_11->valid_sec, VAR_13);

        return VAR_16;
    }

    return VAR_9;
}
