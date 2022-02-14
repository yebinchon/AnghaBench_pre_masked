
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handshake_mode; } ;
typedef TYPE_1__ SSL_TEST_CTX ;






__attribute__((used)) static int FUNC_0(const SSL_TEST_CTX *VAR_0)
{
    switch (VAR_0->handshake_mode) {
    case 130:
    case 129:
    case 128:
        return 1;
    default:
        return 0;
    }
}
