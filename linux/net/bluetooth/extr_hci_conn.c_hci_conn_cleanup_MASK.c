
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int (* notify ) (struct hci_dev*,int ) ;} ;
struct hci_conn {int debugfs; int dst_type; int dst; struct hci_dev* hdev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_dev*,struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*,int *,int ) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;

 if (FUNC_8(VAR_0, &VAR_2->flags))
  FUNC_4(VAR_2->hdev, &VAR_2->dst, VAR_2->dst_type);

 FUNC_1(VAR_2);

 FUNC_3(VAR_3, VAR_2);

 if (VAR_3->notify)
  VAR_3->notify(VAR_3, VAR_1);

 FUNC_2(VAR_2);

 FUNC_0(VAR_2->debugfs);

 FUNC_6(VAR_3);

 FUNC_5(VAR_2);
}
