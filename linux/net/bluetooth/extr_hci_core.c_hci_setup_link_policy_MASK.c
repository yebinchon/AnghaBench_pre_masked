
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_write_def_link_policy {int policy; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_write_def_link_policy*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_request *VAR_5)
{
 struct hci_dev *VAR_6 = VAR_5->hdev;
 struct hci_cp_write_def_link_policy VAR_7;
 u16 VAR_8 = 0;

 if (FUNC_4(VAR_6))
  VAR_8 |= VAR_2;
 if (FUNC_2(VAR_6))
  VAR_8 |= VAR_0;
 if (FUNC_5(VAR_6))
  VAR_8 |= VAR_3;
 if (FUNC_3(VAR_6))
  VAR_8 |= VAR_1;

 VAR_7.policy = FUNC_0(VAR_8);
 FUNC_1(VAR_5, VAR_4, sizeof(VAR_7), &VAR_7);
}
