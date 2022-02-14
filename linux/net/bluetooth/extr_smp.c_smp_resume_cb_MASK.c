
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_chan {int security_timer; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_chan {struct l2cap_conn* conn; struct smp_chan* data; } ;
struct hci_conn {scalar_t__ type; int flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct smp_chan*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_2)
{
 struct smp_chan *VAR_3 = VAR_2->data;
 struct l2cap_conn *VAR_4 = VAR_2->conn;
 struct hci_conn *VAR_5 = VAR_4->hcon;

 FUNC_0("chan %p", VAR_2);

 if (VAR_5->type == VAR_0) {
  FUNC_1(VAR_2);
  return;
 }

 if (!VAR_3)
  return;

 if (!FUNC_4(VAR_1, &VAR_5->flags))
  return;

 FUNC_2(&VAR_3->security_timer);

 FUNC_3(VAR_3);
}
