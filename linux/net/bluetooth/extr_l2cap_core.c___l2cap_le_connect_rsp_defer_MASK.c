
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_le_conn_rsp {void* result; void* credits; void* mps; void* mtu; void* dcid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int ident; int rx_credits; int mps; int imtu; int scid; struct l2cap_conn* conn; } ;
typedef int rsp ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_conn*,int ,int ,int,struct l2cap_le_conn_rsp*) ;

void FUNC_3(struct l2cap_chan *VAR_2)
{
 struct l2cap_le_conn_rsp VAR_3;
 struct l2cap_conn *VAR_4 = VAR_2->conn;

 FUNC_0("chan %p", VAR_2);

 VAR_3.dcid = FUNC_1(VAR_2->scid);
 VAR_3.mtu = FUNC_1(VAR_2->imtu);
 VAR_3.mps = FUNC_1(VAR_2->mps);
 VAR_3.credits = FUNC_1(VAR_2->rx_credits);
 VAR_3.result = FUNC_1(VAR_0);

 FUNC_2(VAR_4, VAR_2->ident, VAR_1, sizeof(VAR_3),
         &VAR_3);
}
