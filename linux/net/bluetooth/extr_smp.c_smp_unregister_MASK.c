
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int dummy; } ;
struct hci_dev {struct l2cap_chan* smp_data; struct l2cap_chan* smp_bredr_data; } ;


 int FUNC_0 (struct l2cap_chan*) ;

void FUNC_1(struct hci_dev *VAR_0)
{
 struct l2cap_chan *VAR_1;

 if (VAR_0->smp_bredr_data) {
  VAR_1 = VAR_0->smp_bredr_data;
  VAR_0->smp_bredr_data = ((void*)0);
  FUNC_0(VAR_1);
 }

 if (VAR_0->smp_data) {
  VAR_1 = VAR_0->smp_data;
  VAR_0->smp_data = ((void*)0);
  FUNC_0(VAR_1);
 }
}
