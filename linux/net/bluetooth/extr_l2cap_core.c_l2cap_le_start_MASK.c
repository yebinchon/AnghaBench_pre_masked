
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int hcon; } ;
struct l2cap_chan {scalar_t__ state; int psm; int sec_level; struct l2cap_conn* conn; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_1)
{
 struct l2cap_conn *VAR_2 = VAR_1->conn;

 if (!FUNC_2(VAR_2->hcon, VAR_1->sec_level))
  return;

 if (!VAR_1->psm) {
  FUNC_0(VAR_1);
  return;
 }

 if (VAR_1->state == VAR_0)
  FUNC_1(VAR_1);
}
