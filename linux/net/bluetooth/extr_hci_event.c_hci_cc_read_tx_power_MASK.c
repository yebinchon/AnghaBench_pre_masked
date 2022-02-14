
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_tx_power {int tx_power; int handle; scalar_t__ status; } ;
struct hci_dev {int name; } ;
struct hci_cp_read_tx_power {int type; } ;
struct hci_conn {int max_tx_power; int tx_power; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_read_tx_power* FUNC_5 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_cp_read_tx_power *VAR_3;
 struct hci_rp_read_tx_power *VAR_4 = (void *) VAR_2->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_4->status);

 if (VAR_4->status)
  return;

 VAR_3 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 FUNC_3(VAR_1);

 VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_4->handle));
 if (!VAR_5)
  goto unlock;

 switch (VAR_3->type) {
 case 0x00:
  VAR_5->tx_power = VAR_4->tx_power;
  break;
 case 0x01:
  VAR_5->max_tx_power = VAR_4->tx_power;
  break;
 }

unlock:
 FUNC_4(VAR_1);
}
