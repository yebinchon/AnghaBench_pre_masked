
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int keys; } ;
struct TYPE_3__ {int decrypt; int encrypt; } ;
struct test_tls_crypt_v2_context {TYPE_2__ client_key2; TYPE_1__ server_keys; int gc; int metadata; } ;
struct key2 {int keys; int member_0; } ;
struct buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct buffer FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct key2*,struct buffer*,struct buffer,int *) ;
 int FUNC_4 (struct buffer*,TYPE_2__*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(void **VAR_2) {
    struct test_tls_crypt_v2_context *VAR_3 =
            (struct test_tls_crypt_v2_context *) *VAR_2;

    struct buffer VAR_4 = FUNC_0(VAR_1,
                                                    &VAR_3->gc);
    FUNC_1(FUNC_4(&VAR_4,
                                             &VAR_3->client_key2,
                                             &VAR_3->metadata,
                                             &VAR_3->server_keys.encrypt,
                                             &VAR_3->gc));

    struct buffer VAR_5 = FUNC_0(VAR_0,
                                                 &VAR_3->gc);
    struct key2 VAR_6 = { 0 };
    FUNC_1(FUNC_3(&VAR_6,
                                               &VAR_5,
                                               VAR_4,
                                               &VAR_3->server_keys.decrypt));

    FUNC_1(0 == FUNC_2(VAR_3->client_key2.keys, VAR_6,
                            sizeof(VAR_3->client_key2.keys)));
}
