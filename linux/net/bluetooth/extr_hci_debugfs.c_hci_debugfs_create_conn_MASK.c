
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int debugfs; } ;
struct hci_conn {int handle; int debugfs; struct hci_dev* hdev; } ;
typedef int name ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

void FUNC_3(struct hci_conn *VAR_0)
{
 struct hci_dev *VAR_1 = VAR_0->hdev;
 char VAR_2[6];

 if (FUNC_0(VAR_1->debugfs))
  return;

 FUNC_2(VAR_2, sizeof(VAR_2), "%u", VAR_0->handle);
 VAR_0->debugfs = FUNC_1(VAR_2, VAR_1->debugfs);
}
