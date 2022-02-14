
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_regs {int dummy; } ;
struct nft_pktinfo {TYPE_1__* skb; } ;
struct nft_counter_percpu_priv {int * counter; } ;
struct nft_counter {int packets; int bytes; } ;
typedef int seqcount_t ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct nft_counter_percpu_priv *VAR_1,
           struct nft_regs *VAR_2,
           const struct nft_pktinfo *VAR_3)
{
 struct nft_counter *VAR_4;
 seqcount_t *VAR_5;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_1->counter);
 VAR_5 = FUNC_2(&VAR_0);

 FUNC_3(VAR_5);

 VAR_4->bytes += VAR_3->skb->len;
 VAR_4->packets++;

 FUNC_4(VAR_5);
 FUNC_1();
}
