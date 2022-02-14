
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip_win32_type; } ;
struct tuntap {void* local; void* remote_netmask; int topology; void* adapter_netmask; TYPE_1__ options; } ;
struct route_ipv4 {int network; int netmask; int gateway; void* flags; scalar_t__ metric; } ;
struct gc_arena {int dummy; } ;
typedef struct env_set const env_set ;
struct argv {int dummy; } ;
typedef int out ;
typedef int openvpn_net_ctx_t ;
typedef void* in_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct route_ipv4) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;



 int FUNC_2 (struct route_ipv4*,struct tuntap*,int ,int *,struct env_set const*,int *) ;
 int FUNC_3 (int ,struct argv*) ;
 struct argv FUNC_4 () ;
 int FUNC_5 (struct argv*,char*,int ,char const*,...) ;
 int FUNC_6 (struct argv*) ;
 void* FUNC_7 (struct tuntap*) ;
 int FUNC_8 (struct env_set const*,char*) ;
 struct env_set const* FUNC_9 (int *) ;
 int FUNC_10 (struct env_set const*) ;
 int FUNC_11 (struct gc_arena*) ;
 struct gc_arena FUNC_12 () ;
 int FUNC_13 (struct tuntap*) ;
 int VAR_8 ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (int ,char*,...) ;
 scalar_t__ FUNC_16 (int *,char const*,void**,void**) ;
 scalar_t__ FUNC_17 (int *,char const*,void**,int ) ;
 scalar_t__ FUNC_18 (int *,char const*,int) ;
 scalar_t__ FUNC_19 (int *,char const*,int) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (TYPE_1__*,char const*,int,void*,int) ;
 int FUNC_22 (struct argv*,struct env_set const*,int ,char*) ;
 int FUNC_23 (char*,int,char*,char const*,char const*,int,char*) ;
 char* FUNC_24 (void*,int ,struct gc_arena*) ;
 int FUNC_25 (struct tuntap*,struct env_set const*,char const*,int) ;

__attribute__((used)) static void
FUNC_26(struct tuntap *VAR_9, const char *VAR_10, int VAR_11,
                 const struct env_set *VAR_12, openvpn_net_ctx_t *VAR_13)
{



    bool VAR_14 = FUNC_13(VAR_9);


    const char *VAR_15 = ((void*)0);
    const char *VAR_16 = ((void*)0);
    struct argv VAR_17 = FUNC_4();
    struct gc_arena VAR_18 = FUNC_12();




    VAR_15 = FUNC_24(VAR_9->local, 0, &VAR_18);
    VAR_16 = FUNC_24(VAR_9->remote_netmask, 0, &VAR_18);
    FUNC_15(VAR_1, "Sorry, but I don't know how to do 'ifconfig' commands on this operating system.  You should ifconfig your TUN/TAP device manually or use an --up script.");



    FUNC_11(&VAR_18);
    FUNC_6(&VAR_17);

}
