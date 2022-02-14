
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
struct TYPE_15__ {int * name; int socklen; int sockaddr; int log; int * connection; scalar_t__ cached; int tries; } ;
typedef TYPE_1__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int weight; scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; scalar_t__ max_conns; scalar_t__ conns; int name; int socklen; int sockaddr; scalar_t__ down; struct TYPE_16__* next; } ;
typedef TYPE_2__ ngx_http_upstream_rr_peer_t ;
struct TYPE_18__ {uintptr_t* tried; TYPE_8__* peers; TYPE_2__* current; } ;
struct TYPE_17__ {int tries; int (* get_rr_peer ) (TYPE_1__*,TYPE_5__*) ;int hash; int* addr; TYPE_5__ rrp; scalar_t__ addrlen; } ;
typedef TYPE_3__ ngx_http_upstream_ip_hash_peer_data_t ;
struct TYPE_19__ {int total_weight; TYPE_2__* peer; scalar_t__ single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_8__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_peer_connection_t *VAR_2, void *VAR_3)
{
    ngx_http_upstream_ip_hash_peer_data_t *VAR_4 = VAR_3;

    time_t VAR_5;
    ngx_int_t VAR_6;
    uintptr_t VAR_7;
    ngx_uint_t VAR_8, VAR_9, VAR_10, VAR_11;
    ngx_http_upstream_rr_peer_t *VAR_12;

    FUNC_4(VAR_0, VAR_2->log, 0,
                   "get ip hash peer, try: %ui", VAR_2->tries);



    FUNC_2(VAR_4->rrp.peers);

    if (VAR_4->tries > 20 || VAR_4->rrp.peers->single) {
        FUNC_3(VAR_4->rrp.peers);
        return VAR_4->get_rr_peer(VAR_2, &VAR_4->rrp);
    }

    VAR_5 = FUNC_6();

    VAR_2->cached = 0;
    VAR_2->connection = ((void*)0);

    VAR_11 = VAR_4->hash;

    for ( ;; ) {

        for (VAR_8 = 0; VAR_8 < (ngx_uint_t) VAR_4->addrlen; VAR_8++) {
            VAR_11 = (VAR_11 * 113 + VAR_4->addr[VAR_8]) % 6271;
        }

        VAR_6 = VAR_11 % VAR_4->rrp.peers->total_weight;
        VAR_12 = VAR_4->rrp.peers->peer;
        VAR_10 = 0;

        while (VAR_6 >= VAR_12->weight) {
            VAR_6 -= VAR_12->weight;
            VAR_12 = VAR_12->next;
            VAR_10++;
        }

        VAR_9 = VAR_10 / (8 * sizeof(uintptr_t));
        VAR_7 = (uintptr_t) 1 << VAR_10 % (8 * sizeof(uintptr_t));

        if (VAR_4->rrp.tried[VAR_9] & VAR_7) {
            goto next;
        }

        FUNC_5(VAR_0, VAR_2->log, 0,
                       "get ip hash peer, hash: %ui %04XL", VAR_10, (uint64_t) VAR_7);

        FUNC_0(VAR_4->rrp.peers, VAR_12);

        if (VAR_12->down) {
            FUNC_1(VAR_4->rrp.peers, VAR_12);
            goto next;
        }

        if (VAR_12->max_fails
            && VAR_12->fails >= VAR_12->max_fails
            && VAR_5 - VAR_12->checked <= VAR_12->fail_timeout)
        {
            FUNC_1(VAR_4->rrp.peers, VAR_12);
            goto next;
        }

        if (VAR_12->max_conns && VAR_12->conns >= VAR_12->max_conns) {
            FUNC_1(VAR_4->rrp.peers, VAR_12);
            goto next;
        }

        break;

    next:

        if (++VAR_4->tries > 20) {
            FUNC_3(VAR_4->rrp.peers);
            return VAR_4->get_rr_peer(VAR_2, &VAR_4->rrp);
        }
    }

    VAR_4->rrp.current = VAR_12;

    VAR_2->sockaddr = VAR_12->sockaddr;
    VAR_2->socklen = VAR_12->socklen;
    VAR_2->name = &VAR_12->name;

    VAR_12->conns++;

    if (VAR_5 - VAR_12->checked > VAR_12->fail_timeout) {
        VAR_12->checked = VAR_5;
    }

    FUNC_1(VAR_4->rrp.peers, VAR_12);
    FUNC_3(VAR_4->rrp.peers);

    VAR_4->rrp.tried[VAR_9] |= VAR_7;
    VAR_4->hash = VAR_11;

    return VAR_1;
}
