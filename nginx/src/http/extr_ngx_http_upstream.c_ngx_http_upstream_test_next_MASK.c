
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {scalar_t__ status_n; } ;
struct TYPE_21__ {int tries; scalar_t__ start_time; } ;
struct TYPE_26__ {scalar_t__ cache_status; scalar_t__ (* reinit_request ) (TYPE_8__*) ;TYPE_4__ headers_in; TYPE_3__* conf; TYPE_1__ peer; scalar_t__ request_sent; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_27__ {scalar_t__ status; scalar_t__ mask; } ;
typedef TYPE_7__ ngx_http_upstream_next_t ;
struct TYPE_28__ {int method; TYPE_5__* cache; TYPE_2__* connection; scalar_t__ request_body_no_buffering; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_25__ {scalar_t__ valid_sec; scalar_t__ updating_sec; scalar_t__ error_sec; scalar_t__ date; scalar_t__ stale_error; } ;
struct TYPE_23__ {scalar_t__ next_upstream_timeout; scalar_t__ next_upstream; int cache_use_stale; int cache_valid; scalar_t__ cache_revalidate; } ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_8__*,TYPE_6__*,scalar_t__) ;
 TYPE_7__* VAR_15 ;
 int FUNC_5 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_16, ngx_http_upstream_t *VAR_17)
{
    ngx_msec_t VAR_18;
    ngx_uint_t VAR_19, VAR_20;
    ngx_http_upstream_next_t *VAR_21;

    VAR_19 = VAR_17->headers_in.status_n;

    for (VAR_21 = VAR_15; VAR_21->status; VAR_21++) {

        if (VAR_19 != VAR_21->status) {
            continue;
        }

        VAR_18 = VAR_17->conf->next_upstream_timeout;

        if (VAR_17->request_sent
            && (VAR_16->method & (VAR_9|VAR_6|VAR_8)))
        {
            VAR_20 = VAR_21->mask | VAR_10;

        } else {
            VAR_20 = VAR_21->mask;
        }

        if (VAR_17->peer.tries > 1
            && ((VAR_17->conf->next_upstream & VAR_20) == VAR_20)
            && !(VAR_17->request_sent && VAR_16->request_body_no_buffering)
            && !(VAR_18 && VAR_14 - VAR_17->peer.start_time >= VAR_18))
        {
            FUNC_4(VAR_16, VAR_17, VAR_21->mask);
            return VAR_13;
        }
    }
    return VAR_0;
}
