
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int cur_adv_instance; int adv_instance_cnt; scalar_t__ adv_instance_timeout; int adv_instance_expire; int name; } ;
struct adv_info {int list; int rpa_expired_cb; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adv_info* FUNC_3 (struct hci_dev*,int) ;
 int FUNC_4 (struct adv_info*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct hci_dev *VAR_1, u8 VAR_2)
{
 struct adv_info *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0("%s removing %dMR", VAR_1->name, VAR_2);

 if (VAR_1->cur_adv_instance == VAR_2) {
  if (VAR_1->adv_instance_timeout) {
   FUNC_1(&VAR_1->adv_instance_expire);
   VAR_1->adv_instance_timeout = 0;
  }
  VAR_1->cur_adv_instance = 0x00;
 }

 FUNC_2(&VAR_3->rpa_expired_cb);

 FUNC_5(&VAR_3->list);
 FUNC_4(VAR_3);

 VAR_1->adv_instance_cnt--;

 return 0;
}
