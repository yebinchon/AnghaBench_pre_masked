
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_char ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
typedef int ngx_uint_t ;
typedef int ngx_stream_variable_value_t ;
struct TYPE_19__ {TYPE_5__* connection; } ;
typedef TYPE_6__ ngx_stream_session_t ;
struct TYPE_20__ {int * value; scalar_t__ end; scalar_t__ start; } ;
typedef TYPE_7__ ngx_stream_geo_range_t ;
struct TYPE_16__ {TYPE_7__** low; int * default_value; } ;
struct TYPE_17__ {TYPE_3__ high; } ;
struct TYPE_21__ {TYPE_4__ u; } ;
typedef TYPE_8__ ngx_stream_geo_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {TYPE_1__* sockaddr; } ;
typedef TYPE_9__ ngx_addr_t ;
typedef int in_addr_t ;
struct TYPE_18__ {int log; } ;
struct TYPE_14__ {int sa_family; } ;




 int FUNC_0 (struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_8__*,TYPE_9__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_3,
    ngx_stream_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_stream_geo_ctx_t *VAR_6 = (ngx_stream_geo_ctx_t *) VAR_5;

    in_addr_t VAR_7;
    ngx_addr_t VAR_8;
    ngx_uint_t VAR_9;
    struct sockaddr_in *VAR_10;
    ngx_stream_geo_range_t *VAR_11;





    *VAR_4 = *VAR_6->u.high.default_value;

    if (FUNC_2(VAR_3, VAR_6, &VAR_8) == VAR_2) {

        switch (VAR_8.sockaddr->sa_family) {
        default:
            VAR_10 = (struct sockaddr_in *) VAR_8.sockaddr;
            VAR_7 = FUNC_3(VAR_10->sin_addr.s_addr);
            break;
        }

    } else {
        VAR_7 = VAR_0;
    }

    if (VAR_6->u.high.low) {
        VAR_11 = VAR_6->u.high.low[VAR_7 >> 16];

        if (VAR_11) {
            VAR_9 = VAR_7 & 0xffff;
            do {
                if (VAR_9 >= (ngx_uint_t) VAR_11->start
                    && VAR_9 <= (ngx_uint_t) VAR_11->end)
                {
                    *VAR_4 = *VAR_11->value;
                    break;
                }
            } while ((++VAR_11)->value);
        }
    }

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "stream geo: %v", VAR_4);

    return VAR_2;
}
