
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ adv_instance_timeout; int adv_instance_expire; int le_scan_restart; int le_scan_disable; int discov_off; int discoverable_update; int connectable_update; int scan_update; int bg_scan_update; int discov_update; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_dev*,int ) ;

void FUNC_3(struct hci_dev *VAR_1)
{
 FUNC_2(VAR_1, VAR_0);

 FUNC_1(&VAR_1->discov_update);
 FUNC_1(&VAR_1->bg_scan_update);
 FUNC_1(&VAR_1->scan_update);
 FUNC_1(&VAR_1->connectable_update);
 FUNC_1(&VAR_1->discoverable_update);
 FUNC_0(&VAR_1->discov_off);
 FUNC_0(&VAR_1->le_scan_disable);
 FUNC_0(&VAR_1->le_scan_restart);

 if (VAR_1->adv_instance_timeout) {
  FUNC_0(&VAR_1->adv_instance_expire);
  VAR_1->adv_instance_timeout = 0;
 }
}
