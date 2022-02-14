
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_http_v2_handler_pt ;
struct TYPE_12__ {size_t length; scalar_t__ sid; int handler; TYPE_3__* stream; int flags; scalar_t__ padding; } ;
struct TYPE_13__ {TYPE_4__ state; TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_11__ {TYPE_2__* request; } ;
struct TYPE_10__ {size_t request_length; } ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_5__*,int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_5__*,int *,int *,int ) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int *,int *,size_t) ;
 int FUNC_8 (int *,int *,size_t) ;
 size_t FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static u_char *
FUNC_10(ngx_http_v2_connection_t *VAR_4, u_char *VAR_5,
    u_char *VAR_6, ngx_http_v2_handler_pt VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9, VAR_10;
    uint32_t VAR_11;

    VAR_9 = VAR_4->state.length;

    if (VAR_4->state.padding && (size_t) (VAR_6 - VAR_5) > VAR_9) {
        VAR_10 = FUNC_9(VAR_4->state.padding, (VAR_6 - VAR_5) - VAR_9);

        VAR_4->state.padding -= VAR_10;

        VAR_8 = VAR_5;
        VAR_5 += VAR_10;
        FUNC_8(VAR_5, VAR_8, VAR_9);
    }

    if ((size_t) (VAR_6 - VAR_5) < VAR_9 + VAR_1) {
        return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
    }

    VAR_8 = VAR_5 + VAR_9;

    VAR_11 = FUNC_4(VAR_8);

    if (FUNC_3(VAR_11) != VAR_0) {
        FUNC_6(VAR_3, VAR_4->connection->log, 0,
             "client sent inappropriate frame while CONTINUATION was expected");

        return FUNC_0(VAR_4, VAR_2);
    }

    VAR_4->state.flags |= VAR_8[4];

    if (VAR_4->state.sid != FUNC_2(&VAR_8[5])) {
        FUNC_6(VAR_3, VAR_4->connection->log, 0,
                    "client sent CONTINUATION frame with incorrect identifier");

        return FUNC_0(VAR_4, VAR_2);
    }

    VAR_8 = VAR_5;
    VAR_5 += VAR_1;

    FUNC_7(VAR_5, VAR_8, VAR_9);

    VAR_9 = FUNC_1(VAR_11);

    VAR_4->state.length += VAR_9;

    if (VAR_4->state.stream) {
        VAR_4->state.stream->request->request_length += VAR_9;
    }

    VAR_4->state.handler = VAR_7;
    return VAR_5;
}
