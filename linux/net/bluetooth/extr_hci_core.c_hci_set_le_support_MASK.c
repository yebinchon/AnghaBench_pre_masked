
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_write_le_host_supported {int le; int simul; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_write_le_host_supported*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_cp_write_le_host_supported*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hci_request *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;
 struct hci_cp_write_le_host_supported VAR_4;


 if (!FUNC_2(VAR_3))
  return;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));

 if (FUNC_0(VAR_3, VAR_0)) {
  VAR_4.le = 0x01;
  VAR_4.simul = 0x00;
 }

 if (VAR_4.le != FUNC_3(VAR_3))
  FUNC_1(VAR_2, VAR_1, sizeof(VAR_4),
       &VAR_4);
}
