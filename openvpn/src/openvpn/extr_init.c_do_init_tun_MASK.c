
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int remote_list; int bind_local; } ;
struct TYPE_10__ {int tuntap_owned; TYPE_5__* tuntap; TYPE_1__ link_socket_addr; } ;
struct TYPE_9__ {int tuntap_options; int wintun; int ifconfig_nowarn; int ifconfig_ipv6_remote; int ifconfig_ipv6_netbits; int ifconfig_ipv6_local; int ifconfig_remote_netmask; int ifconfig_local; int topology; int dev_type; int dev; } ;
struct TYPE_8__ {int frame; int es; } ;
struct context {TYPE_4__ c1; TYPE_3__ options; TYPE_2__ c2; int net_ctx; } ;
struct TYPE_11__ {int wintun; } ;


 TYPE_5__* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int *) ;
 int FUNC_1 (TYPE_5__*,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct context *VAR_0)
{
    VAR_0->c1.tuntap = FUNC_0(VAR_0->options.dev,
                            VAR_0->options.dev_type,
                            VAR_0->options.topology,
                            VAR_0->options.ifconfig_local,
                            VAR_0->options.ifconfig_remote_netmask,
                            VAR_0->options.ifconfig_ipv6_local,
                            VAR_0->options.ifconfig_ipv6_netbits,
                            VAR_0->options.ifconfig_ipv6_remote,
                            VAR_0->c1.link_socket_addr.bind_local,
                            VAR_0->c1.link_socket_addr.remote_list,
                            !VAR_0->options.ifconfig_nowarn,
                            VAR_0->c2.es,
                            &VAR_0->net_ctx);





    FUNC_1(VAR_0->c1.tuntap,
                  &VAR_0->c2.frame,
                  &VAR_0->options.tuntap_options);

    VAR_0->c1.tuntap_owned = 1;
}
