
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct inquiry_data {int pscan_mode; int ssp_mode; int rssi; int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct hci_dev {int name; } ;
struct extended_inquiry_info {int data; int rssi; int dev_class; int bdaddr; int clock_offset; int pscan_period_mode; int pscan_rep_mode; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int,int ,int *) ;
 size_t FUNC_3 (int ,int) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,struct inquiry_data*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct hci_dev*,int *,int ,int,int ,int ,int ,int ,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_4,
         struct sk_buff *VAR_5)
{
 struct inquiry_data VAR_6;
 struct extended_inquiry_info *VAR_7 = (void *) (VAR_5->data + 1);
 int VAR_8 = *((__u8 *) VAR_5->data);
 size_t VAR_9;

 FUNC_0("%s num_rsp %d", VAR_4->name, VAR_8);

 if (!VAR_8)
  return;

 if (FUNC_5(VAR_4, VAR_3))
  return;

 FUNC_4(VAR_4);

 for (; VAR_8; VAR_8--, VAR_7++) {
  u32 VAR_10;
  bool VAR_11;

  FUNC_1(&VAR_6.bdaddr, &VAR_7->bdaddr);
  VAR_6.pscan_rep_mode = VAR_7->pscan_rep_mode;
  VAR_6.pscan_period_mode = VAR_7->pscan_period_mode;
  VAR_6.pscan_mode = 0x00;
  FUNC_8(VAR_6.dev_class, VAR_7->dev_class, 3);
  VAR_6.clock_offset = VAR_7->clock_offset;
  VAR_6.rssi = VAR_7->rssi;
  VAR_6.ssp_mode = 0x01;

  if (FUNC_5(VAR_4, VAR_2))
   VAR_11 = FUNC_2(VAR_7->data,
        sizeof(VAR_7->data),
        VAR_1, ((void*)0));
  else
   VAR_11 = 1;

  VAR_10 = FUNC_7(VAR_4, &VAR_6, VAR_11);

  VAR_9 = FUNC_3(VAR_7->data, sizeof(VAR_7->data));

  FUNC_9(VAR_4, &VAR_7->bdaddr, VAR_0, 0x00,
      VAR_7->dev_class, VAR_7->rssi,
      VAR_10, VAR_7->data, VAR_9, ((void*)0), 0);
 }

 FUNC_6(VAR_4);
}
