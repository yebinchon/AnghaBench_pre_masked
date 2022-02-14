
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_uart {struct sk_buff* tx_skb; int tx_q; } ;


 struct sk_buff* FUNC_0 (int *) ;

__attribute__((used)) static inline struct sk_buff *FUNC_1(struct nci_uart *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->tx_skb;

 if (!VAR_1)
  VAR_1 = FUNC_0(&VAR_0->tx_q);
 else
  VAR_0->tx_skb = ((void*)0);

 return VAR_1;
}
