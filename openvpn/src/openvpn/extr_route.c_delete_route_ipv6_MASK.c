
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ msg_channel; } ;
struct tuntap {char* actual_name; scalar_t__ type; int adapter_index; TYPE_1__ options; } ;
struct route_ipv6 {int flags; char* iface; int metric; int netbits; int gateway; int adapter_index; int network; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
struct argv {int dummy; } ;
typedef int openvpn_net_ctx_t ;
struct TYPE_4__ {char const* metric; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct buffer FUNC_2 (int,struct gc_arena*) ;
 int FUNC_3 (int ,struct argv*) ;
 struct argv FUNC_4 () ;
 int FUNC_5 (struct argv*,char*,int ,char const*,char const*,...) ;
 int FUNC_6 (struct argv*,char*,...) ;
 int FUNC_7 (struct argv*) ;
 char* FUNC_8 (struct buffer*) ;
 int FUNC_9 (struct buffer*,char*,int ) ;
 int FUNC_10 (struct route_ipv6 const*,struct tuntap const*) ;
 int FUNC_11 (struct gc_arena*) ;
 int FUNC_12 (struct gc_arena*) ;
 char* FUNC_13 (int,int,struct gc_arena*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int *,int ,int *,char const*,int ,int) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (struct argv*,struct env_set const*,int ,char*) ;
 char* FUNC_21 (int ,int ,struct gc_arena*) ;
 TYPE_2__* VAR_11 ;
 int FUNC_22 (char*,int,char*,char const*,char const*) ;
 int FUNC_23 (char const*) ;

void
FUNC_24(const struct route_ipv6 *VAR_12, const struct tuntap *VAR_13,
                  unsigned int VAR_14, const struct env_set *VAR_15,
                  openvpn_net_ctx_t *VAR_16)
{
    struct gc_arena VAR_17;
    struct argv VAR_18 = FUNC_4();
    const char *VAR_19;

    const char *VAR_20;



    const char *VAR_21 = VAR_13->actual_name;
    bool VAR_22 = 0;

    if ((VAR_12->flags & (VAR_9|VAR_8)) != (VAR_9|VAR_8))
    {
        return;
    }


    if (VAR_12->iface != ((void*)0))
    {
        VAR_21 = VAR_12->iface;
        VAR_22 = 1;
    }


    FUNC_12(&VAR_17);

    VAR_19 = FUNC_21( VAR_12->network, 0, &VAR_17);

    VAR_20 = FUNC_21( VAR_12->gateway, 0, &VAR_17);
    FUNC_15( VAR_4, "delete_route_ipv6(%s/%d)", VAR_19, VAR_12->netbits );




    if (VAR_13->type == VAR_0
        && !( (VAR_12->flags & VAR_10) && VAR_12->metric == 0 ) )
    {
        VAR_22 = 1;
    }
    FUNC_15(VAR_3, "Sorry, but I don't know how to do 'route ipv6' commands on this operating system.  Try putting your routes in a --route-down script");


    FUNC_7(&VAR_18);
    FUNC_11(&VAR_17);

    FUNC_16(VAR_16);
}
