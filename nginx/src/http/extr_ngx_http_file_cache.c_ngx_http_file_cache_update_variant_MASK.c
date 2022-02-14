
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {TYPE_2__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_22__ {int path; TYPE_4__* shpool; } ;
typedef TYPE_8__ ngx_http_file_cache_t ;
struct TYPE_19__ {scalar_t__ len; } ;
struct TYPE_20__ {TYPE_5__ name; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_23__ {int main; int key; TYPE_6__ file; TYPE_3__* node; TYPE_8__* file_cache; int variant; TYPE_1__ vary; int secondary; } ;
typedef TYPE_9__ ngx_http_cache_t ;
struct TYPE_18__ {int mutex; } ;
struct TYPE_17__ {scalar_t__ updating; int count; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_4, ngx_http_cache_t *VAR_5)
{
    ngx_http_file_cache_t *VAR_6;

    if (!VAR_5->secondary) {
        return VAR_3;
    }

    if (VAR_5->vary.len
        && FUNC_3(VAR_5->variant, VAR_5->key, VAR_1) == 0)
    {
        return VAR_3;
    }






    VAR_6 = VAR_5->file_cache;

    FUNC_2(VAR_2, VAR_4->connection->log, 0,
                   "http file cache main key");

    FUNC_5(&VAR_6->shpool->mutex);

    VAR_5->node->count--;
    VAR_5->node->updating = 0;
    VAR_5->node = ((void*)0);

    FUNC_6(&VAR_6->shpool->mutex);

    VAR_5->file.name.len = 0;

    FUNC_4(VAR_5->key, VAR_5->main, VAR_1);

    if (FUNC_0(VAR_6, VAR_5) == VAR_0) {
        return VAR_0;
    }

    if (FUNC_1(VAR_4, VAR_6->path) != VAR_3) {
        return VAR_0;
    }

    return VAR_3;
}
