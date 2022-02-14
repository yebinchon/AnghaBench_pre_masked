
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sndprio; int rcvprio; int ipv4only; } ;
struct nn_sock {int sndbuf; int rcvbuf; int rcvmaxsize; int sndtimeo; int rcvtimeo; int reconnect_ivl; int reconnect_ivl_max; int maxttl; int socket_name; int rcvfd; TYPE_4__* socktype; int sndfd; TYPE_3__ ep_template; TYPE_5__* sockbase; } ;
struct nn_optset {TYPE_2__* vfptr; } ;
typedef int nn_fd ;
struct TYPE_10__ {TYPE_1__* vfptr; } ;
struct TYPE_9__ {int domain; int protocol; int flags; } ;
struct TYPE_7__ {int (* getopt ) (struct nn_optset*,int,void*,size_t*) ;} ;
struct TYPE_6__ {int (* getopt ) (TYPE_5__*,int,int,void*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int*,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct nn_optset* FUNC_3 (struct nn_sock*,int) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,size_t) ;
 int FUNC_6 (TYPE_5__*,int,int,void*,size_t*) ;
 int FUNC_7 (struct nn_optset*,int,void*,size_t*) ;

int FUNC_8 (struct nn_sock *VAR_4, int VAR_5,
    int VAR_6, void *VAR_7, size_t *VAR_8)
{
    struct nn_optset *VAR_9;
    int VAR_10;
    nn_fd VAR_11;


    if (VAR_5 > VAR_3) {
        if (VAR_4->sockbase->vfptr->getopt == ((void*)0)) {
            return -VAR_0;
        }
        return VAR_4->sockbase->vfptr->getopt (VAR_4->sockbase,
            VAR_5, VAR_6, VAR_7, VAR_8);
    }


    if (VAR_5 < VAR_3) {
        VAR_9 = FUNC_3 (VAR_4, VAR_5);
        if (!VAR_9)
            return -VAR_0;
        return VAR_9->vfptr->getopt (VAR_9, VAR_6, VAR_7, VAR_8);
    }

    FUNC_1 (VAR_5 == VAR_3);


    switch (VAR_6) {
    case 144:
        VAR_10 = VAR_4->socktype->domain;
        break;
    case 140:
        VAR_10 = VAR_4->socktype->protocol;
        break;
    case 142:
        VAR_10 = 0;
        break;
    case 132:
        VAR_10 = VAR_4->sndbuf;
        break;
    case 139:
        VAR_10 = VAR_4->rcvbuf;
        break;
    case 137:
        VAR_10 = VAR_4->rcvmaxsize;
        break;
    case 129:
        VAR_10 = VAR_4->sndtimeo;
        break;
    case 135:
        VAR_10 = VAR_4->rcvtimeo;
        break;
    case 134:
        VAR_10 = VAR_4->reconnect_ivl;
        break;
    case 133:
        VAR_10 = VAR_4->reconnect_ivl_max;
        break;
    case 130:
        VAR_10 = VAR_4->ep_template.sndprio;
        break;
    case 136:
        VAR_10 = VAR_4->ep_template.rcvprio;
        break;
    case 143:
        VAR_10 = VAR_4->ep_template.ipv4only;
        break;
    case 141:
        VAR_10 = VAR_4->maxttl;
        break;
    case 131:
        if (VAR_4->socktype->flags & VAR_2)
            return -VAR_0;
        VAR_11 = FUNC_2 (&VAR_4->sndfd);
        FUNC_0 (VAR_7, &VAR_11,
            *VAR_8 < sizeof (nn_fd) ? *VAR_8 : sizeof (nn_fd));
        *VAR_8 = sizeof (nn_fd);
        return 0;
    case 138:
        if (VAR_4->socktype->flags & VAR_1)
            return -VAR_0;
        VAR_11 = FUNC_2 (&VAR_4->rcvfd);
        FUNC_0 (VAR_7, &VAR_11,
            *VAR_8 < sizeof (nn_fd) ? *VAR_8 : sizeof (nn_fd));
        *VAR_8 = sizeof (nn_fd);
        return 0;
    case 128:
        FUNC_5 (VAR_7, VAR_4->socket_name, *VAR_8);
        *VAR_8 = FUNC_4(VAR_4->socket_name);
        return 0;
    default:
        return -VAR_0;
    }

    FUNC_0 (VAR_7, &VAR_10,
        *VAR_8 < sizeof (int) ? *VAR_8 : sizeof (int));
    *VAR_8 = sizeof (int);

    return 0;
}
