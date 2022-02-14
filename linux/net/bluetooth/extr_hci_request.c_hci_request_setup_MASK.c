
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int adv_instance_expire; int le_scan_restart; int le_scan_disable; int discov_off; int discoverable_update; int connectable_update; int scan_update; int bg_scan_update; int discov_update; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_2(struct hci_dev *VAR_9)
{
 FUNC_1(&VAR_9->discov_update, VAR_4);
 FUNC_1(&VAR_9->bg_scan_update, VAR_1);
 FUNC_1(&VAR_9->scan_update, VAR_8);
 FUNC_1(&VAR_9->connectable_update, VAR_2);
 FUNC_1(&VAR_9->discoverable_update, VAR_5);
 FUNC_0(&VAR_9->discov_off, VAR_3);
 FUNC_0(&VAR_9->le_scan_disable, VAR_6);
 FUNC_0(&VAR_9->le_scan_restart, VAR_7);
 FUNC_0(&VAR_9->adv_instance_expire, VAR_0);
}
