
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct smp_irk {int addr_type; int bdaddr; } ;
struct discovery_state {int last_adv_addr_type; int* last_adv_data; int last_adv_data_len; scalar_t__ last_adv_flags; int last_adv_addr; int last_adv_rssi; } ;
struct hci_dev {scalar_t__ le_scan_type; int pend_le_reports; int irk; struct discovery_state discovery; } ;
struct hci_conn {int le_adv_data_len; int le_adv_data; } ;
typedef int s8 ;
typedef int bdaddr_t ;


 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hci_dev*,char*,...) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int *,int,int,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 struct smp_irk* FUNC_7 (struct hci_dev*,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int ,int*,int) ;
 int FUNC_10 (struct hci_dev*,int *,int ,int,int *,int ,scalar_t__,int*,int,int*,int) ;
 int FUNC_11 (struct hci_dev*,int ,int *) ;
 int FUNC_12 (struct hci_dev*,int *,int,int ,scalar_t__,int*,int) ;

__attribute__((used)) static void FUNC_13(struct hci_dev *VAR_4, u8 VAR_5, bdaddr_t *VAR_6,
          u8 VAR_7, bdaddr_t *VAR_8,
          u8 VAR_9, s8 VAR_10, u8 *VAR_11, u8 VAR_12)
{
 struct discovery_state *VAR_13 = &VAR_4->discovery;
 struct smp_irk *VAR_14;
 struct hci_conn *VAR_15;
 bool VAR_16;
 u32 VAR_17;
 u8 *VAR_18, VAR_19;

 switch (VAR_5) {
 case 131:
 case 132:
 case 129:
 case 130:
 case 128:
  break;
 default:
  FUNC_1(VAR_4, "unknown advertising packet "
           "type: 0x%02x", VAR_5);
  return;
 }







 for (VAR_18 = VAR_11; VAR_18 < VAR_11 + VAR_12 && *VAR_18; VAR_18 += *VAR_18 + 1) {
  if (VAR_18 + 1 + *VAR_18 > VAR_11 + VAR_12)
   break;
 }

 VAR_19 = VAR_18 - VAR_11;


 if (VAR_12 != VAR_19) {
  FUNC_1(VAR_4, "advertising data len corrected");
  VAR_12 = VAR_19;
 }






 if (VAR_8) {



  if (!FUNC_5(VAR_8, VAR_9))
   return;




  if (!FUNC_6(VAR_4, VAR_0))
   return;





  if (!FUNC_11(VAR_4, VAR_4->irk, VAR_8))
   return;
 }


 VAR_14 = FUNC_7(VAR_4, VAR_6, VAR_7);
 if (VAR_14) {
  VAR_6 = &VAR_14->bdaddr;
  VAR_7 = VAR_14->addr_type;
 }






 VAR_15 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_5,
        VAR_8);
 if (VAR_15 && VAR_5 == 131) {



  FUNC_9(VAR_15->le_adv_data, VAR_11, VAR_12);
  VAR_15->le_adv_data_len = VAR_12;
 }





 if (VAR_4->le_scan_type == VAR_2) {
  if (VAR_5 == 132)
   return;

  if (!FUNC_8(&VAR_4->pend_le_reports,
            VAR_6, VAR_7))
   return;

  if (VAR_5 == 130 || VAR_5 == 129)
   VAR_17 = VAR_3;
  else
   VAR_17 = 0;
  FUNC_10(VAR_4, VAR_6, VAR_1, VAR_7, ((void*)0),
      VAR_10, VAR_17, VAR_11, VAR_12, ((void*)0), 0);
  return;
 }
 if (VAR_5 == 130 || VAR_5 == 129 ||
     VAR_5 == 128)
  VAR_17 = VAR_3;
 else
  VAR_17 = 0;





 if (!FUNC_4(VAR_4)) {



  if (VAR_5 == 131 || VAR_5 == 129) {
   FUNC_12(VAR_4, VAR_6, VAR_7,
       VAR_10, VAR_17, VAR_11, VAR_12);
   return;
  }

  FUNC_10(VAR_4, VAR_6, VAR_1, VAR_7, ((void*)0),
      VAR_10, VAR_17, VAR_11, VAR_12, ((void*)0), 0);
  return;
 }


 VAR_16 = (!FUNC_0(VAR_6, &VAR_13->last_adv_addr) &&
   VAR_7 == VAR_13->last_adv_addr_type);





 if (VAR_5 != 128 || !VAR_16) {

  if (!VAR_16)
   FUNC_10(VAR_4, &VAR_13->last_adv_addr, VAR_1,
       VAR_13->last_adv_addr_type, ((void*)0),
       VAR_13->last_adv_rssi, VAR_13->last_adv_flags,
       VAR_13->last_adv_data,
       VAR_13->last_adv_data_len, ((void*)0), 0);




  if (VAR_5 == 131 || VAR_5 == 129) {
   FUNC_12(VAR_4, VAR_6, VAR_7,
       VAR_10, VAR_17, VAR_11, VAR_12);
   return;
  }




  FUNC_3(VAR_4);
  FUNC_10(VAR_4, VAR_6, VAR_1, VAR_7, ((void*)0),
      VAR_10, VAR_17, VAR_11, VAR_12, ((void*)0), 0);
  return;
 }





 FUNC_10(VAR_4, &VAR_13->last_adv_addr, VAR_1,
     VAR_13->last_adv_addr_type, ((void*)0), VAR_10, VAR_13->last_adv_flags,
     VAR_13->last_adv_data, VAR_13->last_adv_data_len, VAR_11, VAR_12);
 FUNC_3(VAR_4);
}
