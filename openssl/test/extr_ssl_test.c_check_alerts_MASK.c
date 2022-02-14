
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int client_alert_sent; int client_alert_received; int server_alert_sent; int server_alert_received; int server_num_fatal_alerts_sent; int client_num_fatal_alerts_sent; } ;
struct TYPE_5__ {int expected_client_alert; int expected_server_alert; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(HANDSHAKE_RESULT *VAR_0, SSL_TEST_CTX *VAR_1)
{
    if (!FUNC_2(VAR_0->client_alert_sent,
                     VAR_0->client_alert_received)) {
        FUNC_1("Client sent alert %s but server received %s.",
                  FUNC_4(VAR_0->client_alert_sent),
                  FUNC_4(VAR_0->client_alert_received));
    }

    if (!FUNC_2(VAR_0->server_alert_sent,
                     VAR_0->server_alert_received)) {
        FUNC_1("Server sent alert %s but client received %s.",
                  FUNC_4(VAR_0->server_alert_sent),
                  FUNC_4(VAR_0->server_alert_received));

    }


    if (VAR_1->expected_client_alert





        && (VAR_0->client_alert_sent & 0xff) != VAR_1->expected_client_alert) {
        FUNC_0("ClientAlert mismatch: expected %s, got %s.",
                   FUNC_4(VAR_1->expected_client_alert),
                   FUNC_4(VAR_0->client_alert_sent));
        return 0;
    }

    if (VAR_1->expected_server_alert
        && (VAR_0->server_alert_sent & 0xff) != VAR_1->expected_server_alert) {
        FUNC_0("ServerAlert mismatch: expected %s, got %s.",
                   FUNC_4(VAR_1->expected_server_alert),
                   FUNC_4(VAR_0->server_alert_sent));
        return 0;
    }

    if (!FUNC_3(VAR_0->client_num_fatal_alerts_sent, 1))
        return 0;
    if (!FUNC_3(VAR_0->server_num_fatal_alerts_sent, 1))
        return 0;
    return 1;
}
