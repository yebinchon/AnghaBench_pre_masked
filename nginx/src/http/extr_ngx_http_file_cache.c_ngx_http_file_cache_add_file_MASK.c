
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ off_t ;
typedef int ngx_uint_t ;
struct TYPE_10__ {scalar_t__ size; int fs_size; TYPE_3__* data; int log; } ;
typedef TYPE_1__ ngx_tree_ctx_t ;
struct TYPE_11__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {int bsize; } ;
typedef TYPE_3__ ngx_http_file_cache_t ;
typedef int ngx_http_file_cache_header_t ;
struct TYPE_13__ {scalar_t__ length; int fs_size; char* key; } ;
typedef TYPE_4__ ngx_http_cache_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int ,char*,char*) ;
 int FUNC_3 (TYPE_4__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_tree_ctx_t *VAR_4, ngx_str_t *VAR_5)
{
    u_char *VAR_6;
    ngx_int_t VAR_7;
    ngx_uint_t VAR_8;
    ngx_http_cache_t VAR_9;
    ngx_http_file_cache_t *VAR_10;

    if (VAR_5->len < 2 * VAR_1) {
        return VAR_0;
    }






    if (VAR_5->len >= 2 * VAR_1 + 1 + 10
        && VAR_5->data[VAR_5->len - 10 - 1] == '.')
    {
        return VAR_3;
    }

    if (VAR_4->size < (off_t) sizeof(ngx_http_file_cache_header_t)) {
        FUNC_2(VAR_2, VAR_4->log, 0,
                      "cache file \"%s\" is too small", VAR_5->data);
        return VAR_0;
    }

    FUNC_3(&VAR_9, sizeof(ngx_http_cache_t));
    VAR_10 = VAR_4->data;

    VAR_9.length = VAR_4->size;
    VAR_9.fs_size = (VAR_4->fs_size + VAR_10->bsize - 1) / VAR_10->bsize;

    VAR_6 = &VAR_5->data[VAR_5->len - 2 * VAR_1];

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_7 = FUNC_0(VAR_6, 2);

        if (VAR_7 == VAR_0) {
            return VAR_0;
        }

        VAR_6 += 2;

        VAR_9.key[VAR_8] = (u_char) VAR_7;
    }

    return FUNC_1(VAR_10, &VAR_9);
}
