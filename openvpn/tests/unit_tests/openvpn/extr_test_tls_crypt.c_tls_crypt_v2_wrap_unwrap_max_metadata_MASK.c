
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct tls_wrap_ctx {int tls_crypt_v2_server_key; int mode; } ;
struct TYPE_3__ {int encrypt; int decrypt; } ;
struct TYPE_4__ {int keys; } ;
struct test_tls_crypt_v2_context {int wkc; TYPE_1__ server_keys; int metadata; TYPE_2__ client_key2; int gc; } ;
struct key2 {int keys; int member_0; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct buffer*) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct tls_wrap_ctx*,int *) ;
 int FUNC_7 (struct key2*,struct buffer*,int ,int *) ;
 int FUNC_8 (int *,TYPE_2__*,int *,int *,int *) ;
 int FUNC_9 (struct tls_wrap_ctx*) ;

__attribute__((used)) static void
FUNC_10(void **VAR_2) {
    struct test_tls_crypt_v2_context *VAR_3 =
            (struct test_tls_crypt_v2_context *) *VAR_2;

    uint8_t* VAR_4 =
            FUNC_3(&VAR_3->metadata, VAR_0);
    FUNC_1(FUNC_5(VAR_4, VAR_0));
    FUNC_1(FUNC_8(&VAR_3->wkc, &VAR_3->client_key2,
                                             &VAR_3->metadata,
                                             &VAR_3->server_keys.encrypt,
                                             &VAR_3->gc));

    struct buffer VAR_5 = FUNC_0(VAR_0,
                                                 &VAR_3->gc);
    struct key2 VAR_6 = { 0 };
    FUNC_1(FUNC_7(&VAR_6,
                                               &VAR_5, VAR_3->wkc,
                                               &VAR_3->server_keys.decrypt));

    FUNC_1(0 == FUNC_4(VAR_3->client_key2.keys, VAR_6,
                            sizeof(VAR_3->client_key2.keys)));
    FUNC_1(FUNC_2(&VAR_3->metadata, &VAR_5));

    struct tls_wrap_ctx VAR_7 = {
            .mode = VAR_1,
            .tls_crypt_v2_server_key = VAR_3->server_keys.encrypt,
    };
    FUNC_1(FUNC_6(&VAR_3->wkc, &VAR_7, ((void*)0)));
    FUNC_9(&VAR_7);
}
