
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct l2cap_move_chan_req {void* dest_amp_id; int icid; } ;
struct l2cap_chan {int conn; int scid; void* ident; } ;
typedef int req ;


 int FUNC_0 (char*,struct l2cap_chan*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int ,int,struct l2cap_move_chan_req*) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_2, u8 VAR_3)
{
 struct l2cap_move_chan_req VAR_4;
 u8 VAR_5;

 FUNC_0("chan %p, dest_amp_id %d", VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_2->conn);
 VAR_2->ident = VAR_5;

 VAR_4.icid = FUNC_2(VAR_2->scid);
 VAR_4.dest_amp_id = VAR_3;

 FUNC_4(VAR_2->conn, VAR_5, VAR_0, sizeof(VAR_4),
         &VAR_4);

 FUNC_1(VAR_2, VAR_1);
}
