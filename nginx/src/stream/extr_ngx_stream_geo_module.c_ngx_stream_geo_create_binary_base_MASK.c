
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef void* uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_22__ {int * data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_stream_variable_value_t ;
struct TYPE_23__ {scalar_t__ offset; } ;
typedef TYPE_4__ ngx_stream_geo_variable_value_node_t ;
struct TYPE_24__ {TYPE_3__* value; int end; int start; } ;
typedef TYPE_5__ ngx_stream_geo_range_t ;
struct TYPE_25__ {void* crc32; } ;
typedef TYPE_6__ ngx_stream_geo_header_t ;
struct TYPE_18__ {int sentinel; int root; } ;
struct TYPE_21__ {TYPE_5__** low; } ;
struct TYPE_19__ {scalar_t__ len; } ;
struct TYPE_26__ {TYPE_12__ rbtree; TYPE_2__ high; TYPE_1__* pool; scalar_t__ data_size; TYPE_14__ include_name; int temp_pool; } ;
typedef TYPE_7__ ngx_stream_geo_conf_ctx_t ;
struct TYPE_27__ {scalar_t__ len; int * data; } ;
typedef TYPE_8__ ngx_str_t ;
struct TYPE_28__ {scalar_t__ size; TYPE_6__* addr; int * name; int log; } ;
typedef TYPE_9__ ngx_file_mapping_t ;
struct TYPE_20__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_9__*) ;
 int * FUNC_1 (TYPE_6__*,int *,int) ;
 void* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;
 int * FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int *,char*,TYPE_14__*) ;
 scalar_t__ FUNC_7 (TYPE_12__*,TYPE_8__*,void*) ;
 int * FUNC_8 (TYPE_6__*,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(ngx_stream_geo_conf_ctx_t *VAR_3)
{
    u_char *VAR_4;
    uint32_t VAR_5;
    ngx_str_t VAR_6;
    ngx_uint_t VAR_7;
    ngx_file_mapping_t VAR_8;
    ngx_stream_geo_range_t *VAR_9, *VAR_10, **VAR_11;
    ngx_stream_geo_header_t *VAR_12;
    ngx_stream_geo_variable_value_node_t *VAR_13;

    VAR_8.name = FUNC_5(VAR_3->temp_pool, VAR_3->include_name.len + 5);
    if (VAR_8.name == ((void*)0)) {
        return;
    }

    FUNC_6(VAR_8.name, "%V.bin%Z", &VAR_3->include_name);

    VAR_8.size = VAR_3->data_size;
    VAR_8.log = VAR_3->pool->log;

    FUNC_4(VAR_0, VAR_8.log, 0,
                  "creating binary geo range base \"%s\"", VAR_8.name);

    if (FUNC_3(&VAR_8) != VAR_1) {
        return;
    }

    VAR_4 = FUNC_1(VAR_8.addr, &VAR_2,
                   sizeof(ngx_stream_geo_header_t));

    VAR_4 = FUNC_8(VAR_8.addr, VAR_4, VAR_3->rbtree.root,
                                   VAR_3->rbtree.sentinel);

    VAR_4 += sizeof(ngx_stream_variable_value_t);

    VAR_11 = (ngx_stream_geo_range_t **) VAR_4;

    VAR_4 += 0x10000 * sizeof(ngx_stream_geo_range_t *);

    for (VAR_7 = 0; VAR_7 < 0x10000; VAR_7++) {
        VAR_9 = VAR_3->high.low[VAR_7];
        if (VAR_9 == ((void*)0)) {
            continue;
        }

        VAR_10 = (ngx_stream_geo_range_t *) VAR_4;
        VAR_11[VAR_7] = (ngx_stream_geo_range_t *) (VAR_4 - (u_char *) VAR_8.addr);

        do {
            VAR_6.len = VAR_9->value->len;
            VAR_6.data = VAR_9->value->data;
            VAR_5 = FUNC_2(VAR_6.data, VAR_6.len);
            VAR_13 = (ngx_stream_geo_variable_value_node_t *)
                        FUNC_7(&VAR_3->rbtree, &VAR_6, VAR_5);

            VAR_10->value = (ngx_stream_variable_value_t *) VAR_13->offset;
            VAR_10->start = VAR_9->start;
            VAR_10->end = VAR_9->end;
            VAR_10++;

        } while ((++VAR_9)->value);

        VAR_10->value = ((void*)0);

        VAR_4 = (u_char *) VAR_10 + sizeof(void *);
    }

    VAR_12 = VAR_8.addr;
    VAR_12->crc32 = FUNC_2((u_char *) VAR_8.addr
                                       + sizeof(ngx_stream_geo_header_t),
                                   VAR_8.size - sizeof(ngx_stream_geo_header_t));

    FUNC_0(&VAR_8);
}
