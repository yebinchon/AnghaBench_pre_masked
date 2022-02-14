
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {char* test_section; TYPE_7__* expected_ctx; } ;
struct TYPE_14__ {int ct_validation; } ;
struct TYPE_13__ {void* alpn_protocols; } ;
struct TYPE_15__ {TYPE_5__ client; TYPE_4__ server2; } ;
struct TYPE_11__ {int broken_session_ticket; int servername_callback; } ;
struct TYPE_10__ {scalar_t__ max_fragment_len_mode; void* npn_protocols; void* servername; int verify_callback; } ;
struct TYPE_12__ {TYPE_2__ server; TYPE_1__ client; } ;
struct TYPE_16__ {int app_data_size; int max_fragment_size; int resumption_expected; TYPE_6__ resume_extra; TYPE_3__ extra; int session_id_expected; int compression_expected; int session_ticket_expected; void* expected_servername; int expected_protocol; scalar_t__ expected_server_alert; int expected_client_alert; int expected_result; int handshake_mode; int method; } ;


 int FUNC_0 () ;
 void* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void*) ;
 int VAR_11 ;
 TYPE_8__* VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_5(void)
{
    FUNC_2();
    if (VAR_12 == ((void*)0))
        return 0;
    VAR_12->test_section = "ssltest_good";
    VAR_12->expected_ctx->method = VAR_4;
    VAR_12->expected_ctx->handshake_mode = VAR_3;
    VAR_12->expected_ctx->app_data_size = 1024;
    VAR_12->expected_ctx->max_fragment_size = 2048;

    VAR_12->expected_ctx->expected_result = VAR_7;
    VAR_12->expected_ctx->expected_client_alert = VAR_0;
    VAR_12->expected_ctx->expected_server_alert = 0;
    VAR_12->expected_ctx->expected_protocol = VAR_11;
    VAR_12->expected_ctx->expected_servername = VAR_6;
    VAR_12->expected_ctx->session_ticket_expected = VAR_9;
    VAR_12->expected_ctx->compression_expected = VAR_1;
    VAR_12->expected_ctx->session_id_expected = VAR_8;
    VAR_12->expected_ctx->resumption_expected = 1;

    VAR_12->expected_ctx->extra.client.verify_callback =
        VAR_10;
    VAR_12->expected_ctx->extra.client.servername = VAR_6;
    VAR_12->expected_ctx->extra.client.npn_protocols =
        FUNC_1("foo,bar");
    if (!FUNC_3(VAR_12->expected_ctx->extra.client.npn_protocols))
        goto err;
    VAR_12->expected_ctx->extra.client.max_fragment_len_mode = 0;

    VAR_12->expected_ctx->extra.server.servername_callback =
        VAR_5;
    VAR_12->expected_ctx->extra.server.broken_session_ticket = 1;

    VAR_12->expected_ctx->resume_extra.server2.alpn_protocols =
        FUNC_1("baz");
    if (!FUNC_3(VAR_12->expected_ctx->resume_extra.server2.alpn_protocols))
        goto err;

    VAR_12->expected_ctx->resume_extra.client.ct_validation =
        VAR_2;

    FUNC_0();
    return VAR_13;

err:
    FUNC_4(VAR_12);
    return 0;
}
