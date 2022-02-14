
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_cfm {void* result; void* icid; } ;
struct l2cap_chan {int ident; int conn; int scid; } ;
typedef int cfm ;


 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int,struct l2cap_move_chan_cfm*) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_2, u16 VAR_3)
{
 struct l2cap_move_chan_cfm VAR_4;

 FUNC_0("chan %p, result 0x%4.4x", VAR_2, VAR_3);

 VAR_2->ident = FUNC_3(VAR_2->conn);

 VAR_4.icid = FUNC_2(VAR_2->scid);
 VAR_4.result = FUNC_2(VAR_3);

 FUNC_4(VAR_2->conn, VAR_2->ident, VAR_0,
         sizeof(VAR_4), &VAR_4);

 FUNC_1(VAR_2, VAR_1);
}
