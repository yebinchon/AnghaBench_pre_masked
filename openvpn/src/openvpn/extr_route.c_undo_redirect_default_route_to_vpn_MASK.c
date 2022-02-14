
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tuntap {int dummy; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {int flags; TYPE_2__ gateway; } ;
struct TYPE_6__ {int remote_host; int remote_endpoint; int bypass; } ;
struct route_list {int iflags; int flags; TYPE_3__ rgi; TYPE_1__ spec; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;
 int FUNC_1 (int *,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;
 int FUNC_2 (int,int,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;

__attribute__((used)) static void
FUNC_3(struct route_list *VAR_7,
                                   const struct tuntap *VAR_8, unsigned int VAR_9,
                                   const struct env_set *VAR_10,
                                   openvpn_net_ctx_t *VAR_11)
{
    if (VAR_7 && VAR_7->iflags & VAR_5)
    {

        if (VAR_7->iflags & VAR_4)
        {
            FUNC_2(VAR_7->spec.remote_host,
                       VAR_0,
                       VAR_7->rgi.gateway.addr,
                       VAR_8,
                       VAR_9 | VAR_6,
                       &VAR_7->rgi,
                       VAR_10,
                       VAR_11);
            VAR_7->iflags &= ~VAR_4;
        }


        FUNC_1(&VAR_7->spec.bypass, VAR_7->rgi.gateway.addr, VAR_8, VAR_9,
                          &VAR_7->rgi, VAR_10, VAR_11);

        if (VAR_7->flags & VAR_3)
        {
            if (VAR_7->flags & VAR_2)
            {

                FUNC_2(0x00000000,
                           0x80000000,
                           VAR_7->spec.remote_endpoint,
                           VAR_8,
                           VAR_9,
                           &VAR_7->rgi,
                           VAR_10,
                           VAR_11);


                FUNC_2(0x80000000,
                           0x80000000,
                           VAR_7->spec.remote_endpoint,
                           VAR_8,
                           VAR_9,
                           &VAR_7->rgi,
                           VAR_10,
                           VAR_11);
            }
            else
            {

                FUNC_2(0,
                           0,
                           VAR_7->spec.remote_endpoint,
                           VAR_8,
                           VAR_9,
                           &VAR_7->rgi,
                           VAR_10,
                           VAR_11);

                if (VAR_7->rgi.flags & VAR_1)
                {
                    FUNC_0(0, 0, VAR_7->rgi.gateway.addr, VAR_8,
                               VAR_9 | VAR_6, &VAR_7->rgi, VAR_10, VAR_11);
                }
            }
        }

        VAR_7->iflags &= ~VAR_5;
    }
}
