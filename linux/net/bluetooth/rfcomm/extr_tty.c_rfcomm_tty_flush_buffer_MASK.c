
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct rfcomm_dev {TYPE_1__* dlc; } ;
struct TYPE_2__ {int tx_queue; } ;


 int FUNC_0 (char*,struct tty_struct*,struct rfcomm_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 struct rfcomm_dev *VAR_1 = (struct rfcomm_dev *) VAR_0->driver_data;

 FUNC_0("tty %p dev %p", VAR_0, VAR_1);

 if (!VAR_1 || !VAR_1->dlc)
  return;

 FUNC_1(&VAR_1->dlc->tx_queue);
 FUNC_2(VAR_0);
}
