
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int version; int ttl; int frag_off; int id; int tos; int protocol; } ;
struct TYPE_2__ {int ttl; int frag_off; int id; int tos; int protocol; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0)
{
 struct iphdr *VAR_1 = FUNC_1(VAR_0);

 VAR_1->ihl = 5;
 VAR_1->version = 4;

 VAR_1->protocol = FUNC_0(VAR_0)->protocol;
 VAR_1->tos = FUNC_0(VAR_0)->tos;

 VAR_1->id = FUNC_0(VAR_0)->id;
 VAR_1->frag_off = FUNC_0(VAR_0)->frag_off;
 VAR_1->ttl = FUNC_0(VAR_0)->ttl;
}
