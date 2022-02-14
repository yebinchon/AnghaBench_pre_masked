
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; scalar_t__ network_header; scalar_t__ transport_header; int protocol; } ;
struct nf_hook_state {int sk; int net; int in; } ;
struct nf_bridge_info {int ipv4_daddr; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;
struct brnf_net {int call_iptables; int call_ip6tables; } ;
typedef int __u32 ;
struct TYPE_2__ {int ihl; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_3 (void*,struct sk_buff*,struct nf_hook_state const*) ;
 int FUNC_4 (struct net_bridge*,int ) ;
 struct net_bridge_port* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ) ;
 struct brnf_net* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct sk_buff*,int ) ;
 int FUNC_21 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static unsigned int FUNC_23(void *VAR_10,
          struct sk_buff *VAR_11,
          const struct nf_hook_state *VAR_12)
{
 struct nf_bridge_info *VAR_13;
 struct net_bridge_port *VAR_14;
 struct net_bridge *VAR_15;
 __u32 VAR_16 = FUNC_16(VAR_11);
 struct brnf_net *VAR_17;

 if (FUNC_22(!FUNC_20(VAR_11, VAR_16)))
  return VAR_5;

 VAR_14 = FUNC_5(VAR_12->in);
 if (VAR_14 == ((void*)0))
  return VAR_5;
 VAR_15 = VAR_14->br;

 VAR_17 = FUNC_14(VAR_12->net, VAR_9);
 if (FUNC_1(VAR_11) || FUNC_13(VAR_11, VAR_12->net) ||
     FUNC_11(VAR_11, VAR_12->net)) {
  if (!VAR_17->call_ip6tables &&
      !FUNC_4(VAR_15, VAR_0))
   return VAR_4;
  if (!FUNC_9()) {
   FUNC_19("Module ipv6 is disabled, so call_ip6tables is not supported.");
   return VAR_5;
  }

  FUNC_18(VAR_11);
  return FUNC_3(VAR_10, VAR_11, VAR_12);
 }

 if (!VAR_17->call_iptables && !FUNC_4(VAR_15, VAR_1))
  return VAR_4;

 if (!FUNC_0(VAR_11) && !FUNC_12(VAR_11, VAR_12->net) &&
     !FUNC_10(VAR_11, VAR_12->net))
  return VAR_4;

 FUNC_18(VAR_11);

 if (FUNC_6(VAR_12->net, VAR_11))
  return VAR_5;

 if (!FUNC_15(VAR_11))
  return VAR_5;
 if (!FUNC_21(VAR_11, VAR_12->net))
  return VAR_5;

 VAR_13 = FUNC_17(VAR_11);
 VAR_13->ipv4_daddr = FUNC_8(VAR_11)->daddr;

 VAR_11->protocol = FUNC_7(VAR_2);
 VAR_11->transport_header = VAR_11->network_header + FUNC_8(VAR_11)->ihl * 4;

 FUNC_2(VAR_3, VAR_6, VAR_12->net, VAR_12->sk, VAR_11,
  VAR_11->dev, ((void*)0),
  VAR_8);

 return VAR_7;
}
