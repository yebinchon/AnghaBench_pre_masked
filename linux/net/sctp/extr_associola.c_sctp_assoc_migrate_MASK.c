
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct sctp_sock {int ep; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {TYPE_1__ base; int ep; int asocs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct sctp_association*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sctp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct sctp_association *VAR_1, struct sock *VAR_2)
{
 struct sctp_sock *VAR_3 = FUNC_4(VAR_2);
 struct sock *VAR_4 = VAR_1->base.sk;




 FUNC_0(&VAR_1->asocs);


 if (FUNC_5(VAR_4, VAR_0))
  VAR_4->sk_ack_backlog--;


 FUNC_3(VAR_1->ep);
 FUNC_7(VAR_1->base.sk);


 VAR_1->ep = VAR_3->ep;
 FUNC_2(VAR_1->ep);


 VAR_1->base.sk = VAR_2;
 FUNC_6(VAR_1->base.sk);


 FUNC_1(VAR_3->ep, VAR_1);
}
