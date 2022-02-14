
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_le_set_ext_adv_params {int tx_power; scalar_t__ status; } ;
struct hci_dev {int cur_adv_instance; int adv_tx_power; int adv_addr_type; int name; } ;
struct hci_cp_le_set_ext_adv_params {int own_addr_type; } ;
struct adv_info {int tx_power; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct adv_info* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 struct hci_cp_le_set_ext_adv_params* FUNC_5 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_le_set_ext_adv_params *VAR_3 = (void *) VAR_2->data;
 struct hci_cp_le_set_ext_adv_params *VAR_4;
 struct adv_info *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 VAR_4 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_1);
 VAR_1->adv_addr_type = VAR_4->own_addr_type;
 if (!VAR_1->cur_adv_instance) {

  VAR_1->adv_tx_power = VAR_3->tx_power;
 } else {
  VAR_5 = FUNC_3(VAR_1,
           VAR_1->cur_adv_instance);
  if (VAR_5)
   VAR_5->tx_power = VAR_3->tx_power;
 }

 FUNC_4(VAR_1, VAR_1->cur_adv_instance);
 FUNC_2(VAR_1);
}
