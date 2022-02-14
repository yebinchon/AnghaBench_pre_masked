
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tty_struct {scalar_t__ disc_data; } ;
struct TYPE_2__ {int (* recv_buf ) (struct nci_uart*,void*,char*,int) ;} ;
struct nci_uart {int rx_lock; TYPE_1__ ops; struct tty_struct* tty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nci_uart*,void*,char*,int) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, const u8 *VAR_1,
     char *VAR_2, int VAR_3)
{
 struct nci_uart *VAR_4 = (void *)VAR_0->disc_data;

 if (!VAR_4 || VAR_0 != VAR_4->tty)
  return;

 FUNC_0(&VAR_4->rx_lock);
 VAR_4->ops.recv_buf(VAR_4, (void *)VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_4->rx_lock);

 FUNC_3(VAR_0);
}
