
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; } ;
typedef struct l2cap_conn_rsp u8 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int num_conf_req; int conf_state; int ident; scalar_t__ hs_hcon; int scid; int dcid; struct l2cap_conn* conn; } ;
typedef int rsp ;
typedef int buf ;


 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_conn_rsp) ;
 int VAR_0 ;
 struct l2cap_conn_rsp VAR_1 ;
 struct l2cap_conn_rsp VAR_2 ;
 struct l2cap_conn_rsp VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_chan*,struct l2cap_conn_rsp*,int) ;
 int FUNC_3 (struct l2cap_conn*) ;
 int FUNC_4 (struct l2cap_conn*,int ,struct l2cap_conn_rsp,int,struct l2cap_conn_rsp*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct l2cap_chan *VAR_6)
{
 struct l2cap_conn_rsp VAR_7;
 struct l2cap_conn *VAR_8 = VAR_6->conn;
 u8 VAR_9[128];
 u8 VAR_10;

 VAR_7.scid = FUNC_1(VAR_6->dcid);
 VAR_7.dcid = FUNC_1(VAR_6->scid);
 VAR_7.result = FUNC_1(VAR_4);
 VAR_7.status = FUNC_1(VAR_5);

 if (VAR_6->hs_hcon)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_2;

 FUNC_0("chan %p rsp_code %u", VAR_6, VAR_10);

 FUNC_4(VAR_8, VAR_6->ident, VAR_10, sizeof(VAR_7), &VAR_7);

 if (FUNC_5(VAR_0, &VAR_6->conf_state))
  return;

 FUNC_4(VAR_8, FUNC_3(VAR_8), VAR_1,
         FUNC_2(VAR_6, VAR_9, sizeof(VAR_9)), VAR_9);
 VAR_6->num_conf_req++;
}
