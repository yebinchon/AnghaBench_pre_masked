
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct TYPE_14__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
typedef int ngx_stream_variable_value_t ;
struct TYPE_18__ {TYPE_5__* connection; } ;
typedef TYPE_6__ ngx_stream_session_t ;
struct TYPE_15__ {int tree; int tree6; } ;
struct TYPE_16__ {TYPE_3__ trees; } ;
struct TYPE_19__ {TYPE_4__ u; } ;
typedef TYPE_7__ ngx_stream_geo_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {TYPE_1__* sockaddr; } ;
typedef TYPE_8__ ngx_addr_t ;
typedef int in_addr_t ;
struct TYPE_17__ {int log; } ;
struct TYPE_13__ {int sa_family; } ;




 int FUNC_0 (struct in6_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,TYPE_7__*,TYPE_8__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_stream_session_t *VAR_3,
    ngx_stream_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    ngx_stream_geo_ctx_t *VAR_6 = (ngx_stream_geo_ctx_t *) VAR_5;

    in_addr_t VAR_7;
    ngx_addr_t VAR_8;
    struct sockaddr_in *VAR_9;
    ngx_stream_variable_value_t *VAR_10;





    if (FUNC_4(VAR_3, VAR_6, &VAR_8) != VAR_2) {
        VAR_10 = (ngx_stream_variable_value_t *)
                  FUNC_3(VAR_6->u.trees.tree, VAR_0);
        goto done;
    }

    switch (VAR_8.sockaddr->sa_family) {
    default:
        VAR_9 = (struct sockaddr_in *) VAR_8.sockaddr;
        VAR_7 = FUNC_5(VAR_9->sin_addr.s_addr);

        VAR_10 = (ngx_stream_variable_value_t *)
                  FUNC_3(VAR_6->u.trees.tree, VAR_7);

        break;
    }

done:

    *VAR_4 = *VAR_10;

    FUNC_1(VAR_1, VAR_3->connection->log, 0,
                   "stream geo: %v", VAR_4);

    return VAR_2;
}
