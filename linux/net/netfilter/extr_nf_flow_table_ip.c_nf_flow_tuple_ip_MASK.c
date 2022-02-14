
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int ifindex; } ;
struct iphdr {int ihl; scalar_t__ protocol; int ttl; int daddr; int saddr; } ;
struct flow_ports {int dest; int source; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct flow_offload_tuple {scalar_t__ l4proto; int iifidx; int l3proto; int dst_port; int src_port; TYPE_2__ dst_v4; TYPE_1__ src_v4; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct iphdr*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, const struct net_device *VAR_4,
       struct flow_offload_tuple *VAR_5)
{
 struct flow_ports *VAR_6;
 unsigned int VAR_7;
 struct iphdr *VAR_8;

 if (!FUNC_3(VAR_3, sizeof(*VAR_8)))
  return -1;

 VAR_8 = FUNC_1(VAR_3);
 VAR_7 = VAR_8->ihl * 4;

 if (FUNC_2(VAR_8) ||
     FUNC_5(FUNC_0(VAR_7)))
  return -1;

 if (VAR_8->protocol != VAR_1 &&
     VAR_8->protocol != VAR_2)
  return -1;

 if (VAR_8->ttl <= 1)
  return -1;

 VAR_7 = VAR_8->ihl * 4;
 if (!FUNC_3(VAR_3, VAR_7 + sizeof(*VAR_6)))
  return -1;

 VAR_6 = (struct flow_ports *)(FUNC_4(VAR_3) + VAR_7);

 VAR_5->src_v4.s_addr = VAR_8->saddr;
 VAR_5->dst_v4.s_addr = VAR_8->daddr;
 VAR_5->src_port = VAR_6->source;
 VAR_5->dst_port = VAR_6->dest;
 VAR_5->l3proto = VAR_0;
 VAR_5->l4proto = VAR_8->protocol;
 VAR_5->iifidx = VAR_4->ifindex;

 return 0;
}
