
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct hci_cp_disconnect {int handle; } ;
struct hci_conn {int dst_type; int type; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct hci_cp_disconnect* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_1, u8 VAR_2)
{
 struct hci_cp_disconnect *VAR_3;
 struct hci_conn *VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 FUNC_2(VAR_1);

 VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_3->handle));
 if (VAR_4)
  FUNC_5(VAR_1, &VAR_4->dst, VAR_4->type,
           VAR_4->dst_type, VAR_2);

 FUNC_3(VAR_1);
}
