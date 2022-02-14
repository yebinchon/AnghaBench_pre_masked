
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int digest; int cipher; } ;
struct test_tls_crypt_context {TYPE_1__ kt; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct test_tls_crypt_context *VAR_0)
{
    if (!VAR_0->kt.cipher || !VAR_0->kt.digest)
    {
        FUNC_0();
    }
}
