
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_9__ {int total_weight; int number; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peers_t ;
struct TYPE_10__ {TYPE_1__* conf; } ;
typedef TYPE_4__ ngx_http_upstream_random_peer_data_t ;
struct TYPE_8__ {int range; } ;
struct TYPE_7__ {TYPE_2__* ranges; } ;


 int FUNC_0 () ;

__attribute__((used)) static ngx_uint_t
FUNC_1(ngx_http_upstream_rr_peers_t *VAR_0,
    ngx_http_upstream_random_peer_data_t *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3, VAR_4, VAR_5;

    VAR_5 = FUNC_0() % VAR_0->total_weight;

    VAR_2 = 0;
    VAR_3 = VAR_0->number;

    while (VAR_3 - VAR_2 > 1) {
        VAR_4 = (VAR_2 + VAR_3) / 2;

        if (VAR_5 < VAR_1->conf->ranges[VAR_4].range) {
            VAR_3 = VAR_4;

        } else {
            VAR_2 = VAR_4;
        }
    }

    return VAR_2;
}
