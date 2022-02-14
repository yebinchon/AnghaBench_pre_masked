
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int pend_le_conns; } ;
struct hci_conn_params {scalar_t__ explicit_connect; int * conn; } ;
struct hci_conn {int dst_type; int type; int dst; int state; struct hci_dev* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_conn*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hci_conn*,int ) ;
 struct hci_conn_params* FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*,int *,int ,int ,int ) ;

void FUNC_8(struct hci_conn *VAR_2, u8 VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;
 struct hci_conn_params *VAR_5;

 VAR_5 = FUNC_4(&VAR_4->pend_le_conns, &VAR_2->dst,
        VAR_2->dst_type);
 if (VAR_5 && VAR_5->conn) {
  FUNC_1(VAR_5->conn);
  FUNC_2(VAR_5->conn);
  VAR_5->conn = ((void*)0);
 }

 VAR_2->state = VAR_0;







 if (VAR_3 != VAR_1 ||
     (VAR_5 && VAR_5->explicit_connect))
  FUNC_7(VAR_4, &VAR_2->dst, VAR_2->type,
        VAR_2->dst_type, VAR_3);

 FUNC_3(VAR_2, VAR_3);

 FUNC_0(VAR_2);




 FUNC_6(VAR_4);




 FUNC_5(VAR_4);
}
