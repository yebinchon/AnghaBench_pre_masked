
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rfcomm_dlc {int v24_sig; int dlci; TYPE_3__* session; scalar_t__ role_switch; int (* state_change ) (struct rfcomm_dlc*,int ) ;int state; } ;
struct l2cap_conn {int hcon; } ;
struct TYPE_9__ {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__* sock; } ;
struct TYPE_7__ {struct sock* sk; } ;
struct TYPE_6__ {struct l2cap_conn* conn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rfcomm_dlc*) ;
 int FUNC_1 (int ,int) ;
 TYPE_5__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct rfcomm_dlc*) ;
 int FUNC_4 (struct rfcomm_dlc*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (TYPE_3__*,int,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (struct rfcomm_dlc*,int ) ;

void FUNC_9(struct rfcomm_dlc *VAR_1)
{
 struct sock *VAR_2 = VAR_1->session->sock->sk;
 struct l2cap_conn *VAR_3 = FUNC_2(VAR_2)->chan->conn;

 FUNC_0("dlc %p", VAR_1);

 FUNC_7(VAR_1->session, VAR_1->dlci);

 FUNC_3(VAR_1);

 FUNC_4(VAR_1);
 VAR_1->state = VAR_0;
 VAR_1->state_change(VAR_1, 0);
 FUNC_5(VAR_1);

 if (VAR_1->role_switch)
  FUNC_1(VAR_3->hcon, 0x00);

 FUNC_6(VAR_1->session, 1, VAR_1->dlci, VAR_1->v24_sig);
}
