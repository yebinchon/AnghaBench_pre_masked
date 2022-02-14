
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_list {int dummy; } ;
struct route_ipv6_list {int dummy; } ;
struct plugin_list {int dummy; } ;
struct options {scalar_t__ show_net_up; scalar_t__ route_script; int route_noexec; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct options const*) ;
 int FUNC_1 (struct route_list*,struct route_ipv6_list*,struct tuntap const*,int ,struct env_set*,int *) ;
 struct argv FUNC_2 () ;
 int FUNC_3 (struct argv*,scalar_t__) ;
 int FUNC_4 (struct argv*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (scalar_t__,char*,struct env_set*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct argv*,struct env_set*,int ,char*) ;
 scalar_t__ FUNC_9 (struct plugin_list const*,int ,int *,int *,struct env_set*) ;
 scalar_t__ FUNC_10 (struct plugin_list const*,int ) ;
 int FUNC_11 (struct route_list*) ;
 int FUNC_12 (struct env_set*,char*,int ) ;
 int FUNC_13 (struct env_set*,char*,char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;

void
FUNC_16(const struct options *VAR_7,
         struct route_list *VAR_8,
         struct route_ipv6_list *VAR_9,
         const struct tuntap *VAR_10,
         const struct plugin_list *VAR_11,
         struct env_set *VAR_12,
         openvpn_net_ctx_t *VAR_13)
{
    if (!VAR_7->route_noexec && ( VAR_8 || VAR_9 ) )
    {
        FUNC_1(VAR_8, VAR_9, VAR_10, FUNC_0(VAR_7),
                   VAR_12, VAR_13);
        FUNC_12(VAR_12, "redirect_gateway", FUNC_11(VAR_8));
    }







    if (FUNC_10(VAR_11, VAR_5))
    {
        if (FUNC_9(VAR_11, VAR_5, ((void*)0), ((void*)0), VAR_12) != VAR_4)
        {
            FUNC_7(VAR_3, "WARNING: route-up plugin call failed");
        }
    }

    if (VAR_7->route_script)
    {
        struct argv VAR_14 = FUNC_2();
        FUNC_13(VAR_12, "script_type", "route-up");
        FUNC_3(&VAR_14, VAR_7->route_script);
        FUNC_8(&VAR_14, VAR_12, 0, "--route-up");
        FUNC_4(&VAR_14);
    }
}
