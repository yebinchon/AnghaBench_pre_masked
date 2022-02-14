
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct TYPE_2__ {struct sock* parent; int accept_q; } ;


 int FUNC_0 (char*,struct sock*,struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct sock *VAR_1, struct sock *VAR_2, bool VAR_3)
{
 FUNC_0("parent %p, sk %p", VAR_1, VAR_2);

 FUNC_7(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_2);
 else
  FUNC_5(VAR_2, VAR_0);

 FUNC_4(&FUNC_3(VAR_2)->accept_q, &FUNC_3(VAR_1)->accept_q);
 FUNC_3(VAR_2)->parent = VAR_1;

 if (VAR_3)
  FUNC_2(VAR_2);
 else
  FUNC_6(VAR_2);

 VAR_1->sk_ack_backlog++;
}
