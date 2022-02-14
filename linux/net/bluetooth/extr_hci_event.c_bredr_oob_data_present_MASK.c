
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct oob_data {int present; int hash192; int rand192; int hash256; int rand256; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dst; struct hci_dev* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*,int ) ;
 struct oob_data* FUNC_2 (struct hci_dev*,int *,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct hci_conn *VAR_3)
{
 struct hci_dev *VAR_4 = VAR_3->hdev;
 struct oob_data *VAR_5;

 VAR_5 = FUNC_2(VAR_4, &VAR_3->dst, VAR_0);
 if (!VAR_5)
  return 0x00;

 if (FUNC_0(VAR_4)) {






  if (!FUNC_1(VAR_4, VAR_1))
   return VAR_5->present;






  if (!FUNC_3(VAR_5->rand256, VAR_2, 16) ||
      !FUNC_3(VAR_5->hash256, VAR_2, 16))
   return 0x00;

  return 0x02;
 }





 if (!FUNC_3(VAR_5->rand192, VAR_2, 16) ||
     !FUNC_3(VAR_5->hash192, VAR_2, 16))
  return 0x00;

 return 0x01;
}
