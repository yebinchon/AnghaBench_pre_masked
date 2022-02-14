
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct hidp_session {TYPE_2__* ctrl_sock; TYPE_1__* intr_sock; } ;
struct TYPE_6__ {void* sk_err; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;
struct TYPE_4__ {TYPE_3__* sk; } ;


 void* VAR_0 ;
 struct hidp_session* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct hidp_session*) ;
 struct hidp_session* VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct hidp_session *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 VAR_4->intr_sock->sk->sk_err = VAR_0;
 VAR_4->ctrl_sock->sk->sk_err = VAR_0;
 FUNC_3(FUNC_2(VAR_4->intr_sock->sk));
 FUNC_3(FUNC_2(VAR_4->ctrl_sock->sk));

 FUNC_1(VAR_4);
}
