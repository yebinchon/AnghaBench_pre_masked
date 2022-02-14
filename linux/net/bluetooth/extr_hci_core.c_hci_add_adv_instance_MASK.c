
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hci_dev {scalar_t__ adv_instance_cnt; scalar_t__ le_num_of_adv_sets; int name; int adv_instances; } ;
struct adv_info {int pending; int instance; int rpa_expired_cb; int tx_power; scalar_t__ duration; scalar_t__ remaining_time; scalar_t__ timeout; int scan_rsp_data; int adv_data; scalar_t__ scan_rsp_len; scalar_t__ adv_data_len; int flags; int list; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 struct adv_info* FUNC_2 (struct hci_dev*,int) ;
 struct adv_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int*,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(struct hci_dev *VAR_7, u8 VAR_8, u32 VAR_9,
    u16 VAR_10, u8 *VAR_11,
    u16 VAR_12, u8 *VAR_13,
    u16 VAR_14, u16 VAR_15)
{
 struct adv_info *VAR_16;

 VAR_16 = FUNC_2(VAR_7, VAR_8);
 if (VAR_16) {
  FUNC_6(VAR_16->adv_data, 0,
         sizeof(VAR_16->adv_data));
  FUNC_6(VAR_16->scan_rsp_data, 0,
         sizeof(VAR_16->scan_rsp_data));
 } else {
  if (VAR_7->adv_instance_cnt >= VAR_7->le_num_of_adv_sets ||
      VAR_8 < 1 || VAR_8 > VAR_4)
   return -VAR_1;

  VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_2);
  if (!VAR_16)
   return -VAR_0;

  VAR_16->pending = 1;
  VAR_16->instance = VAR_8;
  FUNC_4(&VAR_16->list, &VAR_7->adv_instances);
  VAR_7->adv_instance_cnt++;
 }

 VAR_16->flags = VAR_9;
 VAR_16->adv_data_len = VAR_10;
 VAR_16->scan_rsp_len = VAR_12;

 if (VAR_10)
  FUNC_5(VAR_16->adv_data, VAR_11, VAR_10);

 if (VAR_12)
  FUNC_5(VAR_16->scan_rsp_data,
         VAR_13, VAR_12);

 VAR_16->timeout = VAR_14;
 VAR_16->remaining_time = VAR_14;

 if (VAR_15 == 0)
  VAR_16->duration = VAR_3;
 else
  VAR_16->duration = VAR_15;

 VAR_16->tx_power = VAR_5;

 FUNC_1(&VAR_16->rpa_expired_cb,
     VAR_6);

 FUNC_0("%s for %dMR", VAR_7->name, VAR_8);

 return 0;
}
