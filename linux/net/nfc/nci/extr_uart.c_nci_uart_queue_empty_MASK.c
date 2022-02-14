
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_uart {int tx_q; scalar_t__ tx_skb; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct nci_uart *VAR_0)
{
 if (VAR_0->tx_skb)
  return 0;

 return FUNC_0(&VAR_0->tx_q);
}
