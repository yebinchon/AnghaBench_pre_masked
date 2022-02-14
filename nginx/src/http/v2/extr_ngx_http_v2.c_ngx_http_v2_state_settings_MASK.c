
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {scalar_t__ flags; int length; } ;
struct TYPE_10__ {int settings_ack; TYPE_1__* connection; TYPE_2__ state; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_8__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (TYPE_3__*,int *,int *) ;
 int * FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;

__attribute__((used)) static u_char *
FUNC_5(ngx_http_v2_connection_t *VAR_5, u_char *VAR_6,
    u_char *VAR_7)
{
    if (VAR_5->state.flags == VAR_0) {

        if (VAR_5->state.length != 0) {
            FUNC_4(VAR_4, VAR_5->connection->log, 0,
                          "client sent SETTINGS frame with the ACK flag "
                          "and nonzero length");

            return FUNC_0(VAR_5, VAR_2);
        }

        VAR_5->settings_ack = 1;

        return FUNC_1(VAR_5, VAR_6, VAR_7);
    }

    if (VAR_5->state.length % VAR_1) {
        FUNC_4(VAR_4, VAR_5->connection->log, 0,
                      "client sent SETTINGS frame with incorrect length %uz",
                      VAR_5->state.length);

        return FUNC_0(VAR_5, VAR_2);
    }

    FUNC_3(VAR_3, VAR_5->connection->log, 0,
                   "http2 SETTINGS frame");

    return FUNC_2(VAR_5, VAR_6, VAR_7);
}
