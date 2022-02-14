
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct l2cap_le_credits {void* credits; void* cid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int imtu; int mps; int ident; scalar_t__ scid; scalar_t__ rx_credits; struct l2cap_conn* conn; } ;
typedef int pkt ;


 int FUNC_0 (char*,struct l2cap_chan*,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct l2cap_conn*) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_le_credits*) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_1)
{
 struct l2cap_conn *VAR_2 = VAR_1->conn;
 struct l2cap_le_credits VAR_3;
 u16 VAR_4;

 VAR_4 = ((VAR_1->imtu / VAR_1->mps) + 1) - VAR_1->rx_credits;

 if (!VAR_4)
  return;

 FUNC_0("chan %p returning %u credits to sender", VAR_1, VAR_4);

 VAR_1->rx_credits += VAR_4;

 VAR_3.cid = FUNC_1(VAR_1->scid);
 VAR_3.credits = FUNC_1(VAR_4);

 VAR_1->ident = FUNC_2(VAR_2);

 FUNC_3(VAR_2, VAR_1->ident, VAR_0, sizeof(VAR_3), &VAR_3);
}
