
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int random_addr; int le_adv_channel_map; } ;
struct hci_cp_le_set_ext_adv_params {int own_addr_type; int tx_power; int handle; int bdaddr; void* secondary_phy; void* primary_phy; int channel_map; void* evt_properties; int max_interval; int min_interval; } ;
struct hci_cp_le_set_adv_set_rand_addr {int own_addr_type; int tx_power; int handle; int bdaddr; void* secondary_phy; void* primary_phy; int channel_map; void* evt_properties; int max_interval; int min_interval; } ;
struct adv_info {int random_addr; } ;
typedef int cp ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
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
 int FUNC_0 (struct hci_dev*,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*,int) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int) ;
 struct adv_info* FUNC_6 (struct hci_dev*,int) ;
 int FUNC_7 (struct hci_dev*,int,int ,struct adv_info*,int*,int *) ;
 int FUNC_8 (struct hci_request*,int ,int,struct hci_cp_le_set_ext_adv_params*) ;
 int FUNC_9 (struct hci_dev*,int) ;
 int FUNC_10 (int ,int const*,int) ;
 int FUNC_11 (struct hci_cp_le_set_ext_adv_params*,int ,int) ;
 scalar_t__ FUNC_12 (struct hci_dev*) ;

int FUNC_13(struct hci_request *VAR_19, u8 VAR_20)
{
 struct hci_cp_le_set_ext_adv_params VAR_21;
 struct hci_dev *VAR_22 = VAR_19->hdev;
 bool VAR_23;
 u32 VAR_24;
 bdaddr_t VAR_25;
 u8 VAR_26;
 int VAR_27;
 struct adv_info *VAR_28;
 bool VAR_29;

 const u8 VAR_30[3] = { 0x00, 0x08, 0x00 };

 if (VAR_20 > 0) {
  VAR_28 = FUNC_6(VAR_22, VAR_20);
  if (!VAR_28)
   return -VAR_2;
 } else {
  VAR_28 = ((void*)0);
 }

 VAR_24 = FUNC_4(VAR_22, VAR_20);




 VAR_23 = (VAR_24 & VAR_15) ||
        FUNC_12(VAR_22);

 if (!FUNC_9(VAR_22, VAR_23))
  return -VAR_3;





 VAR_27 = FUNC_7(VAR_22, !VAR_23,
         FUNC_0(VAR_22, VAR_24), VAR_28,
         &VAR_26, &VAR_25);
 if (VAR_27 < 0)
  return VAR_27;

 FUNC_11(&VAR_21, 0, sizeof(VAR_21));

 FUNC_10(VAR_21.min_interval, VAR_30, sizeof(VAR_21.min_interval));
 FUNC_10(VAR_21.max_interval, VAR_30, sizeof(VAR_21.max_interval));

 VAR_29 = (VAR_24 & VAR_18);

 if (VAR_23) {
  if (VAR_29)
   VAR_21.evt_properties = FUNC_3(VAR_9);
  else
   VAR_21.evt_properties = FUNC_3(VAR_12);
 } else if (FUNC_5(VAR_22, VAR_20)) {
  if (VAR_29)
   VAR_21.evt_properties = FUNC_3(VAR_11);
  else
   VAR_21.evt_properties = FUNC_3(VAR_13);
 } else {
  if (VAR_29)
   VAR_21.evt_properties = FUNC_3(VAR_10);
  else
   VAR_21.evt_properties = FUNC_3(VAR_14);
 }

 VAR_21.own_addr_type = VAR_26;
 VAR_21.channel_map = VAR_22->le_adv_channel_map;
 VAR_21.tx_power = 127;
 VAR_21.handle = VAR_20;

 if (VAR_24 & VAR_16) {
  VAR_21.primary_phy = VAR_4;
  VAR_21.secondary_phy = VAR_5;
 } else if (VAR_24 & VAR_17) {
  VAR_21.primary_phy = VAR_6;
  VAR_21.secondary_phy = VAR_6;
 } else {

  VAR_21.primary_phy = VAR_4;
  VAR_21.secondary_phy = VAR_4;
 }

 FUNC_8(VAR_19, VAR_8, sizeof(VAR_21), &VAR_21);

 if (VAR_26 == VAR_0 &&
     FUNC_1(&VAR_25, VAR_1)) {
  struct hci_cp_le_set_adv_set_rand_addr VAR_31;


  if (VAR_28) {
   if (!FUNC_1(&VAR_25, &VAR_28->random_addr))
    return 0;
  } else {
   if (!FUNC_1(&VAR_25, &VAR_22->random_addr))
    return 0;
  }

  FUNC_11(&VAR_31, 0, sizeof(VAR_31));

  VAR_31.handle = 0;
  FUNC_2(&VAR_31.bdaddr, &VAR_25);

  FUNC_8(VAR_19,
       VAR_7,
       sizeof(VAR_31), &VAR_31);
 }

 return 0;
}
