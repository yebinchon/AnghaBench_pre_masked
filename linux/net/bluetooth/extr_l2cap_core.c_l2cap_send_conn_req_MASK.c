
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn_req {int psm; int scid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int ident; int conf_state; int psm; int scid; struct l2cap_conn* conn; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*) ;
 int FUNC_2 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_req*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct l2cap_chan *VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_2->conn;
 struct l2cap_conn_req VAR_4;

 VAR_4.scid = FUNC_0(VAR_2->scid);
 VAR_4.psm = VAR_2->psm;

 VAR_2->ident = FUNC_1(VAR_3);

 FUNC_3(VAR_0, &VAR_2->conf_state);

 FUNC_2(VAR_3, VAR_2->ident, VAR_1, sizeof(VAR_4), &VAR_4);
}
