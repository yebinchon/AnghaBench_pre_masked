
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nn_sock {TYPE_3__** optsets; int ctx; int eps; int sdeps; int relesem; int termsem; int fsm; int sndfd; TYPE_1__* socktype; int rcvfd; } ;
struct TYPE_6__ {TYPE_2__* vfptr; } ;
struct TYPE_5__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*) ;

int FUNC_12 (struct nn_sock *VAR_4)
{
    int VAR_5;
    int VAR_6;







    for (;;) {
        VAR_5 = FUNC_9 (&VAR_4->termsem);
        if (FUNC_10 (VAR_5 == -VAR_0))
            continue;
        FUNC_0 (VAR_5 == 0, -VAR_5);
        break;
    }


    for (;;) {
        VAR_5 = FUNC_9 (&VAR_4->relesem);
        if (FUNC_10 (VAR_5 == -VAR_0))
            continue;
        FUNC_0 (VAR_5 == 0, -VAR_5);
        break;
    }





    FUNC_1 (&VAR_4->ctx);
    FUNC_2 (&VAR_4->ctx);





    if (!(VAR_4->socktype->flags & VAR_2)) {
        FUNC_4 (&VAR_4->rcvfd);
    }
    if (!(VAR_4->socktype->flags & VAR_3)) {
        FUNC_4 (&VAR_4->sndfd);
    }

    FUNC_5 (&VAR_4->fsm);
    FUNC_6 (&VAR_4->fsm);
    FUNC_8 (&VAR_4->termsem);
    FUNC_8 (&VAR_4->relesem);
    FUNC_7 (&VAR_4->sdeps);
    FUNC_7 (&VAR_4->eps);
    FUNC_3 (&VAR_4->ctx);


    for (VAR_6 = 0; VAR_6 != VAR_1; ++VAR_6)
        if (VAR_4->optsets [VAR_6])
            VAR_4->optsets [VAR_6]->vfptr->destroy (VAR_4->optsets [VAR_6]);

    return 0;
}
