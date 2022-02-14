
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ disc_data; } ;
struct nci_uart {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct tty_struct*,struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (struct tty_struct*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1, struct file *VAR_2,
         unsigned int VAR_3, unsigned long VAR_4)
{
 struct nci_uart *VAR_5 = (void *)VAR_1->disc_data;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 128:
  if (!VAR_5)
   return FUNC_1(VAR_1, (unsigned int)VAR_4);
  else
   return -VAR_0;
  break;
 default:
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }

 return VAR_6;
}
