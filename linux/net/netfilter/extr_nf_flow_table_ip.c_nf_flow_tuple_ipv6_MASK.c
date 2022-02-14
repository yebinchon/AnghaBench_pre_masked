
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct ipv6hdr {scalar_t__ nexthdr; int hop_limit; int daddr; int saddr; } ;
struct flow_ports {int dest; int source; } ;
struct flow_offload_tuple {scalar_t__ l4proto; int iifidx; int l3proto; int dst_port; int src_port; int dst_v6; int src_v6; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, const struct net_device *VAR_4,
         struct flow_offload_tuple *VAR_5)
{
 struct flow_ports *VAR_6;
 struct ipv6hdr *VAR_7;
 unsigned int VAR_8;

 if (!FUNC_1(VAR_3, sizeof(*VAR_7)))
  return -1;

 VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->nexthdr != VAR_1 &&
     VAR_7->nexthdr != VAR_2)
  return -1;

 if (VAR_7->hop_limit <= 1)
  return -1;

 VAR_8 = sizeof(*VAR_7);
 if (!FUNC_1(VAR_3, VAR_8 + sizeof(*VAR_6)))
  return -1;

 VAR_6 = (struct flow_ports *)(FUNC_2(VAR_3) + VAR_8);

 VAR_5->src_v6 = VAR_7->saddr;
 VAR_5->dst_v6 = VAR_7->daddr;
 VAR_5->src_port = VAR_6->source;
 VAR_5->dst_port = VAR_6->dest;
 VAR_5->l3proto = VAR_0;
 VAR_5->l4proto = VAR_7->nexthdr;
 VAR_5->iifidx = VAR_4->ifindex;

 return 0;
}
