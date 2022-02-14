
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int cur_adv_instance; int random_addr; } ;
struct hci_cp_le_set_adv_set_rand_addr {int bdaddr; } ;
struct adv_info {int random_addr; } ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 struct adv_info* FUNC_3 (struct hci_dev*,int ) ;
 struct hci_cp_le_set_adv_set_rand_addr* FUNC_4 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1,
                                              struct sk_buff *VAR_2)
{
 __u8 VAR_3 = *((__u8 *) VAR_2->data);
 struct hci_cp_le_set_adv_set_rand_addr *VAR_4;
 struct adv_info *VAR_5;

 if (VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_1);

 if (!VAR_1->cur_adv_instance) {

  FUNC_0(&VAR_1->random_addr, &VAR_4->bdaddr);
 } else {
  VAR_5 = FUNC_3(VAR_1,
           VAR_1->cur_adv_instance);
  if (VAR_5)
   FUNC_0(&VAR_5->random_addr, &VAR_4->bdaddr);
 }

 FUNC_2(VAR_1);
}
