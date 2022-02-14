
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {size_t length; } ;
struct TYPE_10__ {TYPE_2__ state; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*,int *,int *) ;
 int * FUNC_1 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,char*,size_t,size_t) ;

__attribute__((used)) static u_char *
FUNC_4(ngx_http_v2_connection_t *VAR_1, u_char *VAR_2, u_char *VAR_3)
{
    size_t VAR_4;

    VAR_4 = VAR_3 - VAR_2;

    if (VAR_4 < VAR_1->state.length) {
        FUNC_3(VAR_0, VAR_1->connection->log, 0,
                       "http2 frame skip %uz of %uz", VAR_4, VAR_1->state.length);

        VAR_1->state.length -= VAR_4;
        return FUNC_1(VAR_1, VAR_3, VAR_3, FUNC_4);
    }

    FUNC_2(VAR_0, VAR_1->connection->log, 0,
                   "http2 frame skip %uz", VAR_1->state.length);

    return FUNC_0(VAR_1, VAR_2 + VAR_1->state.length, VAR_3);
}
