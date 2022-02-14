
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ip6_tnl_encap_ops {int (* err_handler ) (struct sk_buff*,struct inet6_skb_parm*,int ,int ,int,int ) ;} ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct ip6_tnl_encap_ops* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3,
          struct inet6_skb_parm *VAR_4,
          u8 VAR_5, u8 VAR_6, int VAR_7, __be32 VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  int (*VAR_10)(struct sk_buff *VAR_11, struct inet6_skb_parm *VAR_12,
          u8 VAR_13, u8 VAR_14, int VAR_15, __be32 VAR_16);
  const struct ip6_tnl_encap_ops *VAR_17;

  VAR_17 = FUNC_0(VAR_2[VAR_9]);
  if (!VAR_17)
   continue;
  VAR_10 = VAR_17->err_handler;
  if (VAR_10 && !VAR_10(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
   return 0;
 }

 return -VAR_0;
}
