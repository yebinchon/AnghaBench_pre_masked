
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tls_crypt_v2_inline; scalar_t__ tls_crypt_v2_file; int tls_crypt_inline; scalar_t__ tls_crypt_file; int key_direction; int tls_auth_file_inline; scalar_t__ tls_auth_file; } ;
struct options {TYPE_3__ ce; scalar_t__ tls_server; int authname; } ;
struct TYPE_9__ {int digest; int hmac_length; } ;
struct TYPE_6__ {int tls_crypt_v2_wkc; int tls_wrap_key; int tls_crypt_v2_server_key; TYPE_4__ tls_auth_key_type; } ;
struct TYPE_7__ {TYPE_1__ ks; } ;
struct context {TYPE_2__ c1; struct options options; } ;


 int FUNC_0 (TYPE_4__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int *,scalar_t__,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (int *,int *,scalar_t__,int ) ;
 int FUNC_8 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9(struct context *VAR_1)
{
    const struct options *VAR_2 = &VAR_1->options;


    if (VAR_2->ce.tls_auth_file)
    {

        FUNC_0(VAR_1->c1.ks.tls_auth_key_type);
        if (!FUNC_5(VAR_2->authname, "none"))
        {
            VAR_1->c1.ks.tls_auth_key_type.digest = FUNC_2(VAR_2->authname);
            VAR_1->c1.ks.tls_auth_key_type.hmac_length =
                FUNC_3(VAR_1->c1.ks.tls_auth_key_type.digest);
        }
        else
        {
            FUNC_4(VAR_0, "ERROR: tls-auth enabled, but no valid --auth "
                "algorithm specified ('%s')", VAR_2->authname);
        }

        FUNC_1(&VAR_1->c1.ks.tls_auth_key_type,
                                &VAR_1->c1.ks.tls_wrap_key,
                                VAR_2->ce.tls_auth_file,
                                VAR_2->ce.tls_auth_file_inline,
                                VAR_2->ce.key_direction,
                                "Control Channel Authentication", "tls-auth");
    }


    if (VAR_2->ce.tls_crypt_file)
    {
        FUNC_6(&VAR_1->c1.ks.tls_wrap_key,
                           VAR_2->ce.tls_crypt_file,
                           VAR_2->ce.tls_crypt_inline, VAR_2->tls_server);
    }


    if (VAR_2->ce.tls_crypt_v2_file)
    {
        if (VAR_2->tls_server)
        {
            FUNC_8(&VAR_1->c1.ks.tls_crypt_v2_server_key,
                                         1, VAR_2->ce.tls_crypt_v2_file,
                                         VAR_2->ce.tls_crypt_v2_inline);
        }
        else
        {
            FUNC_7(&VAR_1->c1.ks.tls_wrap_key,
                                         &VAR_1->c1.ks.tls_crypt_v2_wkc,
                                         VAR_2->ce.tls_crypt_v2_file,
                                         VAR_2->ce.tls_crypt_v2_inline);
        }
    }


}
