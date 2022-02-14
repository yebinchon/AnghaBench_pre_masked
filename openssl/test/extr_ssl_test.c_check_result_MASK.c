
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int result; } ;
struct TYPE_5__ {int expected_result; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(HANDSHAKE_RESULT *VAR_0, SSL_TEST_CTX *VAR_1)
{
    if (!FUNC_1(VAR_0->result, VAR_1->expected_result)) {
        FUNC_0("ExpectedResult mismatch: expected %s, got %s.",
                  FUNC_2(VAR_1->expected_result),
                  FUNC_2(VAR_0->result));
        return 0;
    }
    return 1;
}
