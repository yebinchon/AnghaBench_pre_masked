
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tls_crypt_context {int source; int unwrapped; int co; int ciphertext; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct test_tls_crypt_context*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(void **VAR_1) {
    struct test_tls_crypt_context *VAR_2 = (struct test_tls_crypt_context *) *VAR_1;

    FUNC_8(VAR_2);

    FUNC_6(&VAR_2->source);
    FUNC_4(FUNC_7(&VAR_2->source,
                                    VAR_0 - FUNC_0(&VAR_2->ciphertext) - FUNC_9()));

    FUNC_5(FUNC_11(&VAR_2->source, &VAR_2->ciphertext, &VAR_2->co));
    FUNC_5(FUNC_0(&VAR_2->source) < FUNC_0(&VAR_2->ciphertext));
    FUNC_5(FUNC_10(&VAR_2->ciphertext, &VAR_2->unwrapped, &VAR_2->co));
    FUNC_2(FUNC_0(&VAR_2->source), FUNC_0(&VAR_2->unwrapped));
    FUNC_3(FUNC_1(&VAR_2->source), FUNC_1(&VAR_2->unwrapped),
                        FUNC_0(&VAR_2->source));
}
