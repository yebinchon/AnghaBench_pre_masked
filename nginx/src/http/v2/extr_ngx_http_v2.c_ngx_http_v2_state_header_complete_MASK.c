
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {int request; } ;
typedef TYPE_2__ ngx_http_v2_stream_t ;
struct TYPE_9__ {int flags; scalar_t__ padding; scalar_t__ keep_pool; int * pool; TYPE_2__* stream; int handler; scalar_t__ length; } ;
struct TYPE_11__ {TYPE_1__ state; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (TYPE_3__*,int *,int *) ;
 int VAR_1 ;
 int * FUNC_4 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static u_char *
FUNC_5(ngx_http_v2_connection_t *VAR_2, u_char *VAR_3,
    u_char *VAR_4)
{
    ngx_http_v2_stream_t *VAR_5;

    if (VAR_2->state.length) {
        VAR_2->state.handler = VAR_1;
        return VAR_3;
    }

    if (!(VAR_2->state.flags & VAR_0)) {
        return FUNC_1(VAR_2, VAR_3, VAR_4,
                                             FUNC_5);
    }

    VAR_5 = VAR_2->state.stream;

    if (VAR_5) {
        FUNC_2(VAR_5->request);
    }

    if (!VAR_2->state.keep_pool) {
        FUNC_0(VAR_2->state.pool);
    }

    VAR_2->state.pool = ((void*)0);
    VAR_2->state.keep_pool = 0;

    if (VAR_2->state.padding) {
        return FUNC_4(VAR_2, VAR_3, VAR_4);
    }

    return FUNC_3(VAR_2, VAR_3, VAR_4);
}
