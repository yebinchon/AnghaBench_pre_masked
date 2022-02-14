
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int num_iac; } ;
struct hci_cp_write_current_iac_lap {int num_iac; int* iac_lap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_write_current_iac_lap*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct hci_request *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_4->hdev;
 struct hci_cp_write_current_iac_lap VAR_6;

 if (!FUNC_0(VAR_5, VAR_0))
  return;

 if (FUNC_0(VAR_5, VAR_1)) {

  VAR_6.num_iac = FUNC_2(VAR_3, VAR_5->num_iac, 2);
  VAR_6.iac_lap[0] = 0x00;
  VAR_6.iac_lap[1] = 0x8b;
  VAR_6.iac_lap[2] = 0x9e;
  VAR_6.iac_lap[3] = 0x33;
  VAR_6.iac_lap[4] = 0x8b;
  VAR_6.iac_lap[5] = 0x9e;
 } else {

  VAR_6.num_iac = 1;
  VAR_6.iac_lap[0] = 0x33;
  VAR_6.iac_lap[1] = 0x8b;
  VAR_6.iac_lap[2] = 0x9e;
 }

 FUNC_1(VAR_4, VAR_2,
      (VAR_6.num_iac * 3) + 1, &VAR_6);
}
