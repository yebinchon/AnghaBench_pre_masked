
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {scalar_t__ type; unsigned int hard_header_len; int mtu; } ;
struct net {int dummy; } ;
struct iphdr {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;
struct ip_tunnel_net {int collect_md_tun; } ;
struct ip_tunnel {unsigned int hlen; int fwmark; struct ip_tunnel_parm parms; struct net* net; scalar_t__ collect_md; int ip_tnl_net_id; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ip_tunnel_net*,struct ip_tunnel*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct ip_tunnel_net*,struct ip_tunnel_parm*,scalar_t__) ;
 struct ip_tunnel_net* FUNC_7 (struct net*,int ) ;
 struct ip_tunnel* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct net_device*) ;

int FUNC_12(struct net_device *VAR_6, struct nlattr *VAR_7[],
        struct ip_tunnel_parm *VAR_8, __u32 VAR_9)
{
 struct ip_tunnel *VAR_10;
 struct net *VAR_11 = FUNC_1(VAR_6);
 struct ip_tunnel_net *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_8(VAR_6);
 VAR_12 = FUNC_7(VAR_11, VAR_10->ip_tnl_net_id);

 if (VAR_10->collect_md) {
  if (FUNC_10(VAR_12->collect_md_tun))
   return -VAR_1;
 } else {
  if (FUNC_6(VAR_12, VAR_8, VAR_6->type))
   return -VAR_1;
 }

 VAR_10->net = VAR_11;
 VAR_10->parms = *VAR_8;
 VAR_10->fwmark = VAR_9;
 VAR_14 = FUNC_9(VAR_6);
 if (VAR_14)
  goto err_register_netdevice;

 if (VAR_6->type == VAR_0 && !VAR_7[VAR_3])
  FUNC_3(VAR_6);

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_7[VAR_4]) {
  unsigned int VAR_15 = VAR_5 - VAR_6->hard_header_len - VAR_10->hlen;

  VAR_13 = FUNC_0(VAR_6->mtu, (unsigned int)VAR_2,
       (unsigned int)(VAR_15 - sizeof(struct iphdr)));
 }

 VAR_14 = FUNC_2(VAR_6, VAR_13);
 if (VAR_14)
  goto err_dev_set_mtu;

 FUNC_4(VAR_12, VAR_10);
 return 0;

err_dev_set_mtu:
 FUNC_11(VAR_6);
err_register_netdevice:
 return VAR_14;
}
