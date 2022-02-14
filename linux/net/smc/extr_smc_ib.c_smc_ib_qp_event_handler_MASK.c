
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct smc_link {struct smc_ib_device* smcibdev; } ;
struct smc_ib_device {int port_event_work; int port_event_mask; } ;
struct TYPE_4__ {TYPE_1__* qp; } ;
struct ib_event {int event; TYPE_2__ element; } ;
struct TYPE_3__ {int port; } ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ib_event *VAR_1, void *VAR_2)
{
 struct smc_link *VAR_3 = (struct smc_link *)VAR_2;
 struct smc_ib_device *VAR_4 = VAR_3->smcibdev;
 u8 VAR_5;

 switch (VAR_1->event) {
 case 128:
 case 129:
  VAR_5 = VAR_1->element.qp->port - 1;
  if (VAR_5 < VAR_0) {
   FUNC_1(VAR_5, &VAR_4->port_event_mask);
   FUNC_0(&VAR_4->port_event_work);
  }
  break;
 default:
  break;
 }
}
