
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* expected_cipher; int expected_client_ca_names; int expected_server_ca_names; struct TYPE_5__* expected_session_ticket_app_data; struct TYPE_5__* expected_alpn_protocol; struct TYPE_5__* expected_npn_protocol; } ;
typedef TYPE_1__ SSL_TEST_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(SSL_TEST_CTX *VAR_1)
{
    FUNC_2(VAR_1);
    FUNC_0(VAR_1->expected_npn_protocol);
    FUNC_0(VAR_1->expected_alpn_protocol);
    FUNC_0(VAR_1->expected_session_ticket_app_data);
    FUNC_1(VAR_1->expected_server_ca_names, VAR_0);
    FUNC_1(VAR_1->expected_client_ca_names, VAR_0);
    FUNC_0(VAR_1->expected_cipher);
    FUNC_0(VAR_1);
}
