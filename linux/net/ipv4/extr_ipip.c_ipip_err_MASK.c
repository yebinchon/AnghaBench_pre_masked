
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {TYPE_4__* dev; scalar_t__ data; } ;
struct net {int dummy; } ;
struct iphdr {int protocol; int saddr; int daddr; } ;
struct ip_tunnel_net {int dummy; } ;
struct TYPE_5__ {scalar_t__ daddr; scalar_t__ ttl; } ;
struct TYPE_6__ {TYPE_1__ iph; int link; } ;
struct ip_tunnel {int err_count; scalar_t__ err_time; TYPE_2__ parms; } ;
struct TYPE_8__ {int ifindex; } ;
struct TYPE_7__ {int type; int code; } ;


 int VAR_0 ;

 int const VAR_1 ;
 int const VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct net* FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 struct ip_tunnel* FUNC_2 (struct ip_tunnel_net*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 struct ip_tunnel_net* FUNC_5 (struct net*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, u32 VAR_8)
{




 struct net *VAR_9 = FUNC_0(VAR_7->dev);
 struct ip_tunnel_net *VAR_10 = FUNC_5(VAR_9, VAR_5);
 const struct iphdr *VAR_11 = (const struct iphdr *)VAR_7->data;
 const int VAR_12 = FUNC_1(VAR_7)->type;
 const int VAR_13 = FUNC_1(VAR_7)->code;
 struct ip_tunnel *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_2(VAR_10, VAR_7->dev->ifindex, VAR_4,
        VAR_11->daddr, VAR_11->saddr, 0);
 if (!VAR_14) {
  VAR_15 = -VAR_0;
  goto out;
 }

 switch (VAR_12) {
 case 131:
  switch (VAR_13) {
  case 129:

   goto out;
  default:




   break;
  }
  break;

 case 128:
  if (VAR_13 != VAR_1)
   goto out;
  break;

 case 130:
  break;

 default:
  goto out;
 }

 if (VAR_12 == 131 && VAR_13 == VAR_2) {
  FUNC_4(VAR_7, VAR_9, VAR_8, VAR_14->parms.link, VAR_11->protocol);
  goto out;
 }

 if (VAR_12 == 130) {
  FUNC_3(VAR_7, VAR_9, VAR_14->parms.link, VAR_11->protocol);
  goto out;
 }

 if (VAR_14->parms.iph.daddr == 0) {
  VAR_15 = -VAR_0;
  goto out;
 }

 if (VAR_14->parms.iph.ttl == 0 && VAR_12 == 128)
  goto out;

 if (FUNC_6(VAR_6, VAR_14->err_time + VAR_3))
  VAR_14->err_count++;
 else
  VAR_14->err_count = 1;
 VAR_14->err_time = VAR_6;

out:
 return VAR_15;
}
