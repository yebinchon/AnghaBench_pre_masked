
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int user_ns; } ;
struct ip6_tnl_parm {int proto; } ;
struct ip6_tnl_net {struct net_device* fb_tnl_dev; } ;
struct ip6_tnl {struct net_device* dev; int parms; struct net* net; } ;
struct TYPE_2__ {int ifru_data; } ;
struct ifreq {TYPE_1__ ifr_ifru; } ;
struct __ip6_tnl_parm {int proto; } ;
typedef int p1 ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ip6_tnl*) ;
 int FUNC_1 (struct ip6_tnl*) ;




 int FUNC_2 (struct ip6_tnl_parm*,int ,int) ;
 int FUNC_3 (int ,struct ip6_tnl_parm*,int) ;
 int FUNC_4 (struct ip6_tnl*,struct ip6_tnl_parm*) ;
 struct ip6_tnl* FUNC_5 (struct net*,struct ip6_tnl_parm*,int) ;
 int VAR_8 ;
 int FUNC_6 (struct ip6_tnl_parm*,struct ip6_tnl_parm*) ;
 int FUNC_7 (struct ip6_tnl_parm*,int *) ;
 int FUNC_8 (struct ip6_tnl*,struct ip6_tnl_parm*) ;
 int FUNC_9 (struct ip6_tnl_parm*,int ,int) ;
 struct ip6_tnl_net* FUNC_10 (struct net*,int ) ;
 struct ip6_tnl* FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int
FUNC_14(struct net_device *VAR_9, struct ifreq *VAR_10, int VAR_11)
{
 int VAR_12 = 0;
 struct ip6_tnl_parm VAR_13;
 struct __ip6_tnl_parm VAR_14;
 struct ip6_tnl *VAR_15 = FUNC_11(VAR_9);
 struct net *VAR_16 = VAR_15->net;
 struct ip6_tnl_net *VAR_17 = FUNC_10(VAR_16, VAR_8);

 FUNC_9(&VAR_14, 0, sizeof(VAR_14));

 switch (VAR_11) {
 case 128:
  if (VAR_9 == VAR_17->fb_tnl_dev) {
   if (FUNC_2(&VAR_13, VAR_10->ifr_ifru.ifru_data, sizeof(VAR_13))) {
    VAR_12 = -VAR_2;
    break;
   }
   FUNC_6(&VAR_14, &VAR_13);
   VAR_15 = FUNC_5(VAR_16, &VAR_14, 0);
   if (FUNC_0(VAR_15))
    VAR_15 = FUNC_11(VAR_9);
  } else {
   FUNC_9(&VAR_13, 0, sizeof(VAR_13));
  }
  FUNC_7(&VAR_13, &VAR_15->parms);
  if (FUNC_3(VAR_10->ifr_ifru.ifru_data, &VAR_13, sizeof(VAR_13))) {
   VAR_12 = -VAR_2;
  }
  break;
 case 131:
 case 130:
  VAR_12 = -VAR_5;
  if (!FUNC_12(VAR_16->user_ns, VAR_0))
   break;
  VAR_12 = -VAR_2;
  if (FUNC_2(&VAR_13, VAR_10->ifr_ifru.ifru_data, sizeof(VAR_13)))
   break;
  VAR_12 = -VAR_3;
  if (VAR_13.proto != VAR_7 && VAR_13.proto != VAR_6 &&
      VAR_13.proto != 0)
   break;
  FUNC_6(&VAR_14, &VAR_13);
  VAR_15 = FUNC_5(VAR_16, &VAR_14, VAR_11 == 131);
  if (VAR_11 == 130) {
   if (!FUNC_0(VAR_15)) {
    if (VAR_15->dev != VAR_9) {
     VAR_12 = -VAR_1;
     break;
    }
   } else
    VAR_15 = FUNC_11(VAR_9);
   if (VAR_9 == VAR_17->fb_tnl_dev)
    VAR_12 = FUNC_4(VAR_15, &VAR_14);
   else
    VAR_12 = FUNC_8(VAR_15, &VAR_14);
  }
  if (!FUNC_0(VAR_15)) {
   VAR_12 = 0;
   FUNC_7(&VAR_13, &VAR_15->parms);
   if (FUNC_3(VAR_10->ifr_ifru.ifru_data, &VAR_13, sizeof(VAR_13)))
    VAR_12 = -VAR_2;

  } else {
   VAR_12 = FUNC_1(VAR_15);
  }
  break;
 case 129:
  VAR_12 = -VAR_5;
  if (!FUNC_12(VAR_16->user_ns, VAR_0))
   break;

  if (VAR_9 == VAR_17->fb_tnl_dev) {
   VAR_12 = -VAR_2;
   if (FUNC_2(&VAR_13, VAR_10->ifr_ifru.ifru_data, sizeof(VAR_13)))
    break;
   VAR_12 = -VAR_4;
   FUNC_6(&VAR_14, &VAR_13);
   VAR_15 = FUNC_5(VAR_16, &VAR_14, 0);
   if (FUNC_0(VAR_15))
    break;
   VAR_12 = -VAR_5;
   if (VAR_15->dev == VAR_17->fb_tnl_dev)
    break;
   VAR_9 = VAR_15->dev;
  }
  VAR_12 = 0;
  FUNC_13(VAR_9);
  break;
 default:
  VAR_12 = -VAR_3;
 }
 return VAR_12;
}
