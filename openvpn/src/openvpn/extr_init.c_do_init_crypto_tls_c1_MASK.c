
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct options {int * priv_key_file_inline; int prng_nonce_secret_len; int prng_hash; int keysize; int authname; int ciphername; } ;
struct TYPE_5__ {int key_type; int ssl_ctx; } ;
struct TYPE_6__ {TYPE_2__ ks; } ;
struct context {struct options options; TYPE_3__ c1; TYPE_1__* sig; } ;
struct TYPE_4__ {char* signal_text; int signal_received; } ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (struct context*) ;
 int FUNC_4 (int *,int ,int ,int ,int,int) ;
 int FUNC_5 (struct options const*,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct context *VAR_3)
{
    const struct options *VAR_4 = &VAR_3->options;

    if (!FUNC_10(&VAR_3->c1.ks.ssl_ctx))
    {




        FUNC_5(VAR_4, &(VAR_3->c1.ks.ssl_ctx));
        if (!FUNC_10(&VAR_3->c1.ks.ssl_ctx))
        {
            FUNC_6(VAR_1, "Error: private key password verification failed");

        }


        FUNC_4(&VAR_3->c1.ks.key_type, VAR_4->ciphername, VAR_4->authname,
                      VAR_4->keysize, 1, 1);


        FUNC_7(VAR_4->prng_hash, VAR_4->prng_nonce_secret_len);


        FUNC_3(VAR_3);
    }
    else
    {
        FUNC_6(VAR_0, "Re-using SSL/TLS context");





        FUNC_3(VAR_3);
    }
}
