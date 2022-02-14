
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_le_read_max_data_len {int rx_time; int rx_len; int tx_time; int tx_len; scalar_t__ status; } ;
struct hci_dev {void* le_max_rx_time; void* le_max_rx_len; void* le_max_tx_time; void* le_max_tx_len; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0,
     struct sk_buff *VAR_1)
{
 struct hci_rp_le_read_max_data_len *VAR_2 = (void *) VAR_1->data;

 FUNC_0("%s status 0x%2.2x", VAR_0->name, VAR_2->status);

 if (VAR_2->status)
  return;

 VAR_0->le_max_tx_len = FUNC_1(VAR_2->tx_len);
 VAR_0->le_max_tx_time = FUNC_1(VAR_2->tx_time);
 VAR_0->le_max_rx_len = FUNC_1(VAR_2->rx_len);
 VAR_0->le_max_rx_time = FUNC_1(VAR_2->rx_time);
}
