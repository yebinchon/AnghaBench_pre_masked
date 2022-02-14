
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
struct TYPE_17__ {int * name; int socklen; int sockaddr; int log; int * connection; scalar_t__ cached; int tries; } ;
typedef TYPE_2__ ngx_peer_connection_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int weight; scalar_t__ max_fails; scalar_t__ fails; scalar_t__ checked; scalar_t__ fail_timeout; scalar_t__ max_conns; scalar_t__ conns; int name; int socklen; int sockaddr; scalar_t__ down; struct TYPE_18__* next; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peer_t ;
struct TYPE_20__ {uintptr_t* tried; TYPE_9__* peers; TYPE_3__* current; } ;
struct TYPE_16__ {scalar_t__ len; int * data; } ;
struct TYPE_19__ {int tries; int (* get_rr_peer ) (TYPE_2__*,TYPE_6__*) ;scalar_t__ rehash; int hash; TYPE_6__ rrp; TYPE_1__ key; } ;
typedef TYPE_4__ ngx_http_upstream_hash_peer_data_t ;
struct TYPE_21__ {int total_weight; TYPE_3__* peer; scalar_t__ single; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int *,size_t) ;
 int FUNC_3 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_9__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (int ,int ,int ,char*,int ) ;
 int FUNC_8 (int ,int ,int ,char*,int,int) ;
 int * FUNC_9 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_6__*) ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_peer_connection_t *VAR_3, void *VAR_4)
{
    ngx_http_upstream_hash_peer_data_t *VAR_5 = VAR_4;

    time_t VAR_6;
    u_char VAR_7[VAR_0];
    size_t VAR_8;
    uint32_t VAR_9;
    ngx_int_t VAR_10;
    uintptr_t VAR_11;
    ngx_uint_t VAR_12, VAR_13;
    ngx_http_upstream_rr_peer_t *VAR_14;

    FUNC_7(VAR_1, VAR_3->log, 0,
                   "get hash peer, try: %ui", VAR_3->tries);

    FUNC_5(VAR_5->rrp.peers);

    if (VAR_5->tries > 20 || VAR_5->rrp.peers->single || VAR_5->key.len == 0) {
        FUNC_6(VAR_5->rrp.peers);
        return VAR_5->get_rr_peer(VAR_3, &VAR_5->rrp);
    }

    VAR_6 = FUNC_10();

    VAR_3->cached = 0;
    VAR_3->connection = ((void*)0);

    for ( ;; ) {







        FUNC_1(VAR_9);

        if (VAR_5->rehash > 0) {
            VAR_8 = FUNC_9(VAR_7, "%ui", VAR_5->rehash) - VAR_7;
            FUNC_2(&VAR_9, VAR_7, VAR_8);
        }

        FUNC_2(&VAR_9, VAR_5->key.data, VAR_5->key.len);
        FUNC_0(VAR_9);

        VAR_9 = (VAR_9 >> 16) & 0x7fff;

        VAR_5->hash += VAR_9;
        VAR_5->rehash++;

        VAR_10 = VAR_5->hash % VAR_5->rrp.peers->total_weight;
        VAR_14 = VAR_5->rrp.peers->peer;
        VAR_13 = 0;

        while (VAR_10 >= VAR_14->weight) {
            VAR_10 -= VAR_14->weight;
            VAR_14 = VAR_14->next;
            VAR_13++;
        }

        VAR_12 = VAR_13 / (8 * sizeof(uintptr_t));
        VAR_11 = (uintptr_t) 1 << VAR_13 % (8 * sizeof(uintptr_t));

        if (VAR_5->rrp.tried[VAR_12] & VAR_11) {
            goto next;
        }

        FUNC_3(VAR_5->rrp.peers, VAR_14);

        FUNC_8(VAR_1, VAR_3->log, 0,
                       "get hash peer, value:%uD, peer:%ui", VAR_5->hash, VAR_13);

        if (VAR_14->down) {
            FUNC_4(VAR_5->rrp.peers, VAR_14);
            goto next;
        }

        if (VAR_14->max_fails
            && VAR_14->fails >= VAR_14->max_fails
            && VAR_6 - VAR_14->checked <= VAR_14->fail_timeout)
        {
            FUNC_4(VAR_5->rrp.peers, VAR_14);
            goto next;
        }

        if (VAR_14->max_conns && VAR_14->conns >= VAR_14->max_conns) {
            FUNC_4(VAR_5->rrp.peers, VAR_14);
            goto next;
        }

        break;

    next:

        if (++VAR_5->tries > 20) {
            FUNC_6(VAR_5->rrp.peers);
            return VAR_5->get_rr_peer(VAR_3, &VAR_5->rrp);
        }
    }

    VAR_5->rrp.current = VAR_14;

    VAR_3->sockaddr = VAR_14->sockaddr;
    VAR_3->socklen = VAR_14->socklen;
    VAR_3->name = &VAR_14->name;

    VAR_14->conns++;

    if (VAR_6 - VAR_14->checked > VAR_14->fail_timeout) {
        VAR_14->checked = VAR_6;
    }

    FUNC_4(VAR_5->rrp.peers, VAR_14);
    FUNC_6(VAR_5->rrp.peers);

    VAR_5->rrp.tried[VAR_12] |= VAR_11;

    return VAR_2;
}
