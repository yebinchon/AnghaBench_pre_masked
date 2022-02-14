
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_dev {scalar_t__ hci_ver; scalar_t__ set_bdaddr; int quirks; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static u32 FUNC_5(struct hci_dev *VAR_19)
{
 u32 VAR_20 = 0;

 VAR_20 |= VAR_14;
 VAR_20 |= VAR_3;
 VAR_20 |= VAR_7;
 VAR_20 |= VAR_6;
 VAR_20 |= VAR_8;

 if (FUNC_0(VAR_19)) {
  if (VAR_19->hci_ver >= VAR_0)
   VAR_20 |= VAR_9;
  VAR_20 |= VAR_4;
  VAR_20 |= VAR_12;

  if (FUNC_3(VAR_19)) {
   VAR_20 |= VAR_17;
   VAR_20 |= VAR_10;
  }

  if (FUNC_2(VAR_19))
   VAR_20 |= VAR_16;
 }

 if (FUNC_1(VAR_19)) {
  VAR_20 |= VAR_11;
  VAR_20 |= VAR_2;
  VAR_20 |= VAR_16;
  VAR_20 |= VAR_15;
  VAR_20 |= VAR_18;
 }

 if (FUNC_4(VAR_1, &VAR_19->quirks) ||
     VAR_19->set_bdaddr)
  VAR_20 |= VAR_5;

 VAR_20 |= VAR_13;

 return VAR_20;
}
