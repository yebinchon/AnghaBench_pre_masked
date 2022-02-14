
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct nci_uart* disc_data; } ;
struct TYPE_2__ {int (* open ) (struct nci_uart*) ;int (* close ) (struct nci_uart*) ;} ;
struct nci_uart {TYPE_1__ ops; int owner; int rx_lock; int write_work; int tx_q; struct tty_struct* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct nci_uart*) ;
 struct nci_uart* FUNC_2 (int,int ) ;
 int FUNC_3 (struct nci_uart*,int ,int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nci_uart*) ;
 int FUNC_7 (struct nci_uart*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_7, unsigned int VAR_8)
{
 struct nci_uart *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_8 >= VAR_4)
  return -VAR_0;

 if (!VAR_5[VAR_8])
  return -VAR_1;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_3(VAR_9, VAR_5[VAR_8], sizeof(struct nci_uart));
 VAR_9->tty = VAR_7;
 VAR_7->disc_data = VAR_9;
 FUNC_4(&VAR_9->tx_q);
 FUNC_0(&VAR_9->write_work, VAR_6);
 FUNC_5(&VAR_9->rx_lock);

 VAR_10 = VAR_9->ops.open(VAR_9);
 if (VAR_10) {
  VAR_7->disc_data = ((void*)0);
  FUNC_1(VAR_9);
 } else if (!FUNC_8(VAR_9->owner)) {
  VAR_9->ops.close(VAR_9);
  VAR_7->disc_data = ((void*)0);
  FUNC_1(VAR_9);
  return -VAR_1;
 }
 return VAR_10;
}
