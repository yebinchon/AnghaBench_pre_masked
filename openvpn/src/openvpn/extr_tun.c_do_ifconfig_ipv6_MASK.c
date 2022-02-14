
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ip_win32_type; int dns6_len; int dns6; scalar_t__ msg_channel; } ;
struct tuntap {char const* netbits_ipv6; scalar_t__ type; TYPE_1__ options; int adapter_index; int remote_ipv6; int local_ipv6; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int out6 ;
typedef int openvpn_net_ctx_t ;
typedef int iface ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tuntap*,struct env_set const*) ;
 int FUNC_1 (int ,struct argv*) ;
 struct argv FUNC_2 () ;
 int FUNC_3 (struct argv*,char*,int ,char const*,...) ;
 int FUNC_4 (struct argv*) ;
 int FUNC_5 (int,int ,struct tuntap*) ;
 int FUNC_6 (int,struct tuntap*) ;
 int FUNC_7 (struct env_set const*,char*) ;
 struct env_set* FUNC_8 (int *) ;
 int FUNC_9 (struct env_set const*) ;
 int FUNC_10 (struct gc_arena*) ;
 struct gc_arena FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_8 ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (int ,char*,...) ;
 scalar_t__ FUNC_15 (int *,char const*,int *,char const*) ;
 scalar_t__ FUNC_16 (int *,char const*,int) ;
 scalar_t__ FUNC_17 (int *,char const*,int) ;
 int FUNC_18 (struct argv*,int,int ) ;
 int FUNC_19 (int ,int ,char const*) ;
 int FUNC_20 (struct argv*,struct env_set const*,int ,char*) ;
 int FUNC_21 (char*,int,char*,char const*,...) ;
 char* FUNC_22 (int ,int ,struct gc_arena*) ;
 int FUNC_23 (struct tuntap*,struct env_set const*,char const*,int) ;

__attribute__((used)) static void
FUNC_24(struct tuntap *VAR_9, const char *VAR_10, int VAR_11,
                 const struct env_set *VAR_12, openvpn_net_ctx_t *VAR_13)
{

    struct argv VAR_14 = FUNC_2();
    struct gc_arena VAR_15 = FUNC_11();
    const char *VAR_16 = FUNC_22(VAR_9->local_ipv6, 0, &VAR_15);
    FUNC_14(VAR_4, "Sorry, but I don't know how to do IPv6 'ifconfig' commands on this operating system.  You should ifconfig your TUN/TAP device manually or use an --up script.");



    FUNC_10(&VAR_15);
    FUNC_4(&VAR_14);

}
