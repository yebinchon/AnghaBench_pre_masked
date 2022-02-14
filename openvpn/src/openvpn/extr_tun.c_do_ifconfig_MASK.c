
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {scalar_t__ did_ifconfig_ipv6_setup; scalar_t__ did_ifconfig_setup; int local_ipv6; int local; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tuntap*,char const*,int,struct env_set const*,int *) ;
 int FUNC_1 (struct tuntap*,char const*,int,struct env_set const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct tuntap *VAR_3, const char *VAR_4, int VAR_5,
            const struct env_set *VAR_6, openvpn_net_ctx_t *VAR_7)
{
    FUNC_3(VAR_0, "do_ifconfig, ipv4=%d, ipv6=%d", VAR_3->did_ifconfig_setup,
        VAR_3->did_ifconfig_ipv6_setup);
    if (VAR_3->did_ifconfig_setup)
    {
        FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }

    if (VAR_3->did_ifconfig_ipv6_setup)
    {
        FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    }


    FUNC_4(VAR_7);
}
