
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {void* le_def_tx_time; void* le_def_tx_len; int name; } ;
struct hci_cp_le_write_def_data_len {int tx_time; int tx_len; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 struct hci_cp_le_write_def_data_len* FUNC_1 (struct hci_dev*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1,
      struct sk_buff *VAR_2)
{
 struct hci_cp_le_write_def_data_len *VAR_3;
 __u8 VAR_4 = *((__u8 *) VAR_2->data);

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_4);

 if (VAR_4)
  return;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 VAR_1->le_def_tx_len = FUNC_2(VAR_3->tx_len);
 VAR_1->le_def_tx_time = FUNC_2(VAR_3->tx_time);
}
