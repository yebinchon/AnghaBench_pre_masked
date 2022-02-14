
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int decrypt; int encrypt; } ;
struct TYPE_6__ {int packet_id; TYPE_1__ key_ctx_bi; } ;
struct TYPE_7__ {int digest; int cipher; } ;
struct test_tls_crypt_context {void* ciphertext; void* source; void* unwrapped; TYPE_2__ co; TYPE_3__ kt; } ;
struct key {int member_0; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void**,char const*,int ) ;
 struct test_tls_crypt_context* FUNC_2 (int,int) ;
 int FUNC_3 (int *,struct key*,TYPE_3__*,int,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int ) ;
 int FUNC_5 (char const*) ;
 TYPE_3__ FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(void **VAR_1) {
    struct test_tls_crypt_context *VAR_2 = FUNC_2(1, sizeof(*VAR_2));
    *VAR_1 = VAR_2;

    struct key VAR_3 = { 0 };

    VAR_2->kt = FUNC_6();
    if (!VAR_2->kt.cipher || !VAR_2->kt.digest)
    {
        return 0;
    }
    FUNC_3(&VAR_2->co.key_ctx_bi.encrypt, &VAR_3, &VAR_2->kt, 1, "TEST");
    FUNC_3(&VAR_2->co.key_ctx_bi.decrypt, &VAR_3, &VAR_2->kt, 0, "TEST");

    FUNC_4(&VAR_2->co.packet_id, 0, 0, "test", 0);

    VAR_2->source = FUNC_0(VAR_0);
    VAR_2->ciphertext = FUNC_0(VAR_0);
    VAR_2->unwrapped = FUNC_0(VAR_0);


    const char *VAR_4 = "1234567890";
    FUNC_1(&VAR_2->source, VAR_4, FUNC_5(VAR_4));


    const char *VAR_5 = "012345678";
    FUNC_1(&VAR_2->ciphertext, VAR_5, FUNC_5(VAR_5));

    return 0;
}
