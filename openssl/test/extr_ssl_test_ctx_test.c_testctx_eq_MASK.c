
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int session_id_expected; int resumption_expected; int expected_session_ticket_app_data; int expected_cipher; int expected_alpn_protocol; int expected_npn_protocol; int compression_expected; int session_ticket_expected; int expected_servername; int expected_protocol; int expected_server_alert; int expected_client_alert; int expected_result; int resume_extra; int extra; int max_fragment_size; int app_data_size; int handshake_mode; int method; } ;
typedef TYPE_1__ SSL_TEST_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(SSL_TEST_CTX *VAR_0, SSL_TEST_CTX *VAR_1)
{
    if (!FUNC_0(VAR_0->method, VAR_1->method)
            || !FUNC_0(VAR_0->handshake_mode, VAR_1->handshake_mode)
            || !FUNC_0(VAR_0->app_data_size, VAR_1->app_data_size)
            || !FUNC_0(VAR_0->max_fragment_size, VAR_1->max_fragment_size)
            || !FUNC_2(&VAR_0->extra, &VAR_1->extra)
            || !FUNC_2(&VAR_0->resume_extra, &VAR_1->resume_extra)
            || !FUNC_0(VAR_0->expected_result, VAR_1->expected_result)
            || !FUNC_0(VAR_0->expected_client_alert,
                            VAR_1->expected_client_alert)
            || !FUNC_0(VAR_0->expected_server_alert,
                            VAR_1->expected_server_alert)
            || !FUNC_0(VAR_0->expected_protocol, VAR_1->expected_protocol)
            || !FUNC_0(VAR_0->expected_servername, VAR_1->expected_servername)
            || !FUNC_0(VAR_0->session_ticket_expected,
                            VAR_1->session_ticket_expected)
            || !FUNC_0(VAR_0->compression_expected,
                            VAR_1->compression_expected)
            || !FUNC_1(VAR_0->expected_npn_protocol,
                            VAR_1->expected_npn_protocol)
            || !FUNC_1(VAR_0->expected_alpn_protocol,
                            VAR_1->expected_alpn_protocol)
            || !FUNC_1(VAR_0->expected_cipher,
                            VAR_1->expected_cipher)
            || !FUNC_1(VAR_0->expected_session_ticket_app_data,
                            VAR_1->expected_session_ticket_app_data)
            || !FUNC_0(VAR_0->resumption_expected,
                            VAR_1->resumption_expected)
            || !FUNC_0(VAR_0->session_id_expected,
                            VAR_1->session_id_expected))
        return 0;
    return 1;
}
