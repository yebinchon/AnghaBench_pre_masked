
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* time_t ;
typedef int ngx_uint_t ;
struct TYPE_12__ {TYPE_2__* tries; int log; } ;
typedef TYPE_1__ ngx_peer_connection_t ;
struct TYPE_13__ {int fails; scalar_t__ accessed; scalar_t__ checked; int max_fails; int effective_weight; int weight; int conns; } ;
typedef TYPE_2__ ngx_http_upstream_rr_peer_t ;
struct TYPE_14__ {TYPE_5__* peers; TYPE_2__* current; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peer_data_t ;
struct TYPE_15__ {scalar_t__ single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_2__*,int) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 void* FUNC_6 () ;

void
FUNC_7(ngx_peer_connection_t *VAR_3, void *VAR_4,
    ngx_uint_t VAR_5)
{
    ngx_http_upstream_rr_peer_data_t *VAR_6 = VAR_4;

    time_t VAR_7;
    ngx_http_upstream_rr_peer_t *VAR_8;

    FUNC_4(VAR_0, VAR_3->log, 0,
                   "free rr peer %ui %ui", VAR_3->tries, VAR_5);



    VAR_8 = VAR_6->current;

    FUNC_2(VAR_6->peers);
    FUNC_0(VAR_6->peers, VAR_8);

    if (VAR_6->peers->single) {

        VAR_8->conns--;

        FUNC_1(VAR_6->peers, VAR_8);
        FUNC_3(VAR_6->peers);

        VAR_3->tries = 0;
        return;
    }

    if (VAR_5 & VAR_2) {
        VAR_7 = FUNC_6();

        VAR_8->fails++;
        VAR_8->accessed = VAR_7;
        VAR_8->checked = VAR_7;

        if (VAR_8->max_fails) {
            VAR_8->effective_weight -= VAR_8->weight / VAR_8->max_fails;

            if (VAR_8->fails >= VAR_8->max_fails) {
                FUNC_5(VAR_1, VAR_3->log, 0,
                              "upstream server temporarily disabled");
            }
        }

        FUNC_4(VAR_0, VAR_3->log, 0,
                       "free rr peer failed: %p %i",
                       VAR_8, VAR_8->effective_weight);

        if (VAR_8->effective_weight < 0) {
            VAR_8->effective_weight = 0;
        }

    } else {



        if (VAR_8->accessed < VAR_8->checked) {
            VAR_8->fails = 0;
        }
    }

    VAR_8->conns--;

    FUNC_1(VAR_6->peers, VAR_8);
    FUNC_3(VAR_6->peers);

    if (VAR_3->tries) {
        VAR_3->tries--;
    }
}
