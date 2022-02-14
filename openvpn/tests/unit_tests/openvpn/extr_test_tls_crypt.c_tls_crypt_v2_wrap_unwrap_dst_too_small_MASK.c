
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zero ;
typedef int uint8_t ;
struct TYPE_2__ {int decrypt; int encrypt; } ;
struct test_tls_crypt_v2_context {int unwrapped_metadata; TYPE_1__ server_keys; int wkc; int gc; int metadata; int client_key2; } ;
struct key2 {int member_0; } ;
struct buffer {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 struct buffer FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct key2*,struct key2 const*,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct key2*,struct buffer*,int ,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_9(void **VAR_1) {
    struct test_tls_crypt_v2_context *VAR_2 =
            (struct test_tls_crypt_v2_context *) *VAR_1;

    uint8_t* VAR_3 =
            FUNC_4(&VAR_2->metadata, VAR_0);
    FUNC_3(FUNC_6(VAR_3, VAR_0));
    FUNC_3(FUNC_8(&VAR_2->wkc, &VAR_2->client_key2,
                                             &VAR_2->metadata,
                                             &VAR_2->server_keys.encrypt,
                                             &VAR_2->gc));

    struct key2 VAR_4 = { 0 };
    struct buffer VAR_5 =
            FUNC_1(VAR_0-1, &VAR_2->gc);
    FUNC_2(FUNC_7(&VAR_4,
                                                &VAR_5, VAR_2->wkc,
                                                &VAR_2->server_keys.decrypt));

    const struct key2 VAR_6 = { 0 };
    FUNC_3(0 == FUNC_5(&VAR_4, &VAR_6, sizeof(VAR_6)));
    FUNC_3(0 == FUNC_0(&VAR_2->unwrapped_metadata));
}
