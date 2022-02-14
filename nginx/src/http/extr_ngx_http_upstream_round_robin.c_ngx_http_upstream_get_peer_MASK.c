
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; scalar_t__ max_conns; scalar_t__ conns; scalar_t__ current_weight; scalar_t__ effective_weight; scalar_t__ weight; scalar_t__ down; struct TYPE_7__* next; } ;
typedef TYPE_2__ ngx_http_upstream_rr_peer_t ;
struct TYPE_8__ {uintptr_t* tried; TYPE_2__* current; TYPE_1__* peers; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peer_data_t ;
struct TYPE_6__ {TYPE_2__* peer; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static ngx_http_upstream_rr_peer_t *
FUNC_1(ngx_http_upstream_rr_peer_data_t *VAR_0)
{
    time_t VAR_1;
    uintptr_t VAR_2;
    ngx_int_t VAR_3;
    ngx_uint_t VAR_4, VAR_5, VAR_6;
    ngx_http_upstream_rr_peer_t *VAR_7, *VAR_8;

    VAR_1 = FUNC_0();

    VAR_8 = ((void*)0);
    VAR_3 = 0;





    for (VAR_7 = VAR_0->peers->peer, VAR_4 = 0;
         VAR_7;
         VAR_7 = VAR_7->next, VAR_4++)
    {
        VAR_5 = VAR_4 / (8 * sizeof(uintptr_t));
        VAR_2 = (uintptr_t) 1 << VAR_4 % (8 * sizeof(uintptr_t));

        if (VAR_0->tried[VAR_5] & VAR_2) {
            continue;
        }

        if (VAR_7->down) {
            continue;
        }

        if (VAR_7->max_fails
            && VAR_7->fails >= VAR_7->max_fails
            && VAR_1 - VAR_7->checked <= VAR_7->fail_timeout)
        {
            continue;
        }

        if (VAR_7->max_conns && VAR_7->conns >= VAR_7->max_conns) {
            continue;
        }

        VAR_7->current_weight += VAR_7->effective_weight;
        VAR_3 += VAR_7->effective_weight;

        if (VAR_7->effective_weight < VAR_7->weight) {
            VAR_7->effective_weight++;
        }

        if (VAR_8 == ((void*)0) || VAR_7->current_weight > VAR_8->current_weight) {
            VAR_8 = VAR_7;
            VAR_6 = VAR_4;
        }
    }

    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_0->current = VAR_8;

    VAR_5 = VAR_6 / (8 * sizeof(uintptr_t));
    VAR_2 = (uintptr_t) 1 << VAR_6 % (8 * sizeof(uintptr_t));

    VAR_0->tried[VAR_5] |= VAR_2;

    VAR_8->current_weight -= VAR_3;

    if (VAR_1 - VAR_8->checked > VAR_8->fail_timeout) {
        VAR_8->checked = VAR_1;
    }

    return VAR_8;
}
