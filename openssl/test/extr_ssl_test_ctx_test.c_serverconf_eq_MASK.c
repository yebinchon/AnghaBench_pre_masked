
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cert_status; int session_ticket_app_data; int broken_session_ticket; int alpn_protocols; int npn_protocols; int servername_callback; } ;
typedef TYPE_1__ SSL_TEST_SERVER_CONF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(SSL_TEST_SERVER_CONF *VAR_0,
                         SSL_TEST_SERVER_CONF *VAR_1)
{
    if (!FUNC_0(VAR_0->servername_callback, VAR_1->servername_callback)
            || !FUNC_1(VAR_0->npn_protocols, VAR_1->npn_protocols)
            || !FUNC_1(VAR_0->alpn_protocols, VAR_1->alpn_protocols)
            || !FUNC_0(VAR_0->broken_session_ticket,
                            VAR_1->broken_session_ticket)
            || !FUNC_1(VAR_0->session_ticket_app_data,
                            VAR_1->session_ticket_app_data)
            || !FUNC_0(VAR_0->cert_status, VAR_1->cert_status))
        return 0;
    return 1;
}
