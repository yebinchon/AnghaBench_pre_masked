
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_11__ {size_t field_rest; size_t length; int flags; } ;
struct TYPE_13__ {TYPE_2__* connection; TYPE_1__ state; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int * FUNC_2 (TYPE_3__*,int *,int *) ;
 int * FUNC_3 (TYPE_3__*,int *,int *,int * (*) (TYPE_3__*,int *,int *)) ;
 int FUNC_4 (int ,int ,int ,char*) ;

__attribute__((used)) static u_char *
FUNC_5(ngx_http_v2_connection_t *VAR_3, u_char *VAR_4,
    u_char *VAR_5)
{
    size_t VAR_6;

    VAR_6 = VAR_5 - VAR_4;

    if (VAR_6 > VAR_3->state.field_rest) {
        VAR_6 = VAR_3->state.field_rest;
    }

    if (VAR_6 > VAR_3->state.length) {
        VAR_6 = VAR_3->state.length;
    }

    VAR_3->state.length -= VAR_6;
    VAR_3->state.field_rest -= VAR_6;

    VAR_4 += VAR_6;

    if (VAR_3->state.field_rest == 0) {
        return FUNC_2(VAR_3, VAR_4, VAR_5);
    }

    if (VAR_3->state.length) {
        return FUNC_3(VAR_3, VAR_4, VAR_5,
                                      FUNC_5);
    }

    if (VAR_3->state.flags & VAR_0) {
        FUNC_4(VAR_2, VAR_3->connection->log, 0,
                      "client sent header field with incorrect length");

        return FUNC_0(VAR_3, VAR_1);
    }

    return FUNC_1(VAR_3, VAR_4, VAR_5,
                                           FUNC_5);
}
