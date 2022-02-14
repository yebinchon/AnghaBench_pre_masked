
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_ipv4 {int flags; int metric; int netmask; int gateway; int network; } ;
struct route_gateway_info {int iface; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,struct argv*) ;
 struct argv FUNC_2 () ;
 int FUNC_3 (struct argv*,char*,int ,char const*,...) ;
 int FUNC_4 (struct argv*) ;
 int FUNC_5 (struct route_ipv4*,struct tuntap const*) ;
 int FUNC_6 (struct route_ipv4*,struct tuntap const*) ;
 int FUNC_7 (struct gc_arena*) ;
 int FUNC_8 (struct gc_arena*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int,unsigned int,struct route_gateway_info const*) ;
 int FUNC_11 (int ,int ,int ,struct route_gateway_info const*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int,int *,int *,int ,int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct argv*,struct env_set const*,int ,char*) ;
 char* FUNC_19 (int ,int ,struct gc_arena*) ;

__attribute__((used)) static void
FUNC_20(struct route_ipv4 *VAR_15,
             const struct tuntap *VAR_16,
             unsigned int VAR_17,
             const struct route_gateway_info *VAR_18,
             const struct env_set *VAR_19,
             openvpn_net_ctx_t *VAR_20)
{
    struct gc_arena VAR_21;
    struct argv VAR_22 = FUNC_2();

    const char *VAR_23;

    const char *VAR_24;


    const char *VAR_25;




    int VAR_26;

    if ((VAR_15->flags & (VAR_12|VAR_11)) != (VAR_12|VAR_11))
    {
        return;
    }

    FUNC_8(&VAR_21);


    VAR_23 = FUNC_19(VAR_15->network, 0, &VAR_21);

    VAR_24 = FUNC_19(VAR_15->netmask, 0, &VAR_21);


    VAR_25 = FUNC_19(VAR_15->gateway, 0, &VAR_21);



    VAR_26 = FUNC_11(VAR_15->network, VAR_15->netmask, VAR_15->gateway, VAR_18);
    if (VAR_26 == VAR_1)
    {
        goto done;
    }
    FUNC_12(VAR_2, "Sorry, but I don't know how to do 'route' commands on this operating system.  Try putting your routes in a --route-up script");


done:
    VAR_15->flags &= ~VAR_11;
    FUNC_4(&VAR_22);
    FUNC_7(&VAR_21);

    FUNC_13(VAR_20);
}
