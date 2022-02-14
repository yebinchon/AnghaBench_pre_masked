
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {TYPE_3__* sk; } ;
struct rfcomm_session {scalar_t__ mtu; struct socket* sock; } ;
struct TYPE_9__ {int accept_q; } ;
struct TYPE_8__ {int sk_state_change; int sk_data_ready; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_6__ {int imtu; int omtu; } ;


 int FUNC_0 (char*,struct rfcomm_session*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct socket*,struct socket**,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 () ;
 struct rfcomm_session* FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*) ;

__attribute__((used)) static void FUNC_9(struct rfcomm_session *VAR_4)
{
 struct socket *VAR_5 = VAR_4->sock, *VAR_6;
 int VAR_7;



 if (FUNC_4(&FUNC_1(VAR_5->sk)->accept_q))
  return;

 FUNC_0("session %p", VAR_4);

 VAR_7 = FUNC_2(VAR_5, &VAR_6, VAR_1);
 if (VAR_7 < 0)
  return;


 VAR_6->sk->sk_data_ready = VAR_2;
 VAR_6->sk->sk_state_change = VAR_3;

 VAR_4 = FUNC_7(VAR_6, VAR_0);
 if (VAR_4) {


  VAR_4->mtu = FUNC_5(FUNC_3(VAR_6->sk)->chan->omtu,
    FUNC_3(VAR_6->sk)->chan->imtu) - 5;

  FUNC_6();
 } else
  FUNC_8(VAR_6);
}
