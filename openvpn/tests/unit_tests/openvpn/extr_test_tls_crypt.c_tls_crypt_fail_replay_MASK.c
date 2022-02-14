
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
struct test_tls_crypt_context {int co; int unwrapped; struct buffer ciphertext; struct buffer source; } ;


 scalar_t__ FUNC_0 (struct buffer*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct test_tls_crypt_context*) ;
 int FUNC_5 (struct buffer*,int *,int *) ;
 int FUNC_6 (struct buffer*,struct buffer*,int *) ;

__attribute__((used)) static void
FUNC_7(void **VAR_0) {
    struct test_tls_crypt_context *VAR_1 = (struct test_tls_crypt_context *) *VAR_0;

    FUNC_4(VAR_1);

    FUNC_2(FUNC_6(&VAR_1->source, &VAR_1->ciphertext, &VAR_1->co));
    FUNC_2(FUNC_0(&VAR_1->source) < FUNC_0(&VAR_1->ciphertext));
    struct buffer VAR_2 = VAR_1->ciphertext;
    FUNC_2(FUNC_5(&VAR_2, &VAR_1->unwrapped, &VAR_1->co));
    FUNC_3(&VAR_1->unwrapped);
    FUNC_1(FUNC_5(&VAR_1->ciphertext, &VAR_1->unwrapped, &VAR_1->co));
}
