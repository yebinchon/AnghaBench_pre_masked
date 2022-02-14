
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef size_t ngx_int_t ;
struct TYPE_13__ {int next; int handler; int checker; } ;
typedef TYPE_4__ ngx_http_phase_handler_t ;
typedef int ngx_http_phase_handler_pt ;
typedef int ngx_http_handler_pt ;
struct TYPE_10__ {int server_rewrite_index; int location_rewrite_index; TYPE_4__* handlers; } ;
struct TYPE_14__ {TYPE_3__* phases; TYPE_1__ phase_engine; } ;
typedef TYPE_5__ ngx_http_core_main_conf_t ;
struct TYPE_15__ {int pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_11__ {size_t nelts; int * elts; } ;
struct TYPE_12__ {TYPE_2__ handlers; } ;


 size_t VAR_0 ;



 int VAR_1 ;




 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__* FUNC_0 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_10, ngx_http_core_main_conf_t *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13, VAR_14;
    ngx_uint_t VAR_15, VAR_16, VAR_17;
    ngx_http_handler_pt *VAR_18;
    ngx_http_phase_handler_t *VAR_19;
    ngx_http_phase_handler_pt VAR_20;

    VAR_11->phase_engine.server_rewrite_index = (ngx_uint_t) -1;
    VAR_11->phase_engine.location_rewrite_index = (ngx_uint_t) -1;
    VAR_15 = 0;
    VAR_16 = VAR_11->phases[129].handlers.nelts ? 1 : 0;
    VAR_17 = VAR_11->phases[134].handlers.nelts ? 1 : 0;

    VAR_14 = 1
        + VAR_16
        + VAR_17;

    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
        VAR_14 += VAR_11->phases[VAR_13].handlers.nelts;
    }

    VAR_19 = FUNC_0(VAR_10->pool,
                     VAR_14 * sizeof(ngx_http_phase_handler_t) + sizeof(void *));
    if (VAR_19 == ((void*)0)) {
        return VAR_0;
    }

    VAR_11->phase_engine.handlers = VAR_19;
    VAR_14 = 0;

    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
        VAR_18 = VAR_11->phases[VAR_13].handlers.elts;

        switch (VAR_13) {

        case 128:
            if (VAR_11->phase_engine.server_rewrite_index == (ngx_uint_t) -1) {
                VAR_11->phase_engine.server_rewrite_index = VAR_14;
            }
            VAR_20 = VAR_9;

            break;

        case 132:
            VAR_15 = VAR_14;

            VAR_19->checker = VAR_5;
            VAR_14++;
            VAR_19++;

            continue;

        case 129:
            if (VAR_11->phase_engine.location_rewrite_index == (ngx_uint_t) -1) {
                VAR_11->phase_engine.location_rewrite_index = VAR_14;
            }
            VAR_20 = VAR_9;

            break;

        case 130:
            if (VAR_16) {
                VAR_19->checker = VAR_8;
                VAR_19->next = VAR_15;
                VAR_14++;
                VAR_19++;
            }

            continue;

        case 134:
            VAR_20 = VAR_3;
            VAR_14++;
            break;

        case 131:
            if (VAR_17) {
                VAR_19->checker = VAR_7;
                VAR_19->next = VAR_14;
                VAR_19++;
            }

            continue;

        case 133:
            VAR_20 = VAR_4;
            break;

        default:
            VAR_20 = VAR_6;
        }

        VAR_14 += VAR_11->phases[VAR_13].handlers.nelts;

        for (VAR_12 = VAR_11->phases[VAR_13].handlers.nelts - 1; VAR_12 >= 0; VAR_12--) {
            VAR_19->checker = VAR_20;
            VAR_19->handler = VAR_18[VAR_12];
            VAR_19->next = VAR_14;
            VAR_19++;
        }
    }

    return VAR_2;
}
