
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_17__ {int aio; int pool; TYPE_2__* main; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ aio; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_20__ {int thread_task; TYPE_4__* thread_ctx; int thread_handler; TYPE_1__* aio; } ;
struct TYPE_19__ {int reading; int body_start; TYPE_3__* buf; TYPE_7__ file; int thread_task; } ;
typedef TYPE_6__ ngx_http_cache_t ;
struct TYPE_16__ {int pos; } ;
struct TYPE_15__ {int blocked; } ;
struct TYPE_14__ {int handler; TYPE_4__* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ,int ,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_4(ngx_http_request_t *VAR_7, ngx_http_cache_t *VAR_8)
{
    return FUNC_2(&VAR_8->file, VAR_8->buf->pos, VAR_8->body_start, 0);
}
