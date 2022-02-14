
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tls_crypt_context {int co; int ciphertext; int source; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct test_tls_crypt_context*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_8(void **VAR_1) {
    struct test_tls_crypt_context *VAR_2 = (struct test_tls_crypt_context *) *VAR_1;

    FUNC_5(VAR_2);

    FUNC_3(&VAR_2->source);
    FUNC_2(FUNC_4(&VAR_2->source,
                                    VAR_0 - FUNC_0(&VAR_2->ciphertext) - FUNC_6() + 1));
    FUNC_1(FUNC_7(&VAR_2->source, &VAR_2->ciphertext, &VAR_2->co));
}
