
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* data; int handler; } ;
typedef TYPE_1__ ngx_pool_cleanup_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int pool; TYPE_4__* cache; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {int path; } ;
typedef TYPE_3__ ngx_http_file_cache_t ;
struct TYPE_13__ {TYPE_3__* file_cache; } ;
typedef TYPE_4__ ngx_http_cache_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_3)
{
    ngx_http_cache_t *VAR_4;
    ngx_pool_cleanup_t *VAR_5;
    ngx_http_file_cache_t *VAR_6;

    VAR_4 = VAR_3->cache;
    VAR_6 = VAR_4->file_cache;

    VAR_5 = FUNC_2(VAR_3->pool, 0);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->handler = VAR_2;
    VAR_5->data = VAR_4;

    if (FUNC_0(VAR_6, VAR_4) == VAR_0) {
        return VAR_0;
    }

    if (FUNC_1(VAR_3, VAR_6->path) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
