
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int compression; } ;
struct TYPE_5__ {int compression_expected; } ;
typedef TYPE_1__ SSL_TEST_CTX ;
typedef TYPE_2__ HANDSHAKE_RESULT ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(HANDSHAKE_RESULT *VAR_0, SSL_TEST_CTX *VAR_1)
{
    if (!FUNC_0(VAR_0->compression, VAR_1->compression_expected))
        return 0;
    return 1;
}
