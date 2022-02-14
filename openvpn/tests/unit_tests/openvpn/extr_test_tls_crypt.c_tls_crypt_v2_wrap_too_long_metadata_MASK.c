
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int encrypt; } ;
struct test_tls_crypt_v2_context {int gc; TYPE_1__ server_keys; int metadata; int client_key2; int wkc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(void **VAR_1) {
    struct test_tls_crypt_v2_context *VAR_2 =
            (struct test_tls_crypt_v2_context *) *VAR_1;

    FUNC_1(FUNC_2(&VAR_2->metadata, VAR_0+1));
    FUNC_0(FUNC_3(&VAR_2->wkc, &VAR_2->client_key2,
                                              &VAR_2->metadata,
                                              &VAR_2->server_keys.encrypt,
                                              &VAR_2->gc));
}
