
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_tls_crypt_v2_context {int gc; int client_key; int server_keys; } ;


 int FUNC_0 (struct test_tls_crypt_v2_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void **VAR_0) {
    struct test_tls_crypt_v2_context *VAR_1 =
            (struct test_tls_crypt_v2_context *) *VAR_0;

    FUNC_1(&VAR_1->server_keys);
    FUNC_1(&VAR_1->client_key);

    FUNC_2(&VAR_1->gc);

    FUNC_0(VAR_1);

    return 0;
}
