
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_18__ {int len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {TYPE_4__* data; int init; } ;
struct TYPE_19__ {TYPE_1__ peer; } ;
typedef TYPE_3__ ngx_http_upstream_srv_conf_t ;
struct TYPE_20__ {int total_weight; TYPE_5__* peer; } ;
typedef TYPE_4__ ngx_http_upstream_rr_peers_t ;
struct TYPE_21__ {int weight; TYPE_2__ server; struct TYPE_21__* next; } ;
typedef TYPE_5__ ngx_http_upstream_rr_peer_t ;
struct TYPE_22__ {TYPE_7__* points; } ;
typedef TYPE_6__ ngx_http_upstream_hash_srv_conf_t ;
struct TYPE_23__ {size_t number; TYPE_9__* point; } ;
typedef TYPE_7__ ngx_http_upstream_chash_points_t ;
typedef int ngx_http_upstream_chash_point_t ;
struct TYPE_24__ {int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_25__ {int hash; TYPE_2__* server; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,char*,int) ;
 TYPE_6__* FUNC_3 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_3__*) ;
 TYPE_7__* FUNC_5 (int ,size_t) ;
 int FUNC_6 (TYPE_9__*,size_t,int,int ) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_conf_t *VAR_5, ngx_http_upstream_srv_conf_t *VAR_6)
{
    u_char *VAR_7, *VAR_8, VAR_9;
    size_t VAR_10, VAR_11, VAR_12;
    uint32_t VAR_13, VAR_14;
    ngx_str_t *VAR_15;
    ngx_uint_t VAR_16, VAR_17, VAR_18;
    ngx_http_upstream_rr_peer_t *VAR_19;
    ngx_http_upstream_rr_peers_t *VAR_20;
    ngx_http_upstream_chash_points_t *VAR_21;
    ngx_http_upstream_hash_srv_conf_t *VAR_22;
    union {
        uint32_t value;
        u_char byte[4];
    } VAR_23;

    if (FUNC_4(VAR_5, VAR_6) != VAR_1) {
        return VAR_0;
    }

    VAR_6->peer.init = VAR_4;

    VAR_20 = VAR_6->peer.data;
    VAR_16 = VAR_20->total_weight * 160;

    VAR_12 = sizeof(ngx_http_upstream_chash_points_t)
           + sizeof(ngx_http_upstream_chash_point_t) * (VAR_16 - 1);

    VAR_21 = FUNC_5(VAR_5->pool, VAR_12);
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    VAR_21->number = 0;

    for (VAR_19 = VAR_20->peer; VAR_19; VAR_19 = VAR_19->next) {
        VAR_15 = &VAR_19->server;






        if (VAR_15->len >= 5
            && FUNC_7(VAR_15->data, (u_char *) "unix:", 5) == 0)
        {
            VAR_7 = VAR_15->data + 5;
            VAR_10 = VAR_15->len - 5;
            VAR_8 = ((void*)0);
            VAR_11 = 0;
            goto done;
        }

        for (VAR_18 = 0; VAR_18 < VAR_15->len; VAR_18++) {
            VAR_9 = VAR_15->data[VAR_15->len - VAR_18 - 1];

            if (VAR_9 == ':') {
                VAR_7 = VAR_15->data;
                VAR_10 = VAR_15->len - VAR_18 - 1;
                VAR_8 = VAR_15->data + VAR_15->len - VAR_18;
                VAR_11 = VAR_18;
                goto done;
            }

            if (VAR_9 < '0' || VAR_9 > '9') {
                break;
            }
        }

        VAR_7 = VAR_15->data;
        VAR_10 = VAR_15->len;
        VAR_8 = ((void*)0);
        VAR_11 = 0;

    done:

        FUNC_1(VAR_14);
        FUNC_2(&VAR_14, VAR_7, VAR_10);
        FUNC_2(&VAR_14, (u_char *) "", 1);
        FUNC_2(&VAR_14, VAR_8, VAR_11);

        VAR_23.value = 0;
        VAR_16 = VAR_19->weight * 160;

        for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
            VAR_13 = VAR_14;

            FUNC_2(&VAR_13, VAR_23.byte, 4);
            FUNC_0(VAR_13);

            VAR_21->point[VAR_21->number].hash = VAR_13;
            VAR_21->point[VAR_21->number].server = VAR_15;
            VAR_21->number++;




            VAR_23.byte[0] = (u_char) (VAR_13 & 0xff);
            VAR_23.byte[1] = (u_char) ((VAR_13 >> 8) & 0xff);
            VAR_23.byte[2] = (u_char) ((VAR_13 >> 16) & 0xff);
            VAR_23.byte[3] = (u_char) ((VAR_13 >> 24) & 0xff);

        }
    }

    FUNC_6(VAR_21->point,
              VAR_21->number,
              sizeof(ngx_http_upstream_chash_point_t),
              VAR_2);

    for (VAR_17 = 0, VAR_18 = 1; VAR_18 < VAR_21->number; VAR_18++) {
        if (VAR_21->point[VAR_17].hash != VAR_21->point[VAR_18].hash) {
            VAR_21->point[++VAR_17] = VAR_21->point[VAR_18];
        }
    }

    VAR_21->number = VAR_17 + 1;

    VAR_22 = FUNC_3(VAR_6, VAR_3);
    VAR_22->points = VAR_21;

    return VAR_1;
}
