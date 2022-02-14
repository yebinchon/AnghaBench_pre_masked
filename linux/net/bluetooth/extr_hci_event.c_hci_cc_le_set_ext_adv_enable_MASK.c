
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int workqueue; int name; } ;
struct hci_cp_le_set_ext_adv_enable {scalar_t__ enable; } ;
struct hci_conn {int conn_timeout; int le_conn_timeout; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*) ;
 struct hci_cp_le_set_ext_adv_enable* FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_2,
      struct sk_buff *VAR_3)
{
 struct hci_cp_le_set_ext_adv_enable *VAR_4;
 __u8 VAR_5 = *((__u8 *) VAR_3->data);

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_5);

 if (VAR_5)
  return;

 VAR_4 = FUNC_6(VAR_2, VAR_1);
 if (!VAR_4)
  return;

 FUNC_2(VAR_2);

 if (VAR_4->enable) {
  struct hci_conn *VAR_6;

  FUNC_3(VAR_2, VAR_0);

  VAR_6 = FUNC_5(VAR_2);
  if (VAR_6)
   FUNC_7(VAR_2->workqueue,
        &VAR_6->le_conn_timeout,
        VAR_6->conn_timeout);
 } else {
  FUNC_1(VAR_2, VAR_0);
 }

 FUNC_4(VAR_2);
}
