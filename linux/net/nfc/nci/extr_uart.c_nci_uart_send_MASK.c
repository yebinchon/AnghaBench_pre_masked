
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nci_uart {int tx_q; } ;


 int FUNC_0 (struct nci_uart*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct nci_uart *VAR_0, struct sk_buff *VAR_1)
{

 FUNC_1(&VAR_0->tx_q, VAR_1);


 FUNC_0(VAR_0);

 return 0;
}
