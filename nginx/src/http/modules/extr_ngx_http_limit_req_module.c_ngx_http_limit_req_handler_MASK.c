
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_23__ ;
typedef struct TYPE_28__ TYPE_21__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int uint32_t ;
typedef size_t ngx_uint_t ;
struct TYPE_36__ {int len; int data; } ;
typedef TYPE_8__ ngx_str_t ;
typedef int ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_37__ {TYPE_7__* connection; int write_event_handler; int read_event_handler; TYPE_6__* main; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_5__* shm_zone; } ;
typedef TYPE_10__ ngx_http_limit_req_limit_t ;
struct TYPE_28__ {int value; } ;
struct TYPE_25__ {TYPE_3__* node; TYPE_2__* shpool; TYPE_21__ key; } ;
typedef TYPE_11__ ngx_http_limit_req_ctx_t ;
struct TYPE_27__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_26__ {scalar_t__ status_code; scalar_t__ dry_run; int delay_log_level; int limit_log_level; TYPE_1__ limits; } ;
typedef TYPE_12__ ngx_http_limit_req_conf_t ;
struct TYPE_35__ {TYPE_23__* write; int read; int log; } ;
struct TYPE_34__ {scalar_t__ limit_req_status; } ;
struct TYPE_32__ {int name; } ;
struct TYPE_33__ {TYPE_4__ shm; TYPE_11__* data; } ;
struct TYPE_31__ {int count; } ;
struct TYPE_30__ {int mutex; } ;
struct TYPE_29__ {int delayed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_23__*,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_21__*,TYPE_8__*) ;
 TYPE_12__* FUNC_4 (TYPE_9__*,int ) ;
 int FUNC_5 (TYPE_10__*,size_t,size_t*,TYPE_10__**) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (TYPE_10__*,int ,TYPE_8__*,size_t*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,char*,size_t,scalar_t__,size_t,size_t) ;
 int FUNC_8 (int ,int ,int ,char*,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_request_t *VAR_16)
{
    uint32_t VAR_17;
    ngx_str_t VAR_18;
    ngx_int_t VAR_19;
    ngx_uint_t VAR_20, VAR_21;
    ngx_msec_t VAR_22;
    ngx_http_limit_req_ctx_t *VAR_23;
    ngx_http_limit_req_conf_t *VAR_24;
    ngx_http_limit_req_limit_t *VAR_25, *VAR_26;

    if (VAR_16->main->limit_req_status) {
        return VAR_2;
    }

    VAR_24 = FUNC_4(VAR_16, VAR_14);
    VAR_26 = VAR_24->limits.elts;

    VAR_21 = 0;

    VAR_19 = VAR_2;





    for (VAR_20 = 0; VAR_20 < VAR_24->limits.nelts; VAR_20++) {

        VAR_25 = &VAR_26[VAR_20];

        VAR_23 = VAR_25->shm_zone->data;

        if (FUNC_3(VAR_16, &VAR_23->key, &VAR_18) != VAR_12) {
            return VAR_4;
        }

        if (VAR_18.len == 0) {
            continue;
        }

        if (VAR_18.len > 65535) {
            FUNC_8(VAR_11, VAR_16->connection->log, 0,
                          "the value of the \"%V\" key "
                          "is more than 65535 bytes: \"%V\"",
                          &VAR_23->key.value, &VAR_18);
            continue;
        }

        VAR_17 = FUNC_1(VAR_18.data, VAR_18.len);

        FUNC_9(&VAR_23->shpool->mutex);

        VAR_19 = FUNC_6(VAR_25, VAR_17, &VAR_18, &VAR_21,
                                       (VAR_20 == VAR_24->limits.nelts - 1));

        FUNC_10(&VAR_23->shpool->mutex);

        FUNC_7(VAR_10, VAR_16->connection->log, 0,
                       "limit_req[%ui]: %i %ui.%03ui",
                       VAR_20, VAR_19, VAR_21 / 1000, VAR_21 % 1000);

        if (VAR_19 != VAR_0) {
            break;
        }
    }

    if (VAR_19 == VAR_2) {
        return VAR_2;
    }

    if (VAR_19 == VAR_1 || VAR_19 == VAR_3) {

        if (VAR_19 == VAR_1) {
            FUNC_8(VAR_24->limit_log_level, VAR_16->connection->log, 0,
                        "limiting requests%s, excess: %ui.%03ui by zone \"%V\"",
                        VAR_24->dry_run ? ", dry run" : "",
                        VAR_21 / 1000, VAR_21 % 1000,
                        &VAR_25->shm_zone->shm.name);
        }

        while (VAR_20--) {
            VAR_23 = VAR_26[VAR_20].shm_zone->data;

            if (VAR_23->node == ((void*)0)) {
                continue;
            }

            FUNC_9(&VAR_23->shpool->mutex);

            VAR_23->node->count--;

            FUNC_10(&VAR_23->shpool->mutex);

            VAR_23->node = ((void*)0);
        }

        if (VAR_24->dry_run) {
            VAR_16->main->limit_req_status = VAR_9;
            return VAR_2;
        }

        VAR_16->main->limit_req_status = VAR_8;

        return VAR_24->status_code;
    }



    if (VAR_19 == VAR_0) {
        VAR_21 = 0;
    }

    VAR_22 = FUNC_5(VAR_26, VAR_20, &VAR_21, &VAR_25);

    if (!VAR_22) {
        VAR_16->main->limit_req_status = VAR_7;
        return VAR_2;
    }

    FUNC_8(VAR_24->delay_log_level, VAR_16->connection->log, 0,
                  "delaying request%s, excess: %ui.%03ui, by zone \"%V\"",
                  VAR_24->dry_run ? ", dry run" : "",
                  VAR_21 / 1000, VAR_21 % 1000, &VAR_25->shm_zone->shm.name);

    if (VAR_24->dry_run) {
        VAR_16->main->limit_req_status = VAR_6;
        return VAR_2;
    }

    VAR_16->main->limit_req_status = VAR_5;

    if (FUNC_2(VAR_16->connection->read, 0) != VAR_12) {
        return VAR_4;
    }

    VAR_16->read_event_handler = VAR_15;
    VAR_16->write_event_handler = VAR_13;

    VAR_16->connection->write->delayed = 1;
    FUNC_0(VAR_16->connection->write, VAR_22);

    return VAR_0;
}
