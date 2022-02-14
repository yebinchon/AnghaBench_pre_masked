
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {TYPE_6__* dev; scalar_t__ data; } ;
struct TYPE_9__ {int sysctl_icmp_ignore_bogus_error_responses; int sysctl_ip_no_pmtu_disc; } ;
struct net {TYPE_3__ ipv4; } ;
struct iphdr {int ihl; int daddr; int protocol; } ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_8__ {int gateway; TYPE_1__ frag; } ;
struct icmphdr {int type; int code; TYPE_2__ un; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int saddr; } ;
struct TYPE_10__ {int dev; } ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (int ) ;
 struct icmphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct net*,TYPE_6__*,int ) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,int *,int,int,int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_13(struct sk_buff *VAR_5)
{
 const struct iphdr *VAR_6;
 struct icmphdr *VAR_7;
 struct net *VAR_8;
 u32 VAR_9 = 0;

 VAR_8 = FUNC_1(FUNC_12(VAR_5)->dev);







 if (!FUNC_11(VAR_5, sizeof(struct iphdr)))
  goto out_err;

 VAR_7 = FUNC_2(VAR_5);
 VAR_6 = (const struct iphdr *)VAR_5->data;

 if (VAR_6->ihl < 5)
  goto out_err;

 switch (VAR_7->type) {
 case 136:
  switch (VAR_7->code & 15) {
  case 133:
  case 134:
  case 130:
  case 131:
   break;
  case 135:




   switch (VAR_8->ipv4.sysctl_ip_no_pmtu_disc) {
   default:
    FUNC_7("%pI4: fragmentation needed and DF set\n",
          &VAR_6->daddr);
    break;
   case 2:
    goto out;
   case 3:
    if (!FUNC_4(VAR_6->protocol))
     goto out;

   case 0:
    VAR_9 = FUNC_10(VAR_7->un.frag.mtu);
   }
   break;
  case 129:
   FUNC_7("%pI4: Source Route Failed\n",
         &VAR_6->daddr);
   break;
  default:
   break;
  }
  if (VAR_7->code > VAR_3)
   goto out;
  break;
 case 132:
  VAR_9 = FUNC_9(VAR_7->un.gateway) >> 24;
  break;
 case 128:
  FUNC_0(VAR_8, VAR_2);
  if (VAR_7->code == VAR_0)
   goto out;
  break;
 }
 if (!VAR_8->ipv4.sysctl_icmp_ignore_bogus_error_responses &&
     FUNC_5(VAR_8, VAR_5->dev, VAR_6->daddr) == VAR_4) {
  FUNC_8("%pI4 sent an invalid ICMP type %u, code %u error to a broadcast: %pI4 on %s\n",
         &FUNC_6(VAR_5)->saddr,
         VAR_7->type, VAR_7->code,
         &VAR_6->daddr, VAR_5->dev->name);
  goto out;
 }

 FUNC_3(VAR_5, VAR_9);

out:
 return 1;
out_err:
 FUNC_0(VAR_8, VAR_1);
 return 0;
}
