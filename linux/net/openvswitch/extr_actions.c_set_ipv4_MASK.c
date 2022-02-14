
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ttl; int tos; } ;
struct TYPE_4__ {scalar_t__ dst; scalar_t__ src; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct sw_flow_key {TYPE_3__ ip; TYPE_2__ ipv4; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_ipv4 {int ipv4_tos; int ipv4_ttl; int ipv4_dst; int ipv4_src; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; int ttl; int tos; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*,int,int) ;
 int FUNC_3 (struct sk_buff*,struct iphdr*,scalar_t__*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct iphdr*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
      const struct ovs_key_ipv4 *VAR_2,
      const struct ovs_key_ipv4 *VAR_3)
{
 struct iphdr *VAR_4;
 __be32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_0, FUNC_6(VAR_0) +
      sizeof(struct iphdr));
 if (FUNC_7(VAR_6))
  return VAR_6;

 VAR_4 = FUNC_1(VAR_0);





 if (VAR_3->ipv4_src) {
  VAR_5 = FUNC_0(VAR_4->saddr, VAR_2->ipv4_src, VAR_3->ipv4_src);

  if (FUNC_7(VAR_5 != VAR_4->saddr)) {
   FUNC_3(VAR_0, VAR_4, &VAR_4->saddr, VAR_5);
   VAR_1->ipv4.addr.src = VAR_5;
  }
 }
 if (VAR_3->ipv4_dst) {
  VAR_5 = FUNC_0(VAR_4->daddr, VAR_2->ipv4_dst, VAR_3->ipv4_dst);

  if (FUNC_7(VAR_5 != VAR_4->daddr)) {
   FUNC_3(VAR_0, VAR_4, &VAR_4->daddr, VAR_5);
   VAR_1->ipv4.addr.dst = VAR_5;
  }
 }
 if (VAR_3->ipv4_tos) {
  FUNC_2(VAR_4, ~VAR_3->ipv4_tos, VAR_2->ipv4_tos);
  VAR_1->ip.tos = VAR_4->tos;
 }
 if (VAR_3->ipv4_ttl) {
  FUNC_4(VAR_0, VAR_4, VAR_2->ipv4_ttl, VAR_3->ipv4_ttl);
  VAR_1->ip.ttl = VAR_4->ttl;
 }

 return 0;
}
