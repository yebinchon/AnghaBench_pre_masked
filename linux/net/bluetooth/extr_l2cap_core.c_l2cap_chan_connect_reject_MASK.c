
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_conn_rsp {void* status; void* result; void* dcid; void* scid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int ident; int scid; int dcid; int flags; struct l2cap_conn* conn; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct l2cap_conn*,int ,int ,int,struct l2cap_conn_rsp*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct l2cap_chan *VAR_6)
{
 struct l2cap_conn *VAR_7 = VAR_6->conn;
 struct l2cap_conn_rsp VAR_8;
 u16 VAR_9;

 if (FUNC_3(VAR_1, &VAR_6->flags))
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_3;

 FUNC_2(VAR_6, VAR_0);

 VAR_8.scid = FUNC_0(VAR_6->dcid);
 VAR_8.dcid = FUNC_0(VAR_6->scid);
 VAR_8.result = FUNC_0(VAR_9);
 VAR_8.status = FUNC_0(VAR_5);

 FUNC_1(VAR_7, VAR_6->ident, VAR_2, sizeof(VAR_8), &VAR_8);
}
