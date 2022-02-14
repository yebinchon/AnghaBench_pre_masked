
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int debugfs; int discov_interleaved_timeout; int le_resolv_list_size; int le_white_list_size; int bdaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,int ,struct hci_dev*,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void FUNC_4(struct hci_dev *VAR_20)
{
 FUNC_1("identity", 0400, VAR_20->debugfs, VAR_20,
       &VAR_9);
 FUNC_1("rpa_timeout", 0644, VAR_20->debugfs, VAR_20,
       &VAR_16);
 FUNC_1("random_address", 0444, VAR_20->debugfs, VAR_20,
       &VAR_14);
 FUNC_1("static_address", 0444, VAR_20->debugfs, VAR_20,
       &VAR_17);





 if (FUNC_0(&VAR_20->bdaddr, VAR_0))
  FUNC_1("force_static_address", 0644,
        VAR_20->debugfs, VAR_20,
        &VAR_8);

 FUNC_3("white_list_size", 0444, VAR_20->debugfs,
     &VAR_20->le_white_list_size);
 FUNC_1("white_list", 0444, VAR_20->debugfs, VAR_20,
       &VAR_19);
 FUNC_3("resolv_list_size", 0444, VAR_20->debugfs,
     &VAR_20->le_resolv_list_size);
 FUNC_1("resolv_list", 0444, VAR_20->debugfs, VAR_20,
       &VAR_15);
 FUNC_1("identity_resolving_keys", 0400, VAR_20->debugfs,
       VAR_20, &VAR_10);
 FUNC_1("long_term_keys", 0400, VAR_20->debugfs, VAR_20,
       &VAR_11);
 FUNC_1("conn_min_interval", 0644, VAR_20->debugfs, VAR_20,
       &VAR_7);
 FUNC_1("conn_max_interval", 0644, VAR_20->debugfs, VAR_20,
       &VAR_6);
 FUNC_1("conn_latency", 0644, VAR_20->debugfs, VAR_20,
       &VAR_5);
 FUNC_1("supervision_timeout", 0644, VAR_20->debugfs, VAR_20,
       &VAR_18);
 FUNC_1("adv_channel_map", 0644, VAR_20->debugfs, VAR_20,
       &VAR_1);
 FUNC_1("adv_min_interval", 0644, VAR_20->debugfs, VAR_20,
       &VAR_3);
 FUNC_1("adv_max_interval", 0644, VAR_20->debugfs, VAR_20,
       &VAR_2);
 FUNC_2("discov_interleaved_timeout", 0644, VAR_20->debugfs,
      &VAR_20->discov_interleaved_timeout);
 FUNC_1("auth_payload_timeout", 0644, VAR_20->debugfs, VAR_20,
       &VAR_4);

 FUNC_1("quirk_strict_duplicate_filter", 0644,
       VAR_20->debugfs, VAR_20,
       &VAR_13);
 FUNC_1("quirk_simultaneous_discovery", 0644,
       VAR_20->debugfs, VAR_20,
       &VAR_12);
}
