
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int debugfs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,struct hci_dev*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_3(struct hci_dev *VAR_10)
{
 FUNC_0("inquiry_cache", 0444, VAR_10->debugfs, VAR_10,
       &VAR_3);
 FUNC_0("link_keys", 0400, VAR_10->debugfs, VAR_10,
       &VAR_4);
 FUNC_0("dev_class", 0444, VAR_10->debugfs, VAR_10,
       &VAR_1);
 FUNC_0("voice_setting", 0444, VAR_10->debugfs, VAR_10,
       &VAR_9);

 if (FUNC_2(VAR_10)) {
  FUNC_0("ssp_debug_mode", 0444, VAR_10->debugfs,
        VAR_10, &VAR_8);
  FUNC_0("min_encrypt_key_size", 0644, VAR_10->debugfs,
        VAR_10, &VAR_5);
  FUNC_0("auto_accept_delay", 0644, VAR_10->debugfs,
        VAR_10, &VAR_0);
 }

 if (FUNC_1(VAR_10)) {
  FUNC_0("idle_timeout", 0644, VAR_10->debugfs,
        VAR_10, &VAR_2);
  FUNC_0("sniff_min_interval", 0644, VAR_10->debugfs,
        VAR_10, &VAR_7);
  FUNC_0("sniff_max_interval", 0644, VAR_10->debugfs,
        VAR_10, &VAR_6);
 }
}
