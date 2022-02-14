
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct tnl_ptk_info {int proto; } ;
struct sk_buff {int dev; } ;
struct metadata_dst {int dummy; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct TYPE_2__ {scalar_t__ collect_md; int proto; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ip6_tnl*,struct sk_buff*,struct tnl_ptk_info const*,struct metadata_dst*,int (*) (struct ip6_tnl const*,struct ipv6hdr const*,struct sk_buff*),int ) ;
 int FUNC_2 (int ) ;
 struct ip6_tnl* FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct ip6_tnl*,int *,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*) ;
 struct metadata_dst* FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, u8 VAR_3,
        const struct tnl_ptk_info *VAR_4,
        int (*VAR_5)(const struct ip6_tnl *VAR_6,
        const struct ipv6hdr *VAR_7,
        struct sk_buff *VAR_8))
{
 struct ip6_tnl *VAR_9;
 const struct ipv6hdr *VAR_10 = FUNC_6(VAR_2);
 struct metadata_dst *VAR_11 = ((void*)0);
 int VAR_12 = -1;

 FUNC_9();
 VAR_9 = FUNC_3(FUNC_2(VAR_2->dev), &VAR_10->saddr, &VAR_10->daddr);

 if (VAR_9) {
  u8 VAR_13 = FUNC_0(VAR_9->parms.proto);

  if (VAR_13 != VAR_3 && VAR_13 != 0)
   goto drop;
  if (!FUNC_11(((void*)0), VAR_0, VAR_2))
   goto drop;
  VAR_10 = FUNC_6(VAR_2);
  if (!FUNC_4(VAR_9, &VAR_10->daddr, &VAR_10->saddr))
   goto drop;
  if (FUNC_5(VAR_2, 0, VAR_4->proto, 0))
   goto drop;
  if (VAR_9->parms.collect_md) {
   VAR_11 = FUNC_7(VAR_2, 0, 0, 0);
   if (!VAR_11)
    goto drop;
  }
  VAR_12 = FUNC_1(VAR_9, VAR_2, VAR_4, VAR_11, VAR_5,
        VAR_1);
 }

 FUNC_10();

 return VAR_12;

drop:
 FUNC_10();
 FUNC_8(VAR_2);
 return 0;
}
