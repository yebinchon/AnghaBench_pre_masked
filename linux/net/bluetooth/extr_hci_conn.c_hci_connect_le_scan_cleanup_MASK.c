
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_irk {int addr_type; int bdaddr; } ;
struct hci_dev {int pend_le_reports; int pend_le_conns; } ;
struct hci_conn_params {int explicit_connect; int auto_connect; int action; } ;
struct hci_conn {int dst_type; int dst; struct hci_dev* hdev; } ;
typedef int bdaddr_t ;






 int FUNC_0 (struct hci_dev*,int *,int ) ;
 struct smp_irk* FUNC_1 (struct hci_dev*,int *,int ) ;
 struct hci_conn_params* FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hci_conn *VAR_0)
{
 struct hci_conn_params *VAR_1;
 struct hci_dev *VAR_2 = VAR_0->hdev;
 struct smp_irk *VAR_3;
 bdaddr_t *VAR_4;
 u8 VAR_5;

 VAR_4 = &VAR_0->dst;
 VAR_5 = VAR_0->dst_type;


 VAR_3 = FUNC_1(VAR_2, VAR_4, VAR_5);
 if (VAR_3) {
  VAR_4 = &VAR_3->bdaddr;
  VAR_5 = VAR_3->addr_type;
 }

 VAR_1 = FUNC_2(&VAR_2->pend_le_conns, VAR_4,
        VAR_5);
 if (!VAR_1 || !VAR_1->explicit_connect)
  return;






 VAR_1->explicit_connect = 0;

 FUNC_5(&VAR_1->action);

 switch (VAR_1->auto_connect) {
 case 129:
  FUNC_0(VAR_2, VAR_4, VAR_5);

  return;
 case 130:
 case 131:
  FUNC_4(&VAR_1->action, &VAR_2->pend_le_conns);
  break;
 case 128:
  FUNC_4(&VAR_1->action, &VAR_2->pend_le_reports);
  break;
 default:
  break;
 }

 FUNC_3(VAR_2);
}
