
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_ctx_bi; } ;
struct test_tls_crypt_context {TYPE_1__ co; int unwrapped; int ciphertext; int source; } ;


 int FUNC_0 (struct test_tls_crypt_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void **VAR_0) {
    struct test_tls_crypt_context *VAR_1 =
            (struct test_tls_crypt_context *)*VAR_0;

    FUNC_1(&VAR_1->source);
    FUNC_1(&VAR_1->ciphertext);
    FUNC_1(&VAR_1->unwrapped);

    FUNC_2(&VAR_1->co.key_ctx_bi);

    FUNC_0(VAR_1);

    return 0;
}
