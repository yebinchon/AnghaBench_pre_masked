
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct inquiry_info_with_rssi_and_pscan_mode {int pscan_mode; int rssi; int dev_class; int bdaddr; int clock_offset; int pscan_period_mode; int pscan_rep_mode; } ;
struct inquiry_info_with_rssi {int rssi; int dev_class; int bdaddr; int clock_offset; int pscan_period_mode; int pscan_rep_mode; } ;
struct inquiry_data {int pscan_mode; int ssp_mode; int rssi; int clock_offset; int dev_class; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct hci_dev {int name; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct inquiry_data*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct hci_dev*,int *,int ,int,int ,int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_2,
          struct sk_buff *VAR_3)
{
 struct inquiry_data VAR_4;
 int VAR_5 = *((__u8 *) VAR_3->data);

 FUNC_0("%s num_rsp %d", VAR_2->name, VAR_5);

 if (!VAR_5)
  return;

 if (FUNC_3(VAR_2, VAR_1))
  return;

 FUNC_2(VAR_2);

 if ((VAR_3->len - 1) / VAR_5 != sizeof(struct inquiry_info_with_rssi)) {
  struct inquiry_info_with_rssi_and_pscan_mode *VAR_6;
  VAR_6 = (void *) (VAR_3->data + 1);

  for (; VAR_5; VAR_5--, VAR_6++) {
   u32 VAR_7;

   FUNC_1(&VAR_4.bdaddr, &VAR_6->bdaddr);
   VAR_4.pscan_rep_mode = VAR_6->pscan_rep_mode;
   VAR_4.pscan_period_mode = VAR_6->pscan_period_mode;
   VAR_4.pscan_mode = VAR_6->pscan_mode;
   FUNC_6(VAR_4.dev_class, VAR_6->dev_class, 3);
   VAR_4.clock_offset = VAR_6->clock_offset;
   VAR_4.rssi = VAR_6->rssi;
   VAR_4.ssp_mode = 0x00;

   VAR_7 = FUNC_5(VAR_2, &VAR_4, 0);

   FUNC_7(VAR_2, &VAR_6->bdaddr, VAR_0, 0x00,
       VAR_6->dev_class, VAR_6->rssi,
       VAR_7, ((void*)0), 0, ((void*)0), 0);
  }
 } else {
  struct inquiry_info_with_rssi *VAR_8 = (void *) (VAR_3->data + 1);

  for (; VAR_5; VAR_5--, VAR_8++) {
   u32 VAR_9;

   FUNC_1(&VAR_4.bdaddr, &VAR_8->bdaddr);
   VAR_4.pscan_rep_mode = VAR_8->pscan_rep_mode;
   VAR_4.pscan_period_mode = VAR_8->pscan_period_mode;
   VAR_4.pscan_mode = 0x00;
   FUNC_6(VAR_4.dev_class, VAR_8->dev_class, 3);
   VAR_4.clock_offset = VAR_8->clock_offset;
   VAR_4.rssi = VAR_8->rssi;
   VAR_4.ssp_mode = 0x00;

   VAR_9 = FUNC_5(VAR_2, &VAR_4, 0);

   FUNC_7(VAR_2, &VAR_8->bdaddr, VAR_0, 0x00,
       VAR_8->dev_class, VAR_8->rssi,
       VAR_9, ((void*)0), 0, ((void*)0), 0);
  }
 }

 FUNC_4(VAR_2);
}
