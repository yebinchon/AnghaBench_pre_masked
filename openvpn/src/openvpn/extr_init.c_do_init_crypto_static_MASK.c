
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct options {scalar_t__ replay; int key_direction; int shared_secret_file_inline; int shared_secret_file; int test_crypto; int keysize; int authname; int ciphername; int replay_time; int replay_window; scalar_t__ mute_replay_warnings; } ;
struct TYPE_7__ {int key_type; int static_key; } ;
struct TYPE_8__ {TYPE_3__ ks; int pid_persist; } ;
struct TYPE_5__ {int key_ctx_bi; int packet_id; int flags; int * pid_persist; } ;
struct TYPE_6__ {int frame; TYPE_1__ crypto_options; } ;
struct context {TYPE_4__ c1; TYPE_2__ c2; struct options options; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__,int) ;
 int FUNC_3 (int *,int *,int ,int ,int ,char*,char*) ;
 int FUNC_4 (struct context*,unsigned int const) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int ,int ,char*,int ) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct context *VAR_3, const unsigned int VAR_4)
{
    const struct options *VAR_5 = &VAR_3->options;
    FUNC_0(VAR_5->shared_secret_file);

    FUNC_4(VAR_3, VAR_4);


    if (VAR_3->options.mute_replay_warnings)
    {
        VAR_3->c2.crypto_options.flags |= VAR_0;
    }


    if (VAR_5->replay)
    {
        FUNC_8(&VAR_3->c2.crypto_options.packet_id,
                       VAR_5->replay_window,
                       VAR_5->replay_time,
                       "STATIC", 0);
        VAR_3->c2.crypto_options.pid_persist = &VAR_3->c1.pid_persist;
        VAR_3->c2.crypto_options.flags |= VAR_1;
        FUNC_9(&VAR_3->c1.pid_persist,
                                   &VAR_3->c2.crypto_options.packet_id);
    }

    if (!FUNC_6(&VAR_3->c1.ks.static_key))
    {

        FUNC_5(&VAR_3->c1.ks.key_type, VAR_5->ciphername, VAR_5->authname,
                      VAR_5->keysize, VAR_5->test_crypto, 1);


        FUNC_3(&VAR_3->c1.ks.key_type, &VAR_3->c1.ks.static_key,
                                VAR_5->shared_secret_file,
                                VAR_5->shared_secret_file_inline,
                                VAR_5->key_direction, "Static Key Encryption",
                                "secret");
    }
    else
    {
        FUNC_7(VAR_2, "Re-using pre-shared static key");
    }


    VAR_3->c2.crypto_options.key_ctx_bi = VAR_3->c1.ks.static_key;


    FUNC_2(&VAR_3->c2.frame, &VAR_3->c1.ks.key_type,
                                   VAR_5->replay, 1);


    FUNC_1(&VAR_3->c1.ks.key_type, VAR_5->replay);
}
