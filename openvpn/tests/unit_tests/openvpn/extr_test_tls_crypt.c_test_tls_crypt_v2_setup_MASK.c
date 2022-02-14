
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; scalar_t__ keys; } ;
struct TYPE_4__ {int n; scalar_t__ keys; } ;
struct test_tls_crypt_v2_context {TYPE_1__ client_key2; TYPE_2__ server_key2; int server_keys; int gc; void* wkc; void* unwrapped_metadata; void* metadata; } ;
struct key_type {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__,int *) ;
 struct test_tls_crypt_v2_context* FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,int ,struct key_type*,char*) ;
 int FUNC_4 (void*,int) ;
 struct key_type FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(void **VAR_3) {
    struct test_tls_crypt_v2_context *VAR_4 = FUNC_1(1, sizeof(*VAR_4));
    *VAR_3 = VAR_4;

    VAR_4->gc = FUNC_2();


    VAR_4->metadata = FUNC_0(VAR_1+16, &VAR_4->gc);
    VAR_4->unwrapped_metadata = FUNC_0(VAR_1+16,
                                           &VAR_4->gc);
    VAR_4->wkc = FUNC_0(VAR_2+16, &VAR_4->gc);


    FUNC_4((void *)VAR_4->server_key2.keys, sizeof(VAR_4->server_key2.keys));
    VAR_4->server_key2.n = 2;
    struct key_type VAR_5 = FUNC_5();
    FUNC_3(&VAR_4->server_keys, &VAR_4->server_key2,
                    VAR_0, &VAR_5,
                    "tls-crypt-v2 server key");


    FUNC_4((void *)VAR_4->client_key2.keys, sizeof(VAR_4->client_key2.keys));
    VAR_4->client_key2.n = 2;

    return 0;
}
