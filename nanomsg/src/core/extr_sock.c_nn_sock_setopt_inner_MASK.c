
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sndprio; int rcvprio; int ipv4only; } ;
struct nn_sock {int sndbuf; int rcvbuf; int rcvmaxsize; int sndtimeo; int rcvtimeo; int reconnect_ivl; int reconnect_ivl_max; int maxttl; TYPE_3__ ep_template; scalar_t__* socket_name; TYPE_4__* sockbase; } ;
struct nn_optset {TYPE_2__* vfptr; } ;
struct TYPE_8__ {TYPE_1__* vfptr; } ;
struct TYPE_6__ {int (* setopt ) (struct nn_optset*,int,void const*,size_t) ;} ;
struct TYPE_5__ {int (* setopt ) (TYPE_4__*,int,int,void const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,void const*,size_t) ;
 int FUNC_1 (int) ;
 struct nn_optset* FUNC_2 (struct nn_sock*,int) ;
 int FUNC_3 (TYPE_4__*,int,int,void const*,size_t) ;
 int FUNC_4 (struct nn_optset*,int,void const*,size_t) ;

__attribute__((used)) static int FUNC_5 (struct nn_sock *VAR_4, int VAR_5,
    int VAR_6, const void *VAR_7, size_t VAR_8)
{
    struct nn_optset *VAR_9;
    int VAR_10;


    if (VAR_5 > VAR_3) {
        if (VAR_4->sockbase->vfptr->setopt == ((void*)0)) {
            return -VAR_1;
        }
        return VAR_4->sockbase->vfptr->setopt (VAR_4->sockbase, VAR_5, VAR_6,
            VAR_7, VAR_8);
    }


    if (VAR_5 < VAR_3) {
        VAR_9 = FUNC_2 (VAR_4, VAR_5);
        if (!VAR_9)
            return -VAR_1;
        return VAR_9->vfptr->setopt (VAR_9, VAR_6, VAR_7, VAR_8);
    }

    FUNC_1 (VAR_5 == VAR_3);


    if (VAR_6 == VAR_2) {
        if (VAR_8 > 63)
            return -VAR_0;
        FUNC_0 (VAR_4->socket_name, VAR_7, VAR_8);
        VAR_4->socket_name [VAR_8] = 0;
        return 0;
    }


    if (VAR_8 != sizeof (int))
        return -VAR_0;
    VAR_10 = *(int*) VAR_7;


    switch (VAR_6) {
    case 130:
        if (VAR_10 <= 0)
            return -VAR_0;
        VAR_4->sndbuf = VAR_10;
        return 0;
    case 136:
        if (VAR_10 <= 0)
            return -VAR_0;
        VAR_4->rcvbuf = VAR_10;
        return 0;
    case 135:
        if (VAR_10 < -1)
            return -VAR_0;
        VAR_4->rcvmaxsize = VAR_10;
        return 0;
    case 128:
        VAR_4->sndtimeo = VAR_10;
        return 0;
    case 133:
        VAR_4->rcvtimeo = VAR_10;
        return 0;
    case 132:
        if (VAR_10 < 0)
            return -VAR_0;
        VAR_4->reconnect_ivl = VAR_10;
        return 0;
    case 131:
        if (VAR_10 < 0)
            return -VAR_0;
        VAR_4->reconnect_ivl_max = VAR_10;
        return 0;
    case 129:
        if (VAR_10 < 1 || VAR_10 > 16)
            return -VAR_0;
        VAR_4->ep_template.sndprio = VAR_10;
        return 0;
    case 134:
        if (VAR_10 < 1 || VAR_10 > 16)
            return -VAR_0;
        VAR_4->ep_template.rcvprio = VAR_10;
        return 0;
    case 139:
        if (VAR_10 != 0 && VAR_10 != 1)
            return -VAR_0;
        VAR_4->ep_template.ipv4only = VAR_10;
        return 0;
    case 137:
        if (VAR_10 < 1 || VAR_10 > 255)
            return -VAR_0;
        VAR_4->maxttl = VAR_10;
        return 0;
    case 138:

        return 0;
    }

    return -VAR_1;
}
