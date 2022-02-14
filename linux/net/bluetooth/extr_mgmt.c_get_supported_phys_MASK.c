
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {int** features; int* le_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 scalar_t__ FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static u32 FUNC_6(struct hci_dev *VAR_19)
{
 u32 VAR_20 = 0;

 if (FUNC_0(VAR_19)) {
  VAR_20 |= VAR_4;

  if (VAR_19->features[0][0] & VAR_2)
   VAR_20 |= VAR_5;

  if (VAR_19->features[0][0] & VAR_3)
   VAR_20 |= VAR_6;

  if (FUNC_1(VAR_19)) {
   VAR_20 |= VAR_7;

   if (FUNC_3(VAR_19))
    VAR_20 |= VAR_8;

   if (FUNC_4(VAR_19))
    VAR_20 |= VAR_9;

   if (FUNC_2(VAR_19)) {
    VAR_20 |= VAR_10;

    if (FUNC_3(VAR_19))
     VAR_20 |= VAR_11;

    if (FUNC_4(VAR_19))
     VAR_20 |= VAR_12;
   }
  }
 }

 if (FUNC_5(VAR_19)) {
  VAR_20 |= VAR_14;
  VAR_20 |= VAR_13;

  if (VAR_19->le_features[1] & VAR_0) {
   VAR_20 |= VAR_16;
   VAR_20 |= VAR_15;
  }

  if (VAR_19->le_features[1] & VAR_1) {
   VAR_20 |= VAR_18;
   VAR_20 |= VAR_17;
  }
 }

 return VAR_20;
}
