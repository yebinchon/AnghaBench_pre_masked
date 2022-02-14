
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hci_dev {scalar_t__ adv_tx_power; } ;
struct adv_info {scalar_t__ tx_power; scalar_t__ adv_data_len; int adv_data; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,int) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 struct adv_info* FUNC_3 (struct hci_dev*,int) ;
 int FUNC_4 (int*,int ,scalar_t__) ;
 int FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static u8 FUNC_6(struct hci_dev *VAR_11, u8 VAR_12, u8 *VAR_13)
{
 struct adv_info *VAR_14 = ((void*)0);
 u8 VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17;


 if (VAR_12) {
  VAR_14 = FUNC_3(VAR_11, VAR_12);
  if (!VAR_14)
   return 0;
 }

 VAR_17 = FUNC_1(VAR_11, VAR_12);




 if (VAR_17 & VAR_7)
  VAR_16 |= VAR_4;

 if (VAR_17 & VAR_8)
  VAR_16 |= VAR_5;

 if (!FUNC_2(VAR_11, VAR_2))
  VAR_16 |= VAR_6;

 if (VAR_16 || (VAR_17 & VAR_9)) {



  if (!VAR_16)
   VAR_16 |= FUNC_5(VAR_11);




  if (VAR_16) {
   VAR_13[0] = 0x02;
   VAR_13[1] = VAR_0;
   VAR_13[2] = VAR_16;

   VAR_15 += 3;
   VAR_13 += 3;
  }
 }

 if (VAR_14) {
  FUNC_4(VAR_13, VAR_14->adv_data,
         VAR_14->adv_data_len);
  VAR_15 += VAR_14->adv_data_len;
  VAR_13 += VAR_14->adv_data_len;
 }

 if (VAR_17 & VAR_10) {
  s8 VAR_18;

  if (FUNC_0(VAR_11)) {
   if (VAR_14)
    VAR_18 = VAR_14->tx_power;
   else
    VAR_18 = VAR_11->adv_tx_power;
  } else {
   VAR_18 = VAR_11->adv_tx_power;
  }


  if (VAR_18 != VAR_3) {
   VAR_13[0] = 0x02;
   VAR_13[1] = VAR_1;
   VAR_13[2] = (u8)VAR_18;

   VAR_15 += 3;
   VAR_13 += 3;
  }
 }

 return VAR_15;
}
