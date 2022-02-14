
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {scalar_t__ adv_tx_power; int* le_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;

__attribute__((used)) static u32 FUNC_1(struct hci_dev *VAR_13)
{
 u32 VAR_14 = 0;

 VAR_14 |= VAR_4;
 VAR_14 |= VAR_5;
 VAR_14 |= VAR_6;
 VAR_14 |= VAR_8;
 VAR_14 |= VAR_3;
 VAR_14 |= VAR_7;




 if ((VAR_13->adv_tx_power != VAR_2) ||
     FUNC_0(VAR_13))
  VAR_14 |= VAR_12;

 if (FUNC_0(VAR_13)) {
  VAR_14 |= VAR_9;

  if (VAR_13->le_features[1] & VAR_0)
   VAR_14 |= VAR_10;

  if (VAR_13->le_features[1] & VAR_1)
   VAR_14 |= VAR_11;
 }

 return VAR_14;
}
