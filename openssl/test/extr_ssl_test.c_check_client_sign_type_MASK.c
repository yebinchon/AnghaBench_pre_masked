
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int client_sign_type; } ;
struct TYPE_5__ {int expected_client_sign_type; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(HANDSHAKE_RESULT *VAR_0,
                                  SSL_TEST_CTX *VAR_1)
{
    return FUNC_0("Client signing", VAR_1->expected_client_sign_type,
                     VAR_0->client_sign_type);
}
