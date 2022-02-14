
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_socktype {int flags; int (* create ) (void*,int *) ;} ;
struct TYPE_2__ {int sndprio; int rcvprio; int ipv4only; } ;
struct nn_sock {int holds; int eid; int sndbuf; int rcvbuf; int rcvmaxsize; int sndtimeo; int rcvtimeo; int reconnect_ivl; int maxttl; int inbuffersz; int outbuffersz; int ctx; int fsm; struct nn_socktype const* socktype; int sockbase; int ** optsets; scalar_t__ sec_attr_size; int * sec_attr; int socket_name; int statistics; TYPE_1__ ep_template; scalar_t__ reconnect_ivl_max; int sdeps; int eps; scalar_t__ flags; int sndfd; int rcvfd; int relesem; int termsem; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (void*,int *) ;

int FUNC_16 (struct nn_sock *VAR_7, const struct nn_socktype *VAR_8,
    int VAR_9)
{
    int VAR_10;
    int VAR_11;


    FUNC_2 (!(VAR_8->flags & VAR_2) ||
        !(VAR_8->flags & VAR_1));


    FUNC_4 (&VAR_7->ctx, FUNC_10 (), VAR_5);


    FUNC_8 (&VAR_7->fsm, VAR_4,
        VAR_6, &VAR_7->ctx);
    VAR_7->state = VAR_3;



    if (VAR_8->flags & VAR_2)
        FUNC_1 (&VAR_7->sndfd, 0xcd, sizeof (VAR_7->sndfd));
    else {
        VAR_10 = FUNC_6 (&VAR_7->sndfd);
        if (FUNC_13 (VAR_10 < 0))
            return VAR_10;
    }
    if (VAR_8->flags & VAR_1)
        FUNC_1 (&VAR_7->rcvfd, 0xcd, sizeof (VAR_7->rcvfd));
    else {
        VAR_10 = FUNC_6 (&VAR_7->rcvfd);
        if (FUNC_13 (VAR_10 < 0)) {
            if (!(VAR_8->flags & VAR_2))
                FUNC_7 (&VAR_7->sndfd);
            return VAR_10;
        }
    }
    FUNC_12 (&VAR_7->termsem);
    FUNC_12 (&VAR_7->relesem);
    if (FUNC_13 (VAR_10 < 0)) {
        if (!(VAR_8->flags & VAR_1))
            FUNC_7 (&VAR_7->rcvfd);
        if (!(VAR_8->flags & VAR_2))
            FUNC_7 (&VAR_7->sndfd);
        return VAR_10;
    }

    VAR_7->holds = 1;
    VAR_7->flags = 0;
    FUNC_11 (&VAR_7->eps);
    FUNC_11 (&VAR_7->sdeps);
    VAR_7->eid = 1;


    VAR_7->sndbuf = 128 * 1024;
    VAR_7->rcvbuf = 128 * 1024;
    VAR_7->rcvmaxsize = 1024 * 1024;
    VAR_7->sndtimeo = -1;
    VAR_7->rcvtimeo = -1;
    VAR_7->reconnect_ivl = 100;
    VAR_7->reconnect_ivl_max = 0;
    VAR_7->maxttl = 8;
    VAR_7->ep_template.sndprio = 8;
    VAR_7->ep_template.rcvprio = 8;
    VAR_7->ep_template.ipv4only = 1;


    FUNC_1(&VAR_7->statistics, 0, sizeof (VAR_7->statistics));


    FUNC_14(VAR_7->socket_name, "%d", VAR_9);


    VAR_7->sec_attr = ((void*)0);
    VAR_7->sec_attr_size = 0;
    VAR_7->inbuffersz = 4096;
    VAR_7->outbuffersz = 4096;



    for (VAR_11 = 0; VAR_11 != VAR_0; ++VAR_11)
        VAR_7->optsets [VAR_11] = ((void*)0);


    VAR_10 = VAR_8->create ((void*) VAR_7, &VAR_7->sockbase);
    FUNC_0 (VAR_10 == 0, -VAR_10);
    VAR_7->socktype = VAR_8;


    FUNC_3 (&VAR_7->ctx);
    FUNC_9 (&VAR_7->fsm);
    FUNC_5 (&VAR_7->ctx);

    return 0;
}
