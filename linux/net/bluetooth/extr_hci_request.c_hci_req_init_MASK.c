
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {scalar_t__ err; struct hci_dev* hdev; int cmd_q; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct hci_request *VAR_0, struct hci_dev *VAR_1)
{
 FUNC_0(&VAR_0->cmd_q);
 VAR_0->hdev = VAR_1;
 VAR_0->err = 0;
}
