
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int client_alpn_negotiated; int server_alpn_negotiated; } ;
struct TYPE_5__ {int expected_alpn_protocol; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(HANDSHAKE_RESULT *VAR_0, SSL_TEST_CTX *VAR_1)
{
    int VAR_2 = 1;
    if (!FUNC_0(VAR_0->client_alpn_negotiated,
                     VAR_0->server_alpn_negotiated))
        VAR_2 = 0;
    if (!FUNC_0(VAR_1->expected_alpn_protocol,
                     VAR_0->client_alpn_negotiated))
        VAR_2 = 0;
    return VAR_2;
}
