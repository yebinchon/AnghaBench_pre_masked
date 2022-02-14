
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {int tx_work; int workqueue; int name; } ;
struct hci_chan {int data_q; TYPE_1__* conn; } ;
typedef int __u16 ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int FUNC_0 (char*,int ,struct hci_chan*,int ) ;
 int FUNC_1 (struct hci_chan*,int *,struct sk_buff*,int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct hci_chan *VAR_0, struct sk_buff *VAR_1, __u16 VAR_2)
{
 struct hci_dev *VAR_3 = VAR_0->conn->hdev;

 FUNC_0("%s chan %p flags 0x%4.4x", VAR_3->name, VAR_0, VAR_2);

 FUNC_1(VAR_0, &VAR_0->data_q, VAR_1, VAR_2);

 FUNC_2(VAR_3->workqueue, &VAR_3->tx_work);
}
