
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; scalar_t__ disc_data; } ;
struct nci_uart {struct tty_struct* tty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nci_uart*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct nci_uart *VAR_2 = (void *)VAR_1->disc_data;

 if (!VAR_2)
  return;

 FUNC_0(VAR_0, &VAR_1->flags);

 if (VAR_1 != VAR_2->tty)
  return;

 FUNC_1(VAR_2);
}
