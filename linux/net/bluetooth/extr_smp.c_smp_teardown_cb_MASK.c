
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int * smp; } ;
struct l2cap_chan {scalar_t__ data; struct l2cap_conn* conn; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_conn*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0, int VAR_1)
{
 struct l2cap_conn *VAR_2 = VAR_0->conn;

 FUNC_0("chan %p", VAR_0);

 if (VAR_0->data)
  FUNC_2(VAR_2);

 VAR_2->smp = ((void*)0);
 FUNC_1(VAR_0);
}
