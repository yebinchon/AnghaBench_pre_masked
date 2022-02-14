
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_create_chan_req {int amp_id; int psm; int scid; } ;
struct l2cap_chan {int ident; int conn; int psm; int scid; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int,struct l2cap_create_chan_req*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_1, u8 VAR_2)
{
 struct l2cap_create_chan_req VAR_3;
 VAR_3.scid = FUNC_0(VAR_1->scid);
 VAR_3.psm = VAR_1->psm;
 VAR_3.amp_id = VAR_2;

 VAR_1->ident = FUNC_1(VAR_1->conn);

 FUNC_2(VAR_1->conn, VAR_1->ident, VAR_0,
         sizeof(VAR_3), &VAR_3);
}
