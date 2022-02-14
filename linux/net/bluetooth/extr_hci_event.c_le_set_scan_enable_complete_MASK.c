
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct discovery_state {int state; int last_adv_data_len; int last_adv_data; int last_adv_flags; int last_adv_rssi; int last_adv_addr_type; int last_adv_addr; } ;
struct hci_dev {struct discovery_state discovery; int le_scan_disable; int le_scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct hci_dev*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_dev*,int ) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*,int *,int ,int ,int *,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_13(struct hci_dev *VAR_7, u8 VAR_8)
{
 FUNC_5(VAR_7);

 switch (VAR_8) {
 case 128:
  FUNC_6(VAR_7, VAR_3);
  if (VAR_7->le_scan_type == VAR_6)
   FUNC_2(VAR_7);
  break;

 case 129:




  if (FUNC_3(VAR_7)) {
   struct discovery_state *VAR_9 = &VAR_7->discovery;

   FUNC_12(VAR_7, &VAR_9->last_adv_addr, VAR_5,
       VAR_9->last_adv_addr_type, ((void*)0),
       VAR_9->last_adv_rssi, VAR_9->last_adv_flags,
       VAR_9->last_adv_data,
       VAR_9->last_adv_data_len, ((void*)0), 0);
  }




  FUNC_1(&VAR_7->le_scan_disable);

  FUNC_4(VAR_7, VAR_3);
  if (FUNC_7(VAR_7, VAR_4))
   FUNC_10(VAR_7, VAR_1);
  else if (!FUNC_8(VAR_7, VAR_2) &&
    VAR_7->discovery.state == VAR_0)
   FUNC_11(VAR_7);

  break;

 default:
  FUNC_0(VAR_7, "use of reserved LE_Scan_Enable param %d",
      VAR_8);
  break;
 }

 FUNC_9(VAR_7);
}
