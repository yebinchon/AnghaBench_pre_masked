
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_le_conn_rsp {void* result; void* credits; void* mps; void* mtu; void* dcid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int ident; int rx_credits; int mps; int imtu; int scid; int flags; struct l2cap_conn* conn; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*,int ,int ,int,struct l2cap_le_conn_rsp*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_5)
{
 struct l2cap_conn *VAR_6 = VAR_5->conn;
 struct l2cap_le_conn_rsp VAR_7;
 u16 VAR_8;

 if (FUNC_3(VAR_1, &VAR_5->flags))
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;

 FUNC_2(VAR_5, VAR_0);

 VAR_7.dcid = FUNC_0(VAR_5->scid);
 VAR_7.mtu = FUNC_0(VAR_5->imtu);
 VAR_7.mps = FUNC_0(VAR_5->mps);
 VAR_7.credits = FUNC_0(VAR_5->rx_credits);
 VAR_7.result = FUNC_0(VAR_8);

 FUNC_1(VAR_6, VAR_5->ident, VAR_4, sizeof(VAR_7),
         &VAR_7);
}
