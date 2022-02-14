
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct buffer {int dummy; } ;
struct test_tls_crypt_context {TYPE_1__ co; int unwrapped; struct buffer ciphertext; struct buffer source; } ;


 scalar_t__ FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct test_tls_crypt_context*) ;
 int FUNC_4 (struct buffer*,int *,TYPE_1__*) ;
 int FUNC_5 (struct buffer*,struct buffer*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(void **VAR_1) {
    struct test_tls_crypt_context *VAR_2 = (struct test_tls_crypt_context *) *VAR_1;

    FUNC_3(VAR_2);

    VAR_2->co.flags |= VAR_0;

    FUNC_1(FUNC_5(&VAR_2->source, &VAR_2->ciphertext, &VAR_2->co));
    FUNC_1(FUNC_0(&VAR_2->source) < FUNC_0(&VAR_2->ciphertext));
    struct buffer VAR_3 = VAR_2->ciphertext;
    FUNC_1(FUNC_4(&VAR_3, &VAR_2->unwrapped, &VAR_2->co));
    FUNC_2(&VAR_2->unwrapped);
    FUNC_1(FUNC_4(&VAR_2->ciphertext, &VAR_2->unwrapped, &VAR_2->co));
}
