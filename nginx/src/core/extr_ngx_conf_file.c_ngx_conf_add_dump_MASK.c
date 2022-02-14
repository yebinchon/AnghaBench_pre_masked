
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ off_t ;
struct TYPE_22__ {int len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_17__ {int key; } ;
struct TYPE_20__ {int len; int * data; } ;
struct TYPE_23__ {TYPE_11__ node; TYPE_3__ str; } ;
typedef TYPE_6__ ngx_str_node_t ;
typedef int ngx_int_t ;
struct TYPE_24__ {TYPE_4__* cycle; int temp_pool; TYPE_2__* conf_file; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_25__ {TYPE_3__ name; int * buffer; } ;
typedef TYPE_8__ ngx_conf_dump_t ;
typedef int ngx_buf_t ;
struct TYPE_21__ {int config_dump_rbtree; int pool; int config_dump; } ;
struct TYPE_18__ {int info; } ;
struct TYPE_19__ {int * dump; TYPE_1__ file; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_6__* FUNC_4 (int ,int) ;
 int * FUNC_5 (int ,TYPE_5__*) ;
 int FUNC_6 (int *,TYPE_11__*) ;
 TYPE_6__* FUNC_7 (int *,TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_conf_t *VAR_2, ngx_str_t *VAR_3)
{
    off_t VAR_4;
    u_char *VAR_5;
    uint32_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_str_node_t *VAR_8;
    ngx_conf_dump_t *VAR_9;

    VAR_6 = FUNC_1(VAR_3->data, VAR_3->len);

    VAR_8 = FUNC_7(&VAR_2->cycle->config_dump_rbtree, VAR_3, VAR_6);

    if (VAR_8) {
        VAR_2->conf_file->dump = ((void*)0);
        return VAR_1;
    }

    VAR_5 = FUNC_5(VAR_2->cycle->pool, VAR_3);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9 = FUNC_0(&VAR_2->cycle->config_dump);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4 = FUNC_3(&VAR_2->conf_file->file.info);

    VAR_7 = FUNC_2(VAR_2->cycle->pool, (size_t) VAR_4);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->name.data = VAR_5;
    VAR_9->name.len = VAR_3->len;
    VAR_9->buffer = VAR_7;

    VAR_2->conf_file->dump = VAR_7;

    VAR_8 = FUNC_4(VAR_2->temp_pool, sizeof(ngx_str_node_t));
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->node.key = VAR_6;
    VAR_8->str = VAR_9->name;

    FUNC_6(&VAR_2->cycle->config_dump_rbtree, &VAR_8->node);

    return VAR_1;
}
