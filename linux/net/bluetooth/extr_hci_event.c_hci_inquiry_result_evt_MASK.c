
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct inquiry_info {int dev_class; int bdaddr; int clock_offset; int pscan_mode; int pscan_period_mode; int pscan_rep_mode; } ;
struct inquiry_data {int ssp_mode; int rssi; int clock_offset; int dev_class; int pscan_mode; int pscan_period_mode; int pscan_rep_mode; int bdaddr; } ;
struct hci_dev {int name; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct inquiry_data*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct hci_dev*,int *,int ,int,int ,int ,int ,int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct inquiry_data VAR_5;
 struct inquiry_info *VAR_6 = (void *) (VAR_4->data + 1);
 int VAR_7 = *((__u8 *) VAR_4->data);

 FUNC_0("%s num_rsp %d", VAR_3->name, VAR_7);

 if (!VAR_7)
  return;

 if (FUNC_3(VAR_3, VAR_1))
  return;

 FUNC_2(VAR_3);

 for (; VAR_7; VAR_7--, VAR_6++) {
  u32 VAR_8;

  FUNC_1(&VAR_5.bdaddr, &VAR_6->bdaddr);
  VAR_5.pscan_rep_mode = VAR_6->pscan_rep_mode;
  VAR_5.pscan_period_mode = VAR_6->pscan_period_mode;
  VAR_5.pscan_mode = VAR_6->pscan_mode;
  FUNC_6(VAR_5.dev_class, VAR_6->dev_class, 3);
  VAR_5.clock_offset = VAR_6->clock_offset;
  VAR_5.rssi = VAR_2;
  VAR_5.ssp_mode = 0x00;

  VAR_8 = FUNC_5(VAR_3, &VAR_5, 0);

  FUNC_7(VAR_3, &VAR_6->bdaddr, VAR_0, 0x00,
      VAR_6->dev_class, VAR_2,
      VAR_8, ((void*)0), 0, ((void*)0), 0);
 }

 FUNC_4(VAR_3);
}
