
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn_params {int list; int action; scalar_t__ conn; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hci_conn_params*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hci_conn_params *VAR_0)
{
 if (VAR_0->conn) {
  FUNC_0(VAR_0->conn);
  FUNC_1(VAR_0->conn);
 }

 FUNC_3(&VAR_0->action);
 FUNC_3(&VAR_0->list);
 FUNC_2(VAR_0);
}
