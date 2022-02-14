
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tls_crypt_context {int source; int unwrapped; int co; int ciphertext; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct test_tls_crypt_context*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_8(void **VAR_0) {
    struct test_tls_crypt_context *VAR_1 = (struct test_tls_crypt_context *) *VAR_0;

    FUNC_5(VAR_1);

    FUNC_4(FUNC_7(&VAR_1->source, &VAR_1->ciphertext, &VAR_1->co));
    FUNC_4(FUNC_0(&VAR_1->source) < FUNC_0(&VAR_1->ciphertext));
    FUNC_4(FUNC_6(&VAR_1->ciphertext, &VAR_1->unwrapped, &VAR_1->co));
    FUNC_2(FUNC_0(&VAR_1->source), FUNC_0(&VAR_1->unwrapped));
    FUNC_3(FUNC_1(&VAR_1->source), FUNC_1(&VAR_1->unwrapped),
                        FUNC_0(&VAR_1->source));
}
