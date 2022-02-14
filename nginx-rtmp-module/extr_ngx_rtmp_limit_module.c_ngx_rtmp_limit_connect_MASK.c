
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


typedef scalar_t__ uint32_t ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_12__ {int mutex; } ;
typedef TYPE_3__ ngx_slab_pool_t ;
struct TYPE_10__ {scalar_t__ addr; } ;
struct TYPE_13__ {scalar_t__* data; TYPE_1__ shm; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
struct TYPE_14__ {TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_rtmp_session_t ;
struct TYPE_15__ {scalar_t__ max_conn; TYPE_4__* shm_zone; } ;
typedef TYPE_6__ ngx_rtmp_limit_main_conf_t ;
typedef int ngx_rtmp_header_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,scalar_t__) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_6, ngx_rtmp_header_t *VAR_7,
    ngx_chain_t *VAR_8)
{
    ngx_rtmp_limit_main_conf_t *VAR_9;
    ngx_slab_pool_t *VAR_10;
    ngx_shm_zone_t *VAR_11;
    uint32_t *VAR_12, VAR_13;
    ngx_int_t VAR_14;

    VAR_9 = FUNC_2(VAR_6, VAR_5);
    if (VAR_9->max_conn == VAR_0) {
        return VAR_4;
    }

    VAR_11 = VAR_9->shm_zone;
    VAR_10 = (ngx_slab_pool_t *) VAR_11->shm.addr;
    VAR_12 = VAR_11->data;

    FUNC_3(&VAR_10->mutex);
    VAR_13 = ++*VAR_12;
    FUNC_4(&VAR_10->mutex);

    VAR_14 = VAR_13 > (ngx_uint_t) VAR_9->max_conn ? VAR_1 : VAR_4;

    FUNC_0(VAR_2, VAR_6->connection->log, 0,
                   "limit: inc conection counter: %uD", VAR_13);

    if (VAR_14 != VAR_4) {
        FUNC_1(VAR_3, VAR_6->connection->log, 0,
                      "limit: too many connections: %uD > %i",
                      VAR_13, VAR_9->max_conn);
    }

    return VAR_14;
}
