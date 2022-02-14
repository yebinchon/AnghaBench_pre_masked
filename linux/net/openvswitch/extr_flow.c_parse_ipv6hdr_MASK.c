
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int proto; int frag; int ttl; int tos; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_5__ {int label; TYPE_1__ addr; } ;
struct sw_flow_key {TYPE_3__ ip; TYPE_2__ ipv6; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; int hop_limit; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int*,int,unsigned short*,int*) ;
 int FUNC_3 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_7, struct sw_flow_key *VAR_8)
{
 unsigned short VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = FUNC_5(VAR_7);
 unsigned int VAR_12;
 struct ipv6hdr *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_14 = FUNC_0(VAR_7, VAR_11 + sizeof(*VAR_13));
 if (FUNC_7(VAR_14))
  return VAR_14;

 VAR_13 = FUNC_4(VAR_7);

 VAR_8->ip.proto = VAR_3;
 VAR_8->ip.tos = FUNC_3(VAR_13);
 VAR_8->ip.ttl = VAR_13->hop_limit;
 VAR_8->ipv6.label = *(__be32 *)VAR_13 & FUNC_1(VAR_2);
 VAR_8->ipv6.addr.src = VAR_13->saddr;
 VAR_8->ipv6.addr.dst = VAR_13->daddr;

 VAR_15 = FUNC_2(VAR_7, &VAR_10, -1, &VAR_9, &VAR_16);
 if (VAR_16 & VAR_1) {
  if (VAR_9) {
   VAR_8->ip.frag = VAR_5;
   VAR_8->ip.proto = VAR_15;
   return 0;
  }
  VAR_8->ip.frag = VAR_4;
 } else {
  VAR_8->ip.frag = VAR_6;
 }





 if (FUNC_7(VAR_15 < 0))
  return -VAR_0;

 VAR_12 = VAR_10 - VAR_11;
 FUNC_6(VAR_7, VAR_11 + VAR_12);
 VAR_8->ip.proto = VAR_15;
 return VAR_12;
}
