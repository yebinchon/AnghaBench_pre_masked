
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct rfcomm_dev* driver_data; } ;
struct rfcomm_dev {int port; TYPE_1__* dlc; int flags; } ;
struct TYPE_3__ {int tx_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct rfcomm_dev *VAR_2 = VAR_1->driver_data;

 FUNC_0(VAR_0, &VAR_2->flags);

 FUNC_1(VAR_2->dlc);
 VAR_1->driver_data = ((void*)0);
 FUNC_2(VAR_2->dlc);





 FUNC_3(&VAR_2->dlc->tx_queue);

 FUNC_4(&VAR_2->port);
}
