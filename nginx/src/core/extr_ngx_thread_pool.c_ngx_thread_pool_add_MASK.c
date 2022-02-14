
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int line; int file; int name; } ;
typedef TYPE_4__ ngx_thread_pool_t ;
struct TYPE_17__ {int pools; } ;
typedef TYPE_5__ ngx_thread_pool_conf_t ;
typedef int ngx_str_t ;
struct TYPE_18__ {TYPE_8__* cycle; TYPE_3__* conf_file; int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_19__ {int conf_ctx; } ;
struct TYPE_13__ {int data; } ;
struct TYPE_14__ {TYPE_1__ name; } ;
struct TYPE_15__ {int line; TYPE_2__ file; } ;


 TYPE_4__** FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int VAR_0 ;
 TYPE_4__* FUNC_3 (TYPE_8__*,int *) ;
 int VAR_1 ;

ngx_thread_pool_t *
FUNC_4(ngx_conf_t *VAR_2, ngx_str_t *VAR_3)
{
    ngx_thread_pool_t *VAR_4, **VAR_5;
    ngx_thread_pool_conf_t *VAR_6;

    if (VAR_3 == ((void*)0)) {
        VAR_3 = &VAR_0;
    }

    VAR_4 = FUNC_3(VAR_2->cycle, VAR_3);

    if (VAR_4) {
        return VAR_4;
    }

    VAR_4 = FUNC_2(VAR_2->pool, sizeof(ngx_thread_pool_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->name = *VAR_3;
    VAR_4->file = VAR_2->conf_file->file.name.data;
    VAR_4->line = VAR_2->conf_file->line;

    VAR_6 = (ngx_thread_pool_conf_t *) FUNC_1(VAR_2->cycle->conf_ctx,
                                                  VAR_1);

    VAR_5 = FUNC_0(&VAR_6->pools);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    *VAR_5 = VAR_4;

    return VAR_4;
}
