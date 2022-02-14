
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int flags; int type; } ;
struct net {int user_ns; } ;
struct TYPE_2__ {int daddr; int frag_off; int ttl; } ;
struct ip_tunnel_parm {int i_flags; int o_flags; TYPE_1__ iph; int o_key; int i_key; } ;
struct ip_tunnel_net {struct net_device* fb_tunnel_dev; int type; } ;
struct ip_tunnel {struct net_device* dev; int parms; int ip_tnl_net_id; struct net* net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ip_tunnel*) ;




 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 struct ip_tunnel* FUNC_2 (struct net*,struct ip_tunnel_net*,struct ip_tunnel_parm*) ;
 struct ip_tunnel* FUNC_3 (struct ip_tunnel_net*,struct ip_tunnel_parm*,int ) ;
 int FUNC_4 (struct ip_tunnel_net*,struct ip_tunnel*,struct net_device*,struct ip_tunnel_parm*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ip_tunnel_parm*,int *,int) ;
 struct ip_tunnel_net* FUNC_7 (struct net*,int ) ;
 struct ip_tunnel* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct net_device*) ;

int FUNC_11(struct net_device *VAR_10, struct ip_tunnel_parm *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct ip_tunnel *VAR_14 = FUNC_8(VAR_10);
 struct net *VAR_15 = VAR_14->net;
 struct ip_tunnel_net *VAR_16 = FUNC_7(VAR_15, VAR_14->ip_tnl_net_id);

 switch (VAR_12) {
 case 128:
  if (VAR_10 == VAR_16->fb_tunnel_dev) {
   VAR_14 = FUNC_3(VAR_16, VAR_11, VAR_16->fb_tunnel_dev->type);
   if (!VAR_14)
    VAR_14 = FUNC_8(VAR_10);
  }
  FUNC_6(VAR_11, &VAR_14->parms, sizeof(*VAR_11));
  break;

 case 131:
 case 130:
  VAR_13 = -VAR_4;
  if (!FUNC_9(VAR_15->user_ns, VAR_0))
   goto done;
  if (VAR_11->iph.ttl)
   VAR_11->iph.frag_off |= FUNC_1(VAR_7);
  if (!(VAR_11->i_flags & VAR_9)) {
   if (!(VAR_11->i_flags & VAR_8))
    VAR_11->i_key = 0;
   if (!(VAR_11->o_flags & VAR_8))
    VAR_11->o_key = 0;
  }

  VAR_14 = FUNC_3(VAR_16, VAR_11, VAR_16->type);

  if (VAR_12 == 131) {
   if (!VAR_14) {
    VAR_14 = FUNC_2(VAR_15, VAR_16, VAR_11);
    VAR_13 = FUNC_0(VAR_14);
    break;
   }

   VAR_13 = -VAR_1;
   break;
  }
  if (VAR_10 != VAR_16->fb_tunnel_dev && VAR_12 == 130) {
   if (VAR_14) {
    if (VAR_14->dev != VAR_10) {
     VAR_13 = -VAR_1;
     break;
    }
   } else {
    unsigned int VAR_17 = 0;

    if (FUNC_5(VAR_11->iph.daddr))
     VAR_17 = VAR_5;
    else if (VAR_11->iph.daddr)
     VAR_17 = VAR_6;

    if ((VAR_10->flags^VAR_17)&(VAR_6|VAR_5)) {
     VAR_13 = -VAR_2;
     break;
    }

    VAR_14 = FUNC_8(VAR_10);
   }
  }

  if (VAR_14) {
   VAR_13 = 0;
   FUNC_4(VAR_16, VAR_14, VAR_10, VAR_11, 1, 0);
  } else {
   VAR_13 = -VAR_3;
  }
  break;

 case 129:
  VAR_13 = -VAR_4;
  if (!FUNC_9(VAR_15->user_ns, VAR_0))
   goto done;

  if (VAR_10 == VAR_16->fb_tunnel_dev) {
   VAR_13 = -VAR_3;
   VAR_14 = FUNC_3(VAR_16, VAR_11, VAR_16->fb_tunnel_dev->type);
   if (!VAR_14)
    goto done;
   VAR_13 = -VAR_4;
   if (VAR_14 == FUNC_8(VAR_16->fb_tunnel_dev))
    goto done;
   VAR_10 = VAR_14->dev;
  }
  FUNC_10(VAR_10);
  VAR_13 = 0;
  break;

 default:
  VAR_13 = -VAR_2;
 }

done:
 return VAR_13;
}
