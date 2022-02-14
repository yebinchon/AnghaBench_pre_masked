
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int decrypt; } ;
struct TYPE_7__ {TYPE_2__ key_ctx_bi; } ;
struct test_tls_crypt_context {TYPE_3__ co; int unwrapped; int ciphertext; int source; int kt; } ;
struct TYPE_5__ {int member_0; } ;
struct key {TYPE_1__ member_0; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct key*,int *,int,char*) ;
 int FUNC_5 (struct test_tls_crypt_context*) ;
 int FUNC_6 (int *,int *,TYPE_3__*) ;
 int FUNC_7 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(void **VAR_0) {
    struct test_tls_crypt_context *VAR_1 = (struct test_tls_crypt_context *) *VAR_0;

    FUNC_5(VAR_1);


    struct key VAR_2 = { { 1 } };
    FUNC_3(&VAR_1->co.key_ctx_bi.decrypt);
    FUNC_4(&VAR_1->co.key_ctx_bi.decrypt, &VAR_2, &VAR_1->kt, 0, "TEST");

    FUNC_2(FUNC_7(&VAR_1->source, &VAR_1->ciphertext, &VAR_1->co));
    FUNC_2(FUNC_0(&VAR_1->source) < FUNC_0(&VAR_1->ciphertext));
    FUNC_1(FUNC_6(&VAR_1->ciphertext, &VAR_1->unwrapped, &VAR_1->co));
}
