
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int netbits_ipv6; int remote_ipv6; int local_ipv6; scalar_t__ did_ifconfig_ipv6_setup; scalar_t__ did_ifconfig_setup; int remote_netmask; int local; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (struct tuntap const*) ;
 char* FUNC_3 (int ,int ,struct gc_arena*) ;
 char* FUNC_4 (int ,int ,struct gc_arena*) ;
 int FUNC_5 (struct env_set*,char*,int ) ;
 int FUNC_6 (struct env_set*,char*,char const*) ;

void
FUNC_7(const struct tuntap *VAR_0, struct env_set *VAR_1)
{
    struct gc_arena VAR_2 = FUNC_1();
    const char *VAR_3 = FUNC_4(VAR_0->local, 0, &VAR_2);
    const char *VAR_4 = FUNC_4(VAR_0->remote_netmask, 0, &VAR_2);




    if (VAR_0->did_ifconfig_setup)
    {
        bool VAR_5 = FUNC_2(VAR_0);

        FUNC_6(VAR_1, "ifconfig_local", VAR_3);
        if (VAR_5)
        {
            FUNC_6(VAR_1, "ifconfig_remote", VAR_4);
        }
        else
        {
            FUNC_6(VAR_1, "ifconfig_netmask", VAR_4);
        }
    }

    if (VAR_0->did_ifconfig_ipv6_setup)
    {
        const char *VAR_6 = FUNC_3(VAR_0->local_ipv6, 0, &VAR_2);
        const char *VAR_7 = FUNC_3(VAR_0->remote_ipv6, 0, &VAR_2);

        FUNC_6(VAR_1, "ifconfig_ipv6_local", VAR_6);
        FUNC_5(VAR_1, "ifconfig_ipv6_netbits", VAR_0->netbits_ipv6);
        FUNC_6(VAR_1, "ifconfig_ipv6_remote", VAR_7);
    }

    FUNC_0(&VAR_2);
}
