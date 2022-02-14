
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct TYPE_4__ {TYPE_1__* parent; int accept_q; } ;
struct TYPE_3__ {int sk_ack_backlog; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0)
{
 FUNC_0("sk %p state %d", VAR_0, VAR_0->sk_state);

 FUNC_2(&FUNC_1(VAR_0)->accept_q);
 FUNC_1(VAR_0)->parent->sk_ack_backlog--;
 FUNC_1(VAR_0)->parent = ((void*)0);
 FUNC_3(VAR_0);
}
