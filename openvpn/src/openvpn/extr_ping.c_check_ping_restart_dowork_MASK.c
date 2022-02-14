
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gc_arena {int dummy; } ;
struct TYPE_3__ {int ping_rec_timeout_action; } ;
struct context {TYPE_2__* sig; TYPE_1__ options; } ;
struct TYPE_4__ {char* signal_text; int signal_received; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct context*,struct gc_arena*) ;
 int FUNC_2 (struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int ,char*,int ) ;

void
FUNC_5(struct context *VAR_3)
{
    struct gc_arena VAR_4 = FUNC_3();
    switch (VAR_3->options.ping_rec_timeout_action)
    {
        case 129:
            FUNC_4(VAR_0, "%sInactivity timeout (--ping-exit), exiting",
                FUNC_1(VAR_3, &VAR_4));
            VAR_3->sig->signal_received = VAR_1;
            VAR_3->sig->signal_text = "ping-exit";
            break;

        case 128:
            FUNC_4(VAR_0, "%sInactivity timeout (--ping-restart), restarting",
                FUNC_1(VAR_3, &VAR_4));
            VAR_3->sig->signal_received = VAR_2;
            VAR_3->sig->signal_text = "ping-restart";
            break;

        default:
            FUNC_0(0);
    }
    FUNC_2(&VAR_4);
}
