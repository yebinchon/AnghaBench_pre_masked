
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_cp_le_start_enc {int ltk; int ediv; int rand; int handle; } ;
struct hci_conn {int handle; struct hci_dev* hdev; } ;
typedef int cp ;
typedef int __u8 ;
typedef int __le64 ;
typedef int __le16 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,int ,int,struct hci_cp_le_start_enc*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct hci_cp_le_start_enc*,int ,int) ;

void FUNC_5(struct hci_conn *VAR_1, __le16 VAR_2, __le64 VAR_3,
        __u8 VAR_4[16], __u8 VAR_5)
{
 struct hci_dev *VAR_6 = VAR_1->hdev;
 struct hci_cp_le_start_enc VAR_7;

 FUNC_0("hcon %p", VAR_1);

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.handle = FUNC_1(VAR_1->handle);
 VAR_7.rand = VAR_3;
 VAR_7.ediv = VAR_2;
 FUNC_3(VAR_7.ltk, VAR_4, VAR_5);

 FUNC_2(VAR_6, VAR_0, sizeof(VAR_7), &VAR_7);
}
