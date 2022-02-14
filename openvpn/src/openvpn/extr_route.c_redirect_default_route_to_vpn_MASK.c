
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tuntap {int dummy; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_8__ {int flags; TYPE_1__ gateway; } ;
struct TYPE_7__ {int flags; scalar_t__ remote_host; int remote_host_local; int remote_endpoint; int bypass; } ;
struct route_list {int flags; int iflags; TYPE_3__ rgi; TYPE_2__ spec; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int FUNC_0 (int *,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;
 int FUNC_1 (int,int,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;
 int FUNC_2 (int ,int ,int ,struct tuntap const*,unsigned int,TYPE_3__*,struct env_set const*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_5(struct route_list *VAR_17, const struct tuntap *VAR_18,
                              unsigned int VAR_19, const struct env_set *VAR_20,
                              openvpn_net_ctx_t *VAR_21)
{
    const char VAR_22[] = "NOTE: unable to redirect default gateway --";

    if (VAR_17 && VAR_17->flags & VAR_7)
    {
        bool VAR_23 = VAR_17->flags & VAR_8;

        if (!(VAR_17->spec.flags & VAR_13) && (VAR_17->flags & VAR_9))
        {
            FUNC_4(VAR_3, "%s VPN gateway parameter (--route-gateway or --ifconfig) is missing", VAR_22);
        }





        else if (!(VAR_17->rgi.flags & VAR_4) && !VAR_23
                 && (VAR_17->spec.remote_host != VAR_1))
        {
            FUNC_4(VAR_3, "%s Cannot read current default gateway from system", VAR_22);
        }
        else if (!(VAR_17->spec.flags & VAR_14))
        {
            FUNC_4(VAR_3, "%s Cannot obtain current remote host address", VAR_22);
        }
        else
        {

            if (VAR_17->flags & VAR_5)
            {
                const int VAR_24 = VAR_17->spec.remote_host_local;
                if (VAR_24 == VAR_16)
                {
                    FUNC_3(VAR_0, "ROUTE remote_host is NOT LOCAL");
                    VAR_23 = 0;
                }
                else if (VAR_24 == VAR_15)
                {
                    FUNC_3(VAR_0, "ROUTE remote_host is LOCAL");
                    VAR_23 = 1;
                }
            }
            if (!VAR_23)
            {



                if (VAR_17->spec.remote_host != VAR_1)
                {
                    FUNC_1(VAR_17->spec.remote_host,
                               VAR_2,
                               VAR_17->rgi.gateway.addr,
                               VAR_18,
                               VAR_19 | VAR_12,
                               &VAR_17->rgi,
                               VAR_20,
                               VAR_21);
                    VAR_17->iflags |= VAR_10;
                }
                else
                {
                    FUNC_3(VAR_0, "ROUTE remote_host protocol differs from tunneled");
                }
            }



            FUNC_0(&VAR_17->spec.bypass, VAR_17->rgi.gateway.addr, VAR_18, VAR_19,
                              &VAR_17->rgi, VAR_20, VAR_21);

            if (VAR_17->flags & VAR_9)
            {
                if (VAR_17->flags & VAR_6)
                {

                    FUNC_1(0x00000000,
                               0x80000000,
                               VAR_17->spec.remote_endpoint,
                               VAR_18,
                               VAR_19,
                               &VAR_17->rgi,
                               VAR_20,
                               VAR_21);


                    FUNC_1(0x80000000,
                               0x80000000,
                               VAR_17->spec.remote_endpoint,
                               VAR_18,
                               VAR_19,
                               &VAR_17->rgi,
                               VAR_20,
                               VAR_21);
                }
                else
                {

                    if (VAR_17->rgi.flags & VAR_4)
                    {

                        FUNC_2(0, 0, VAR_17->rgi.gateway.addr, VAR_18,
                                   VAR_19 | VAR_12, &VAR_17->rgi, VAR_20, VAR_21);
                    }


                    FUNC_1(0,
                               0,
                               VAR_17->spec.remote_endpoint,
                               VAR_18,
                               VAR_19,
                               &VAR_17->rgi,
                               VAR_20,
                               VAR_21);
                }
            }


            VAR_17->iflags |= VAR_11;
        }
    }
}
