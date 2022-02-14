
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_uart {TYPE_1__* tty; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int termios_rwsem; struct ktermios termios; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct ktermios*) ;
 int FUNC_2 (struct ktermios*,int,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nci_uart *VAR_1, int VAR_2, int VAR_3)
{
 struct ktermios VAR_4;

 if (!VAR_1->tty)
  return;

 FUNC_0(&VAR_1->tty->termios_rwsem);
 VAR_4 = VAR_1->tty->termios;
 FUNC_3(&VAR_1->tty->termios_rwsem);
 FUNC_2(&VAR_4, VAR_2, VAR_2);

 if (VAR_3)
  VAR_4.c_cflag |= VAR_0;
 else
  VAR_4.c_cflag &= ~VAR_0;

 FUNC_1(VAR_1->tty, &VAR_4);
}
