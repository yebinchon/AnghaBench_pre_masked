
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_disconn_req {void* scid; void* dcid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {scalar_t__ mode; scalar_t__ state; scalar_t__ scid; scalar_t__ dcid; struct l2cap_conn* conn; } ;
typedef int req ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct l2cap_chan*) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct l2cap_conn*) ;
 int FUNC_5 (struct l2cap_conn*,int ,int ,int,struct l2cap_disconn_req*) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_chan*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct l2cap_chan *VAR_5, int VAR_6)
{
 struct l2cap_conn *VAR_7 = VAR_5->conn;
 struct l2cap_disconn_req VAR_8;

 if (!VAR_7)
  return;

 if (VAR_5->mode == VAR_4 && VAR_5->state == VAR_0) {
  FUNC_2(VAR_5);
  FUNC_1(VAR_5);
  FUNC_0(VAR_5);
 }

 if (VAR_5->scid == VAR_2) {
  FUNC_6(VAR_5, VAR_1);
  return;
 }

 VAR_8.dcid = FUNC_3(VAR_5->dcid);
 VAR_8.scid = FUNC_3(VAR_5->scid);
 FUNC_5(VAR_7, FUNC_4(VAR_7), VAR_3,
         sizeof(VAR_8), &VAR_8);

 FUNC_7(VAR_5, VAR_1, VAR_6);
}
