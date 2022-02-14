
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zero ;
struct TYPE_4__ {int decrypt; int encrypt; } ;
struct TYPE_5__ {int keys; } ;
struct test_tls_crypt_v2_context {int unwrapped_metadata; TYPE_1__ server_keys; int wkc; TYPE_2__ server_key2; int gc; int metadata; int client_key2; } ;
struct key_type {int dummy; } ;
struct key2 {int member_0; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ,struct key_type*,char*) ;
 scalar_t__ FUNC_5 (struct key2*,struct key2 const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 struct key_type FUNC_7 () ;
 int FUNC_8 (struct key2*,int *,int ,int *) ;
 int FUNC_9 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(void **VAR_1) {
    struct test_tls_crypt_v2_context *VAR_2 =
            (struct test_tls_crypt_v2_context *) *VAR_1;

    FUNC_2(FUNC_9(&VAR_2->wkc, &VAR_2->client_key2,
                                             &VAR_2->metadata,
                                             &VAR_2->server_keys.encrypt,
                                             &VAR_2->gc));


    struct key_type VAR_3 = FUNC_7();
    FUNC_3(&VAR_2->server_keys);
    FUNC_6(&VAR_2->server_key2.keys, 0, sizeof(VAR_2->server_key2.keys));
    FUNC_4(&VAR_2->server_keys, &VAR_2->server_key2,
                    VAR_0, &VAR_3,
                    "wrong tls-crypt-v2 server key");


    struct key2 VAR_4 = { 0 };
    FUNC_1(FUNC_8(&VAR_4,
                                                &VAR_2->unwrapped_metadata,
                                                VAR_2->wkc,
                                                &VAR_2->server_keys.decrypt));

    const struct key2 VAR_5 = { 0 };
    FUNC_2(0 == FUNC_5(&VAR_4, &VAR_5, sizeof(VAR_5)));
    FUNC_2(0 == FUNC_0(&VAR_2->unwrapped_metadata));
}
