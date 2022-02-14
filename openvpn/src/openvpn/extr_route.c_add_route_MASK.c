
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_ipv4 {int flags; int metric; int netmask; int gateway; int network; } ;
struct route_gateway_info {char* iface; int adapter_index; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int out ;
typedef int openvpn_net_ctx_t ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct route_ipv4*,struct tuntap const*,int ) ;
 int FUNC_2 (struct route_ipv4*,struct tuntap const*) ;
 int FUNC_3 (int ,struct argv*) ;
 struct argv FUNC_4 () ;
 int FUNC_5 (struct argv*,char*,int ,...) ;
 int FUNC_6 (struct argv*,char*,...) ;
 int FUNC_7 (struct argv*) ;
 int FUNC_8 (struct gc_arena*) ;
 int FUNC_9 (struct gc_arena*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int,unsigned int,struct route_gateway_info const*) ;
 int FUNC_12 (int ,int ,int ,struct route_gateway_info const*) ;
 int VAR_15 ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int *,int,int *,char const*,int ,int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct argv*,struct env_set const*,int ,char*) ;
 int FUNC_21 (char*,int,char*,char const*,char const*,char const*,...) ;
 char* FUNC_22 (int ,int ,struct gc_arena*) ;

void
FUNC_23(struct route_ipv4 *VAR_16,
          const struct tuntap *VAR_17,
          unsigned int VAR_18,
          const struct route_gateway_info *VAR_19,
          const struct env_set *VAR_20,
          openvpn_net_ctx_t *VAR_21)
{
    struct gc_arena VAR_22;
    struct argv VAR_23 = FUNC_4();

    const char *VAR_24;

    const char *VAR_25;

    const char *VAR_26;

    bool VAR_27 = 0;
    int VAR_28;

    if (!(VAR_16->flags & VAR_11))
    {
        return;
    }

    FUNC_9(&VAR_22);


    VAR_24 = FUNC_22(VAR_16->network, 0, &VAR_22);

    VAR_25 = FUNC_22(VAR_16->netmask, 0, &VAR_22);

    VAR_26 = FUNC_22(VAR_16->gateway, 0, &VAR_22);


    VAR_28 = FUNC_12(VAR_16->network, VAR_16->netmask, VAR_16->gateway, VAR_19);
    if (VAR_28 == VAR_1)
    {
        goto done;
    }
    FUNC_14(VAR_2, "Sorry, but I don't know how to do 'route' commands on this operating system.  Try putting your routes in a --route-up script");


done:
    if (VAR_27)
    {
        VAR_16->flags |= VAR_10;
    }
    else
    {
        VAR_16->flags &= ~VAR_10;
    }
    FUNC_7(&VAR_23);
    FUNC_8(&VAR_22);

    FUNC_15(VAR_21);
}
