
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int packet_id; int pid_persist; } ;
struct TYPE_6__ {TYPE_2__ opt; int work; } ;
struct tls_session {int session_id; int * key; TYPE_3__ tls_wrap; int key_id; TYPE_1__* opt; int initial_opcode; } ;
struct TYPE_4__ {int key_method; int replay_time; int replay_window; int frame; TYPE_3__ tls_wrap; scalar_t__ tls_crypt_v2; scalar_t__ server; } ;
struct tls_multi {TYPE_1__ opt; } ;
struct gc_arena {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tls_session) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (struct tls_session*,int *) ;
 int FUNC_8 (int *,int ,int ,char*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct gc_arena*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct tls_multi *VAR_7, struct tls_session *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_6();

    FUNC_4(VAR_0, "TLS: tls_session_init: entry");

    FUNC_2(*VAR_8);


    VAR_8->opt = &VAR_7->opt;


    while (!FUNC_10(&VAR_8->session_id))
    {
        FUNC_12(&VAR_8->session_id);
    }


    FUNC_0(VAR_8->opt->key_method >= 1);
    if (VAR_8->opt->key_method == 1)
    {
        VAR_8->initial_opcode = VAR_8->opt->server ?
                                  VAR_5 : VAR_2;
    }
    else
    {
        if (VAR_8->opt->server)
        {
            VAR_8->initial_opcode = VAR_6;
        }
        else
        {
            VAR_8->initial_opcode = VAR_8->opt->tls_crypt_v2 ?
                                      VAR_4 : VAR_3;
        }
    }


    VAR_8->tls_wrap = VAR_8->opt->tls_wrap;
    VAR_8->tls_wrap.work = FUNC_3(FUNC_1(&VAR_8->opt->frame));


    FUNC_8(&VAR_8->tls_wrap.opt.packet_id,
                   VAR_8->opt->replay_window,
                   VAR_8->opt->replay_time,
                   "TLS_WRAP", VAR_8->key_id);


    FUNC_9(VAR_8->tls_wrap.opt.pid_persist,
                               &VAR_8->tls_wrap.opt.packet_id);

    FUNC_7(VAR_8, &VAR_8->key[VAR_1]);

    FUNC_4(VAR_0, "TLS: tls_session_init: new session object, sid=%s",
         FUNC_11(&VAR_8->session_id, &VAR_9));

    FUNC_5(&VAR_9);
}
