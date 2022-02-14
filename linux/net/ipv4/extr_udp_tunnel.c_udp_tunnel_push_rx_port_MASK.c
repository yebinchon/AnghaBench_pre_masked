
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udp_tunnel_info {unsigned short type; int port; int sa_family; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_family; } ;
struct net_device {int features; TYPE_1__* netdev_ops; } ;
struct TYPE_4__ {int inet_sport; } ;
struct TYPE_3__ {int (* ndo_udp_tunnel_add ) (struct net_device*,struct udp_tunnel_info*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct net_device*,struct udp_tunnel_info*) ;

void FUNC_2(struct net_device *VAR_1, struct socket *VAR_2,
        unsigned short VAR_3)
{
 struct sock *VAR_4 = VAR_2->sk;
 struct udp_tunnel_info VAR_5;

 if (!VAR_1->netdev_ops->ndo_udp_tunnel_add ||
     !(VAR_1->features & VAR_0))
  return;

 VAR_5.type = VAR_3;
 VAR_5.sa_family = VAR_4->sk_family;
 VAR_5.port = FUNC_0(VAR_4)->inet_sport;

 VAR_1->netdev_ops->ndo_udp_tunnel_add(VAR_1, &VAR_5);
}
