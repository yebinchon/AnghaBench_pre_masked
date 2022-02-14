
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_2__ {int thoff; } ;
struct nft_pktinfo {scalar_t__ tprot; TYPE_1__ xt; int skb; int tprot_set; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct tcphdr*) ;
 void* FUNC_1 (int ,int ,unsigned int,void*) ;

__attribute__((used)) static void *
FUNC_2(const struct nft_pktinfo *VAR_1,
         unsigned int VAR_2, void *VAR_3, unsigned int *VAR_4)
{
 struct tcphdr *VAR_5;

 if (!VAR_1->tprot_set || VAR_1->tprot != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_1->skb, VAR_1->xt.thoff, sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return ((void*)0);

 *VAR_4 = FUNC_0(VAR_5);
 if (*VAR_4 < sizeof(*VAR_5) || *VAR_4 > VAR_2)
  return ((void*)0);

 return FUNC_1(VAR_1->skb, VAR_1->xt.thoff, *VAR_4, VAR_3);
}
