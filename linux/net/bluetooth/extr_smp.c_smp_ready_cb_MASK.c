
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {struct l2cap_chan* smp; struct hci_conn* hcon; } ;
struct l2cap_chan {struct l2cap_conn* conn; } ;
struct hci_conn {scalar_t__ type; int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_2->conn;
 struct hci_conn *VAR_4 = VAR_3->hcon;

 FUNC_0("chan %p", VAR_2);







 VAR_3->smp = VAR_2;

 if (VAR_4->type == VAR_0 && FUNC_2(VAR_1, &VAR_4->flags))
  FUNC_1(VAR_2);
}
