
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_evt_le_ext_adv_set_term {int conn_handle; scalar_t__ status; } ;
struct hci_dev {scalar_t__ adv_addr_type; int cur_adv_instance; int random_addr; int name; } ;
struct hci_conn {int resp_addr; } ;
struct adv_info {int random_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 struct adv_info* FUNC_4 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_evt_le_ext_adv_set_term *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_3->conn_handle));
 if (VAR_4) {
  struct adv_info *VAR_5;

  if (VAR_1->adv_addr_type != VAR_0)
   return;

  if (!VAR_1->cur_adv_instance) {
   FUNC_2(&VAR_4->resp_addr, &VAR_1->random_addr);
   return;
  }

  VAR_5 = FUNC_4(VAR_1, VAR_1->cur_adv_instance);
  if (VAR_5)
   FUNC_2(&VAR_4->resp_addr, &VAR_5->random_addr);
 }
}
