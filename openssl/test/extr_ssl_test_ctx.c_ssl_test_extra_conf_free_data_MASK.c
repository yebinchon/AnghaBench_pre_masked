
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int session_ticket_app_data; int srp_password; int srp_user; int alpn_protocols; int npn_protocols; } ;
struct TYPE_7__ {int session_ticket_app_data; int srp_password; int srp_user; int alpn_protocols; int npn_protocols; } ;
struct TYPE_6__ {int srp_password; int srp_user; int reneg_ciphers; int alpn_protocols; int npn_protocols; } ;
struct TYPE_9__ {TYPE_3__ server2; TYPE_2__ server; TYPE_1__ client; } ;
typedef TYPE_4__ SSL_TEST_EXTRA_CONF ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(SSL_TEST_EXTRA_CONF *VAR_0)
{
    FUNC_0(VAR_0->client.npn_protocols);
    FUNC_0(VAR_0->server.npn_protocols);
    FUNC_0(VAR_0->server2.npn_protocols);
    FUNC_0(VAR_0->client.alpn_protocols);
    FUNC_0(VAR_0->server.alpn_protocols);
    FUNC_0(VAR_0->server2.alpn_protocols);
    FUNC_0(VAR_0->client.reneg_ciphers);
    FUNC_0(VAR_0->server.srp_user);
    FUNC_0(VAR_0->server.srp_password);
    FUNC_0(VAR_0->server2.srp_user);
    FUNC_0(VAR_0->server2.srp_password);
    FUNC_0(VAR_0->client.srp_user);
    FUNC_0(VAR_0->client.srp_password);
    FUNC_0(VAR_0->server.session_ticket_app_data);
    FUNC_0(VAR_0->server2.session_ticket_app_data);
}
