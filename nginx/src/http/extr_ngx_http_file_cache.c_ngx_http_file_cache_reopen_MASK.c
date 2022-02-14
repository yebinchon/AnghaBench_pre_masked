
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_19__ {TYPE_1__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_20__ {TYPE_3__* shpool; } ;
typedef TYPE_8__ ngx_http_file_cache_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
struct TYPE_17__ {TYPE_4__ name; int log; } ;
struct TYPE_21__ {int secondary; int variant; int key; TYPE_6__* buf; scalar_t__ body_start; TYPE_5__ file; TYPE_2__* node; TYPE_8__* file_cache; } ;
typedef TYPE_9__ ngx_http_cache_t ;
struct TYPE_18__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_15__ {int mutex; } ;
struct TYPE_14__ {int count; } ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_4, ngx_http_cache_t *VAR_5)
{
    ngx_http_file_cache_t *VAR_6;

    FUNC_1(VAR_3, VAR_5->file.log, 0,
                   "http file cache reopen");

    if (VAR_5->secondary) {
        FUNC_2(VAR_2, VAR_4->connection->log, 0,
                      "cache file \"%s\" has incorrect vary hash",
                      VAR_5->file.name.data);
        return VAR_0;
    }

    VAR_6 = VAR_5->file_cache;

    FUNC_4(&VAR_6->shpool->mutex);

    VAR_5->node->count--;
    VAR_5->node = ((void*)0);

    FUNC_5(&VAR_6->shpool->mutex);

    VAR_5->secondary = 1;
    VAR_5->file.name.len = 0;
    VAR_5->body_start = VAR_5->buf->end - VAR_5->buf->start;

    FUNC_3(VAR_5->key, VAR_5->variant, VAR_1);

    return FUNC_0(VAR_4);
}
