
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int addr_len; int hw_features; int features; int flags; scalar_t__ max_mtu; int min_mtu; scalar_t__ mtu; scalar_t__ hard_header_len; int type; int priv_destructor; int * netdev_ops; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel {int hlen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ip_tunnel* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_10)
{
 struct ip_tunnel *VAR_11 = FUNC_0(VAR_10);
 int VAR_12 = VAR_11->hlen + sizeof(struct iphdr);

 VAR_10->netdev_ops = &VAR_9;
 VAR_10->needs_free_netdev = 1;
 VAR_10->priv_destructor = VAR_8;

 VAR_10->type = VAR_0;
 VAR_10->hard_header_len = VAR_5 + VAR_12;
 VAR_10->mtu = VAR_1 - VAR_12;
 VAR_10->min_mtu = VAR_4;
 VAR_10->max_mtu = VAR_3 - VAR_12;
 VAR_10->flags = VAR_2;
 FUNC_1(VAR_10);
 VAR_10->addr_len = 4;
 VAR_10->features |= VAR_6;
 VAR_10->features |= VAR_7;
 VAR_10->hw_features |= VAR_7;
}
