
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_table {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (int ,int ,int ,int ,int ,int ,int ,struct udp_table*,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline struct sock *FUNC_5(struct sk_buff *VAR_0,
       __be16 VAR_1, __be16 VAR_2,
       struct udp_table *VAR_3)
{
 const struct iphdr *VAR_4 = FUNC_4(VAR_0);

 return FUNC_0(FUNC_1(VAR_0->dev), VAR_4->saddr, VAR_1,
     VAR_4->daddr, VAR_2, FUNC_2(VAR_0),
     FUNC_3(VAR_0), VAR_3, VAR_0);
}
