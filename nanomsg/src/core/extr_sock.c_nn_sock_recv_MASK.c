
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct nn_sock {int rcvtimeo; int state; int flags; int rcvfd; int ctx; TYPE_3__* sockbase; TYPE_1__* socktype; } ;
struct nn_msg {int dummy; } ;
struct TYPE_6__ {TYPE_2__* vfptr; } ;
struct TYPE_5__ {int (* recv ) (TYPE_3__*,struct nn_msg*) ;} ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,struct nn_msg*) ;

int FUNC_9 (struct nn_sock *VAR_8, struct nn_msg *VAR_9, int VAR_10)
{
    int VAR_11;
    uint64_t VAR_12;
    uint64_t VAR_13;
    int VAR_14;


    if (FUNC_7 (VAR_8->socktype->flags & VAR_6))
        return -VAR_3;

    FUNC_3 (&VAR_8->ctx);


    if (VAR_8->rcvtimeo < 0) {
        VAR_12 = -1;
        VAR_14 = -1;
    }
    else {
        VAR_12 = FUNC_2() + VAR_8->rcvtimeo;
        VAR_14 = VAR_8->rcvtimeo;
    }

    while (1) {

        switch (VAR_8->state) {
        case 132:
        case 130:
             break;

        case 128:
        case 129:
        case 131:






            FUNC_4 (&VAR_8->ctx);
            return -VAR_1;
        }


        VAR_11 = VAR_8->sockbase->vfptr->recv (VAR_8->sockbase, VAR_9);
        if (FUNC_6 (VAR_11 == 0)) {
            FUNC_4 (&VAR_8->ctx);
            return 0;
        }
        FUNC_1 (VAR_11 < 0);


        if (FUNC_7 (VAR_11 != -VAR_0)) {
            FUNC_4 (&VAR_8->ctx);
            return VAR_11;
        }



        if (FUNC_6 (VAR_10 & VAR_5)) {
            FUNC_4 (&VAR_8->ctx);
            return -VAR_0;
        }



        FUNC_4 (&VAR_8->ctx);
        VAR_11 = FUNC_5 (&VAR_8->rcvfd, VAR_14);
        if (FUNC_7 (VAR_11 == -VAR_4))
            return -VAR_4;
        if (FUNC_7 (VAR_11 == -VAR_2))
            return -VAR_2;
        if (FUNC_7 (VAR_11 == -VAR_1))
            return -VAR_1;
        FUNC_0 (VAR_11 == 0, VAR_11);
        FUNC_3 (&VAR_8->ctx);



        if (!FUNC_5 (&VAR_8->rcvfd, 0)) {
            VAR_8->flags |= VAR_7;
        }



        if (VAR_8->rcvtimeo >= 0) {
            VAR_13 = FUNC_2();
            VAR_14 = (int) (VAR_13 > VAR_12 ? 0 : VAR_12 - VAR_13);
        }
    }
}
