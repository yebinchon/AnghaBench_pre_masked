
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int * disc_data; } ;
struct TYPE_2__ {int (* close ) (struct nci_uart*) ;} ;
struct nci_uart {int write_work; int owner; int * tty; TYPE_1__ ops; int tx_q; int rx_skb; int tx_skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nci_uart*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nci_uart*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0)
{
 struct nci_uart *VAR_1 = (void *)VAR_0->disc_data;


 VAR_0->disc_data = ((void*)0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1->tx_skb);
 FUNC_2(VAR_1->rx_skb);

 FUNC_4(&VAR_1->tx_q);

 VAR_1->ops.close(VAR_1);
 VAR_1->tty = ((void*)0);
 FUNC_3(VAR_1->owner);

 FUNC_0(&VAR_1->write_work);

 FUNC_1(VAR_1);
}
