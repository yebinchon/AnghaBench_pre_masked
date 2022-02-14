
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int le_resolv_list; int le_white_list; scalar_t__ ssp_debug_mode; int le_scan_type; scalar_t__ scan_rsp_data_len; int scan_rsp_data; scalar_t__ adv_data_len; int adv_data; void* adv_tx_power; void* inq_tx_power; int flags; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 __u8 VAR_6 = *((__u8 *) VAR_5->data);

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6);

 FUNC_1(VAR_1, &VAR_4->flags);

 if (VAR_6)
  return;


 FUNC_3(VAR_4);

 FUNC_4(VAR_4, VAR_0);

 VAR_4->inq_tx_power = VAR_2;
 VAR_4->adv_tx_power = VAR_2;

 FUNC_5(VAR_4->adv_data, 0, sizeof(VAR_4->adv_data));
 VAR_4->adv_data_len = 0;

 FUNC_5(VAR_4->scan_rsp_data, 0, sizeof(VAR_4->scan_rsp_data));
 VAR_4->scan_rsp_data_len = 0;

 VAR_4->le_scan_type = VAR_3;

 VAR_4->ssp_debug_mode = 0;

 FUNC_2(&VAR_4->le_white_list);
 FUNC_2(&VAR_4->le_resolv_list);
}
