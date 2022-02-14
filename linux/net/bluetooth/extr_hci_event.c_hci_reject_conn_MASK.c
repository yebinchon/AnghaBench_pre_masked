
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_cp_reject_conn_req {int reason; int bdaddr; } ;
typedef int cp ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hci_dev*,int ,int,struct hci_cp_reject_conn_req*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_2, bdaddr_t *VAR_3)
{
 struct hci_cp_reject_conn_req VAR_4;

 FUNC_0(&VAR_4.bdaddr, VAR_3);
 VAR_4.reason = VAR_0;
 FUNC_1(VAR_2, VAR_1, sizeof(VAR_4), &VAR_4);
}
