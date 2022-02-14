
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int debugfs; scalar_t__ fw_info; scalar_t__ hw_info; int hw_error_code; int hci_rev; int hci_ver; int manufacturer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,struct hci_dev*,int *) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_6(struct hci_dev *VAR_12)
{
 FUNC_0("features", 0444, VAR_12->debugfs, VAR_12,
       &VAR_5);
 FUNC_1("manufacturer", 0444, VAR_12->debugfs,
      &VAR_12->manufacturer);
 FUNC_2("hci_version", 0444, VAR_12->debugfs, &VAR_12->hci_ver);
 FUNC_1("hci_revision", 0444, VAR_12->debugfs, &VAR_12->hci_rev);
 FUNC_2("hardware_error", 0444, VAR_12->debugfs,
     &VAR_12->hw_error_code);
 FUNC_0("device_id", 0444, VAR_12->debugfs, VAR_12,
       &VAR_3);

 FUNC_0("device_list", 0444, VAR_12->debugfs, VAR_12,
       &VAR_4);
 FUNC_0("blacklist", 0444, VAR_12->debugfs, VAR_12,
       &VAR_0);
 FUNC_0("uuids", 0444, VAR_12->debugfs, VAR_12, &VAR_11);
 FUNC_0("remote_oob", 0400, VAR_12->debugfs, VAR_12,
       &VAR_8);

 FUNC_0("conn_info_min_age", 0644, VAR_12->debugfs, VAR_12,
       &VAR_2);
 FUNC_0("conn_info_max_age", 0644, VAR_12->debugfs, VAR_12,
       &VAR_1);

 if (FUNC_5(VAR_12) || FUNC_3(VAR_12))
  FUNC_0("use_debug_keys", 0444, VAR_12->debugfs,
        VAR_12, &VAR_10);

 if (FUNC_4(VAR_12) || FUNC_3(VAR_12))
  FUNC_0("sc_only_mode", 0444, VAR_12->debugfs,
        VAR_12, &VAR_9);

 if (VAR_12->hw_info)
  FUNC_0("hardware_info", 0444, VAR_12->debugfs,
        VAR_12, &VAR_7);

 if (VAR_12->fw_info)
  FUNC_0("firmware_info", 0444, VAR_12->debugfs,
        VAR_12, &VAR_6);
}
