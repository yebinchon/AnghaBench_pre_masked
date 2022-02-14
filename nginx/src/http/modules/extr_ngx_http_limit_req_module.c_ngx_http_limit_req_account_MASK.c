
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_msec_t ;
typedef int ngx_msec_int_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int last; int excess; int count; } ;
typedef TYPE_3__ ngx_http_limit_req_node_t ;
struct TYPE_11__ {scalar_t__ delay; TYPE_1__* shm_zone; } ;
typedef TYPE_4__ ngx_http_limit_req_limit_t ;
struct TYPE_12__ {int rate; TYPE_3__* node; TYPE_2__* shpool; } ;
typedef TYPE_5__ ngx_http_limit_req_ctx_t ;
struct TYPE_9__ {int mutex; } ;
struct TYPE_8__ {TYPE_5__* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ngx_msec_t
FUNC_2(ngx_http_limit_req_limit_t *VAR_1, ngx_uint_t VAR_2,
    ngx_uint_t *VAR_3, ngx_http_limit_req_limit_t **VAR_4)
{
    ngx_int_t VAR_5;
    ngx_msec_t VAR_6, VAR_7, VAR_8;
    ngx_msec_int_t VAR_9;
    ngx_http_limit_req_ctx_t *VAR_10;
    ngx_http_limit_req_node_t *VAR_11;

    VAR_5 = *VAR_3;

    if ((ngx_uint_t) VAR_5 <= (*VAR_4)->delay) {
        VAR_8 = 0;

    } else {
        VAR_10 = (*VAR_4)->shm_zone->data;
        VAR_8 = (VAR_5 - (*VAR_4)->delay) * 1000 / VAR_10->rate;
    }

    while (VAR_2--) {
        VAR_10 = VAR_1[VAR_2].shm_zone->data;
        VAR_11 = VAR_10->node;

        if (VAR_11 == ((void*)0)) {
            continue;
        }

        FUNC_0(&VAR_10->shpool->mutex);

        VAR_6 = VAR_0;
        VAR_9 = (ngx_msec_int_t) (VAR_6 - VAR_11->last);

        if (VAR_9 < -60000) {
            VAR_9 = 1;

        } else if (VAR_9 < 0) {
            VAR_9 = 0;
        }

        VAR_5 = VAR_11->excess - VAR_10->rate * VAR_9 / 1000 + 1000;

        if (VAR_5 < 0) {
            VAR_5 = 0;
        }

        if (VAR_9) {
            VAR_11->last = VAR_6;
        }

        VAR_11->excess = VAR_5;
        VAR_11->count--;

        FUNC_1(&VAR_10->shpool->mutex);

        VAR_10->node = ((void*)0);

        if ((ngx_uint_t) VAR_5 <= VAR_1[VAR_2].delay) {
            continue;
        }

        VAR_7 = (VAR_5 - VAR_1[VAR_2].delay) * 1000 / VAR_10->rate;

        if (VAR_7 > VAR_8) {
            VAR_8 = VAR_7;
            *VAR_3 = VAR_5;
            *VAR_4 = &VAR_1[VAR_2];
        }
    }

    return VAR_8;
}
