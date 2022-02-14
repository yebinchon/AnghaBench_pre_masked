
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct iphdr {int tos; int saddr; int daddr; } ;


 int VAR_0 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct net *VAR_2, struct sock *VAR_3,
      struct sk_buff *VAR_4)
{
 if (!FUNC_3(VAR_4)) {
  const struct iphdr *VAR_5 = FUNC_0(VAR_4);

  if (FUNC_1(VAR_4, VAR_5->daddr, VAR_5->saddr,
      VAR_5->tos, VAR_4->dev))
   goto drop;
 }

 if (FUNC_4(VAR_4, VAR_1))
  goto drop;

 return 0;
drop:
 FUNC_2(VAR_4);
 return VAR_0;
}
