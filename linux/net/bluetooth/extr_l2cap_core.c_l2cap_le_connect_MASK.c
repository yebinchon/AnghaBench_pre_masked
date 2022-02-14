
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_le_conn_req {void* credits; void* mps; void* mtu; void* scid; int psm; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int ident; int rx_credits; int mps; int imtu; int scid; int psm; int flags; struct l2cap_conn* conn; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_le_conn_req*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_2->conn;
 struct l2cap_le_conn_req VAR_4;

 if (FUNC_4(VAR_0, &VAR_2->flags))
  return;

 FUNC_2(VAR_2, 0);

 VAR_4.psm = VAR_2->psm;
 VAR_4.scid = FUNC_0(VAR_2->scid);
 VAR_4.mtu = FUNC_0(VAR_2->imtu);
 VAR_4.mps = FUNC_0(VAR_2->mps);
 VAR_4.credits = FUNC_0(VAR_2->rx_credits);

 VAR_2->ident = FUNC_1(VAR_3);

 FUNC_3(VAR_3, VAR_2->ident, VAR_1,
         sizeof(VAR_4), &VAR_4);
}
