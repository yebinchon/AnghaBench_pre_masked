
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct net {int dummy; } ;
struct ipv6_saddr_score {int rule; int scopedist; int matchlen; int scorebits; TYPE_3__* ifa; int addr_type; } ;
struct ipv6_saddr_dst {int scope; int prefs; int * addr; int label; int ifindex; } ;
struct TYPE_6__ {int use_tempaddr; } ;
struct TYPE_8__ {TYPE_2__ cnf; TYPE_1__* dev; } ;
struct TYPE_7__ {int flags; int prefix_len; int addr; TYPE_4__* idev; } ;
struct TYPE_5__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct net*,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net*,TYPE_4__*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_7,
          struct ipv6_saddr_score *VAR_8,
          struct ipv6_saddr_dst *VAR_9,
          int VAR_10)
{
 int VAR_11;

 if (VAR_10 <= VAR_8->rule) {
  switch (VAR_10) {
  case 128:
   VAR_11 = VAR_8->scopedist;
   break;
  case 130:
   VAR_11 = VAR_8->matchlen;
   break;
  default:
   VAR_11 = !!FUNC_8(VAR_10, VAR_8->scorebits);
  }
  goto out;
 }

 switch (VAR_10) {
 case 137:

  VAR_11 = !!VAR_8->ifa;
  break;
 case 135:

  VAR_11 = FUNC_3(&VAR_8->ifa->addr, VAR_9->addr);
  break;
 case 128:
  VAR_11 = FUNC_0(VAR_8->addr_type);
  if (VAR_11 >= VAR_9->scope)
   VAR_11 = -VAR_11;
  else
   VAR_11 -= 128;
  VAR_8->scopedist = VAR_11;
  break;
 case 131:
     {

  u8 VAR_12 = VAR_0;

  if (!FUNC_7(VAR_7, VAR_8->ifa->idev))
   VAR_12 |= VAR_2;
  VAR_11 = FUNC_6(VAR_8->addr_type) ||
        !(VAR_8->ifa->flags & VAR_12);
  break;
     }
 case 133:

  VAR_11 = (!VAR_9->ifindex ||
         VAR_9->ifindex == VAR_8->ifa->idev->dev->ifindex);
  break;
 case 136:

  VAR_11 = FUNC_4(VAR_7,
          &VAR_8->ifa->addr, VAR_8->addr_type,
          VAR_8->ifa->idev->dev->ifindex) == VAR_9->label;
  break;
 case 129:
     {



  int VAR_13 = VAR_9->prefs & (VAR_5|VAR_6) ?
    !!(VAR_9->prefs & VAR_6) :
    VAR_8->ifa->idev->cnf.use_tempaddr >= 2;
  VAR_11 = (!(VAR_8->ifa->flags & VAR_3)) ^ VAR_13;
  break;
     }
 case 132:



  VAR_11 = !(FUNC_5(&VAR_8->ifa->addr) ^
   FUNC_5(VAR_9->addr));
  break;
 case 130:

  VAR_11 = FUNC_2(&VAR_8->ifa->addr, VAR_9->addr);
  if (VAR_11 > VAR_8->ifa->prefix_len)
   VAR_11 = VAR_8->ifa->prefix_len;
  VAR_8->matchlen = VAR_11;
  break;
 default:
  VAR_11 = 0;
 }

 if (VAR_11)
  FUNC_1(VAR_10, VAR_8->scorebits);
 VAR_8->rule = VAR_10;
out:
 return VAR_11;
}
