
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


typedef size_t ngx_uint_t ;
struct TYPE_16__ {int len; } ;
struct TYPE_18__ {TYPE_4__ key; int lowcase_key; int hash; } ;
typedef TYPE_6__ ngx_table_elt_t ;
struct TYPE_19__ {size_t nelts; TYPE_6__* elts; struct TYPE_19__* next; } ;
typedef TYPE_7__ ngx_list_part_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {TYPE_7__ part; } ;
struct TYPE_14__ {TYPE_1__ trailers; } ;
struct TYPE_20__ {TYPE_3__* conf; TYPE_2__ headers_in; } ;
typedef TYPE_8__ ngx_http_upstream_t ;
struct TYPE_17__ {int trailers; } ;
struct TYPE_21__ {TYPE_5__ headers_out; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_15__ {int hide_headers_hash; int pass_trailers; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 TYPE_6__* FUNC_1 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_upstream_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_list_part_t *VAR_5;
    ngx_table_elt_t *VAR_6, *VAR_7;

    if (!VAR_3->conf->pass_trailers) {
        return VAR_1;
    }

    VAR_5 = &VAR_3->headers_in.trailers.part;
    VAR_6 = VAR_5->elts;

    for (VAR_4 = 0; ; VAR_4++) {

        if (VAR_4 >= VAR_5->nelts) {
            if (VAR_5->next == ((void*)0)) {
                break;
            }

            VAR_5 = VAR_5->next;
            VAR_6 = VAR_5->elts;
            VAR_4 = 0;
        }

        if (FUNC_0(&VAR_3->conf->hide_headers_hash, VAR_6[VAR_4].hash,
                          VAR_6[VAR_4].lowcase_key, VAR_6[VAR_4].key.len))
        {
            continue;
        }

        VAR_7 = FUNC_1(&VAR_2->headers_out.trailers);
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_7 = VAR_6[VAR_4];
    }

    return VAR_1;
}
