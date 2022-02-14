
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_fragment_len_mode; int ct_validation; int alpn_protocols; int npn_protocols; int servername; int verify_callback; } ;
typedef TYPE_1__ SSL_TEST_CLIENT_CONF ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(SSL_TEST_CLIENT_CONF *VAR_0,
                         SSL_TEST_CLIENT_CONF *VAR_1)
{
    if (!FUNC_0(VAR_0->verify_callback, VAR_1->verify_callback)
            || !FUNC_0(VAR_0->servername, VAR_1->servername)
            || !FUNC_1(VAR_0->npn_protocols, VAR_1->npn_protocols)
            || !FUNC_1(VAR_0->alpn_protocols, VAR_1->alpn_protocols)
            || !FUNC_0(VAR_0->ct_validation, VAR_1->ct_validation)
            || !FUNC_0(VAR_0->max_fragment_len_mode,
                            VAR_1->max_fragment_len_mode))
        return 0;
    return 1;
}
