
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_hardware_error {int code; } ;
struct hci_dev {int error_reset; int req_workqueue; int hw_error_code; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_ev_hardware_error *VAR_2 = (void *) VAR_1->data;

 VAR_0->hw_error_code = VAR_2->code;

 FUNC_0(VAR_0->req_workqueue, &VAR_0->error_reset);
}
