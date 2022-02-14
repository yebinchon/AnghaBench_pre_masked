
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {void* protocol; } ;
struct iphdr {int version; int ihl; int ttl; int saddr; int daddr; scalar_t__ check; int protocol; void* frag_off; scalar_t__ id; scalar_t__ tos; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 struct iphdr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

struct iphdr *FUNC_4(struct sk_buff *VAR_2,
      const struct sk_buff *VAR_3,
      __u8 VAR_4, int VAR_5)
{
 struct iphdr *VAR_6, *VAR_7 = FUNC_1(VAR_3);

 FUNC_3(VAR_2);
 VAR_6 = FUNC_2(VAR_2, sizeof(struct iphdr));
 VAR_6->version = 4;
 VAR_6->ihl = sizeof(struct iphdr) / 4;
 VAR_6->tos = 0;
 VAR_6->id = 0;
 VAR_6->frag_off = FUNC_0(VAR_1);
 VAR_6->protocol = VAR_4;
 VAR_6->check = 0;
 VAR_6->saddr = VAR_7->daddr;
 VAR_6->daddr = VAR_7->saddr;
 VAR_6->ttl = VAR_5;

 VAR_2->protocol = FUNC_0(VAR_0);

 return VAR_6;
}
