
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ttl; int tos; int proto; } ;
struct TYPE_4__ {int dst; int src; } ;
struct TYPE_5__ {int label; TYPE_1__ addr; } ;
struct sw_flow_key {TYPE_3__ ip; TYPE_2__ ipv6; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_ipv6 {int ipv6_tclass; int ipv6_hlimit; scalar_t__ ipv6_label; int ipv6_dst; int ipv6_src; } ;
struct ipv6hdr {int hop_limit; int nexthdr; int daddr; int saddr; } ;
typedef int masked ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipv6hdr*,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int*,scalar_t__,int *,int*) ;
 int FUNC_5 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int*,int ,int ,int*) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int *,int*,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct sk_buff*,int ,int*,int*,int) ;
 int FUNC_13 (struct ipv6hdr*,int ,int ) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_3, struct sw_flow_key *VAR_4,
      const struct ovs_key_ipv6 *VAR_5,
      const struct ovs_key_ipv6 *VAR_6)
{
 struct ipv6hdr *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_14(VAR_3, FUNC_15(VAR_3) +
      sizeof(struct ipv6hdr));
 if (FUNC_16(VAR_8))
  return VAR_8;

 VAR_7 = FUNC_6(VAR_3);





 if (FUNC_7(VAR_6->ipv6_src)) {
  __be32 *VAR_9 = (__be32 *)&VAR_7->saddr;
  __be32 VAR_10[4];

  FUNC_8(VAR_9, VAR_5->ipv6_src, VAR_6->ipv6_src, VAR_10);

  if (FUNC_16(FUNC_9(VAR_9, VAR_10, sizeof(VAR_10)))) {
   FUNC_12(VAR_3, VAR_4->ip.proto, VAR_9, VAR_10,
          1);
   FUNC_10(&VAR_4->ipv6.addr.src, VAR_10,
          sizeof(VAR_4->ipv6.addr.src));
  }
 }
 if (FUNC_7(VAR_6->ipv6_dst)) {
  unsigned int VAR_11 = 0;
  int VAR_12 = VAR_0;
  bool VAR_13 = 1;
  __be32 *VAR_14 = (__be32 *)&VAR_7->daddr;
  __be32 VAR_15[4];

  FUNC_8(VAR_14, VAR_5->ipv6_dst, VAR_6->ipv6_dst, VAR_15);

  if (FUNC_16(FUNC_9(VAR_14, VAR_15, sizeof(VAR_15)))) {
   if (FUNC_3(VAR_7->nexthdr))
    VAR_13 = (FUNC_4(VAR_3, &VAR_11,
            VAR_2,
            ((void*)0), &VAR_12)
            != VAR_2);

   FUNC_12(VAR_3, VAR_4->ip.proto, VAR_14, VAR_15,
          VAR_13);
   FUNC_10(&VAR_4->ipv6.addr.dst, VAR_15,
          sizeof(VAR_4->ipv6.addr.dst));
  }
 }
 if (VAR_6->ipv6_tclass) {
  FUNC_2(VAR_7, ~VAR_6->ipv6_tclass, VAR_5->ipv6_tclass);
  VAR_4->ip.tos = FUNC_5(VAR_7);
 }
 if (VAR_6->ipv6_label) {
  FUNC_13(VAR_7, FUNC_11(VAR_5->ipv6_label),
       FUNC_11(VAR_6->ipv6_label));
  VAR_4->ipv6.label =
      *(__be32 *)VAR_7 & FUNC_1(VAR_1);
 }
 if (VAR_6->ipv6_hlimit) {
  FUNC_0(VAR_7->hop_limit, VAR_5->ipv6_hlimit,
          VAR_6->ipv6_hlimit);
  VAR_4->ip.ttl = VAR_7->hop_limit;
 }
 return 0;
}
