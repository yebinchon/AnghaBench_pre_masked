
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sit_net {struct net_device* fb_tunnel_dev; } ;
struct net_device {int flags; } ;
struct net {int user_ns; } ;
struct TYPE_5__ {int version; int ihl; int frag_off; int daddr; int ttl; int protocol; } ;
struct ip_tunnel_prl {TYPE_2__ iph; int relay_prefixlen; int prefixlen; int relay_prefix; int prefix; } ;
struct ip_tunnel_parm {TYPE_2__ iph; int relay_prefixlen; int prefixlen; int relay_prefix; int prefix; } ;
struct ip_tunnel_6rd {TYPE_2__ iph; int relay_prefixlen; int prefixlen; int relay_prefix; int prefix; } ;
struct TYPE_4__ {int relay_prefixlen; int prefixlen; int relay_prefix; int prefix; } ;
struct ip_tunnel {int dst_cache; struct net_device* dev; struct ip_tunnel_prl parms; int fwmark; TYPE_1__ ip6rd; struct net* net; } ;
struct TYPE_6__ {int ifru_data; } ;
struct ifreq {TYPE_3__ ifr_ifru; } ;
typedef int prl ;
typedef int p ;
typedef int ip6rd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ip_tunnel_prl*,int ,int) ;
 int FUNC_1 (int ,struct ip_tunnel_prl*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ip_tunnel*,struct ip_tunnel_prl*,int) ;
 int FUNC_5 (struct net_device*,struct sit_net*) ;
 int FUNC_6 (struct ip_tunnel*,struct ip_tunnel_prl*) ;
 int FUNC_7 (struct ip_tunnel*,int ) ;
 struct ip_tunnel* FUNC_8 (struct net*,struct ip_tunnel_prl*,int) ;
 int FUNC_9 (struct ip_tunnel*,struct ip_tunnel_prl*,int ) ;
 int FUNC_10 (struct ip_tunnel*,struct ip_tunnel_prl*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct ip_tunnel_prl*,struct ip_tunnel_prl*,int) ;
 struct sit_net* FUNC_13 (struct net*,int ) ;
 struct ip_tunnel* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int ) ;
 int VAR_9 ;
 int FUNC_17 (struct net_device*) ;

__attribute__((used)) static int
FUNC_18(struct net_device *VAR_10, struct ifreq *VAR_11, int VAR_12)
{
 int VAR_13 = 0;
 struct ip_tunnel_parm VAR_14;
 struct ip_tunnel_prl VAR_15;
 struct ip_tunnel *VAR_16 = FUNC_14(VAR_10);
 struct net *VAR_17 = VAR_16->net;
 struct sit_net *VAR_18 = FUNC_13(VAR_17, VAR_9);




 switch (VAR_12) {
 case 128:



  if (VAR_10 == VAR_18->fb_tunnel_dev) {
   if (FUNC_0(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof(VAR_14))) {
    VAR_13 = -VAR_2;
    break;
   }
   VAR_16 = FUNC_8(VAR_17, &VAR_14, 0);
   if (!VAR_16)
    VAR_16 = FUNC_14(VAR_10);
  }

  VAR_13 = -VAR_2;
  if (VAR_12 == 128) {
   FUNC_12(&VAR_14, &VAR_16->parms, sizeof(VAR_14));
   if (FUNC_1(VAR_11->ifr_ifru.ifru_data, &VAR_14,
      sizeof(VAR_14)))
    goto done;
  }
  VAR_13 = 0;
  break;

 case 137:
 case 134:
  VAR_13 = -VAR_6;
  if (!FUNC_16(VAR_17->user_ns, VAR_0))
   goto done;

  VAR_13 = -VAR_2;
  if (FUNC_0(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof(VAR_14)))
   goto done;

  VAR_13 = -VAR_3;
  if (!FUNC_11(VAR_14.iph.protocol))
   goto done;
  if (VAR_14.iph.version != 4 ||
      VAR_14.iph.ihl != 5 || (VAR_14.iph.frag_off&FUNC_3(~VAR_8)))
   goto done;
  if (VAR_14.iph.ttl)
   VAR_14.iph.frag_off |= FUNC_3(VAR_8);

  VAR_16 = FUNC_8(VAR_17, &VAR_14, VAR_12 == 137);

  if (VAR_10 != VAR_18->fb_tunnel_dev && VAR_12 == 134) {
   if (VAR_16) {
    if (VAR_16->dev != VAR_10) {
     VAR_13 = -VAR_1;
     break;
    }
   } else {
    if (((VAR_10->flags&VAR_7) && !VAR_14.iph.daddr) ||
        (!(VAR_10->flags&VAR_7) && VAR_14.iph.daddr)) {
     VAR_13 = -VAR_3;
     break;
    }
    VAR_16 = FUNC_14(VAR_10);
   }

   FUNC_9(VAR_16, &VAR_14, VAR_16->fwmark);
  }

  if (VAR_16) {
   VAR_13 = 0;
   if (FUNC_1(VAR_11->ifr_ifru.ifru_data, &VAR_16->parms, sizeof(VAR_14)))
    VAR_13 = -VAR_2;
  } else
   VAR_13 = (VAR_12 == 137 ? -VAR_4 : -VAR_5);
  break;

 case 131:
  VAR_13 = -VAR_6;
  if (!FUNC_16(VAR_17->user_ns, VAR_0))
   goto done;

  if (VAR_10 == VAR_18->fb_tunnel_dev) {
   VAR_13 = -VAR_2;
   if (FUNC_0(&VAR_14, VAR_11->ifr_ifru.ifru_data, sizeof(VAR_14)))
    goto done;
   VAR_13 = -VAR_5;
   VAR_16 = FUNC_8(VAR_17, &VAR_14, 0);
   if (!VAR_16)
    goto done;
   VAR_13 = -VAR_6;
   if (VAR_16 == FUNC_14(VAR_18->fb_tunnel_dev))
    goto done;
   VAR_10 = VAR_16->dev;
  }
  FUNC_17(VAR_10);
  VAR_13 = 0;
  break;

 case 129:
  VAR_13 = -VAR_3;
  if (VAR_10 == VAR_18->fb_tunnel_dev)
   goto done;
  VAR_13 = FUNC_7(VAR_16, VAR_11->ifr_ifru.ifru_data);
  break;

 case 138:
 case 132:
 case 135:
  VAR_13 = -VAR_6;
  if (!FUNC_16(VAR_17->user_ns, VAR_0))
   goto done;
  VAR_13 = -VAR_3;
  if (VAR_10 == VAR_18->fb_tunnel_dev)
   goto done;
  VAR_13 = -VAR_2;
  if (FUNC_0(&VAR_15, VAR_11->ifr_ifru.ifru_data, sizeof(VAR_15)))
   goto done;

  switch (VAR_12) {
  case 132:
   VAR_13 = FUNC_6(VAR_16, &VAR_15);
   break;
  case 138:
  case 135:
   VAR_13 = FUNC_4(VAR_16, &VAR_15, VAR_12 == 135);
   break;
  }
  FUNC_2(&VAR_16->dst_cache);
  FUNC_15(VAR_10);
  break;
 default:
  VAR_13 = -VAR_3;
 }

done:
 return VAR_13;
}
