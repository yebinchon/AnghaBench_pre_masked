
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ client_protocol; scalar_t__ server_protocol; } ;
struct TYPE_5__ {scalar_t__ expected_protocol; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(HANDSHAKE_RESULT *VAR_0, SSL_TEST_CTX *VAR_1)
{
    if (!FUNC_1(VAR_0->client_protocol, VAR_0->server_protocol)) {
        FUNC_0("Client has protocol %s but server has %s.",
                  FUNC_2(VAR_0->client_protocol),
                  FUNC_2(VAR_0->server_protocol));
        return 0;
    }

    if (VAR_1->expected_protocol) {
        if (!FUNC_1(VAR_0->client_protocol,
                         VAR_1->expected_protocol)) {
            FUNC_0("Protocol mismatch: expected %s, got %s.\n",
                      FUNC_2(VAR_1->expected_protocol),
                      FUNC_2(VAR_0->client_protocol));
            return 0;
        }
    }
    return 1;
}
