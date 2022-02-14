
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int topology; int server_flags; int ifconfig_ipv6_pool_defined; int ifconfig_ipv6_netbits; int server_netbits_ipv6; int ifconfig_ipv6_pool_netbits; int server_bridge_defined; int server_bridge_proxy_dhcp; int ifconfig_pool_defined; int server_network; int server_netmask; int tls_server; int ifconfig_pool_start; int ifconfig_pool_end; int ifconfig_pool_netmask; int push_ifconfig_constraint_defined; int push_ifconfig_constraint_network; int push_ifconfig_constraint_netmask; int server_bridge_ip; int server_bridge_pool_start; int server_bridge_netmask; int server_bridge_pool_end; int key_method; int pull; int tls_client; scalar_t__ client; int gc; void* mode; scalar_t__ shared_secret_file; void* ifconfig_remote_netmask; void* ifconfig_local; void* route_default_gateway; scalar_t__ enable_c2c; scalar_t__ server_defined; int server_network_ipv6; int ifconfig_ipv6_pool_base; void* ifconfig_ipv6_remote; void* ifconfig_ipv6_local; scalar_t__ server_ipv6_defined; int dev_type; int dev; } ;
struct gc_arena {int dummy; } ;


 int FUNC_0 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gc_arena*) ;
 struct gc_arena FUNC_4 () ;
 int FUNC_5 (int,int,struct options*) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,int,int*) ;
 void* FUNC_9 (int ,int ,int *) ;
 void* FUNC_10 (int,int ,int *) ;
 int FUNC_11 (int,struct gc_arena*) ;
 char* FUNC_12 (int,int,int *) ;
 char* FUNC_13 (int,int *) ;
 char* FUNC_14 (int *) ;
 char* FUNC_15 (int const,int *) ;
 int FUNC_16 (struct options*,char*,int ) ;
 int FUNC_17 (char*,int,int,int) ;

void
FUNC_18(struct options *VAR_10)
{
    struct gc_arena VAR_11 = FUNC_4();
    FUNC_3(&VAR_11);
}
