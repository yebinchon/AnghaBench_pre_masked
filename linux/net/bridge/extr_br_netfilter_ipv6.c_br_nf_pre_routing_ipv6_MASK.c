
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; scalar_t__ network_header; scalar_t__ transport_header; int protocol; } ;
struct nf_hook_state {int sk; int net; } ;
struct nf_bridge_info {int ipv6_daddr; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,struct sk_buff*,int ,int *,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_4 (struct sk_buff*) ;
 struct nf_bridge_info* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

unsigned int FUNC_7(void *VAR_6,
        struct sk_buff *VAR_7,
        const struct nf_hook_state *VAR_8)
{
 struct nf_bridge_info *VAR_9;

 if (FUNC_1(VAR_8->net, VAR_7))
  return VAR_2;

 VAR_9 = FUNC_4(VAR_7);
 if (!VAR_9)
  return VAR_2;
 if (!FUNC_6(VAR_7, VAR_8->net))
  return VAR_2;

 VAR_9 = FUNC_5(VAR_7);
 VAR_9->ipv6_daddr = FUNC_3(VAR_7)->daddr;

 VAR_7->protocol = FUNC_2(VAR_0);
 VAR_7->transport_header = VAR_7->network_header + sizeof(struct ipv6hdr);

 FUNC_0(VAR_1, VAR_3, VAR_8->net, VAR_8->sk, VAR_7,
  VAR_7->dev, ((void*)0),
  VAR_5);

 return VAR_4;
}
