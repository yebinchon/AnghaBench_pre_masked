
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_rsp {void* result; void* icid; } ;
struct l2cap_chan {int ident; int conn; int dcid; } ;
typedef int rsp ;


 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,struct l2cap_move_chan_rsp*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_1, u16 VAR_2)
{
 struct l2cap_move_chan_rsp VAR_3;

 FUNC_0("chan %p, result 0x%4.4x", VAR_1, VAR_2);

 VAR_3.icid = FUNC_1(VAR_1->dcid);
 VAR_3.result = FUNC_1(VAR_2);

 FUNC_2(VAR_1->conn, VAR_1->ident, VAR_0,
         sizeof(VAR_3), &VAR_3);
}
