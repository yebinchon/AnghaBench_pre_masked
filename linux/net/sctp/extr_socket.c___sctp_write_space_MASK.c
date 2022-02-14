
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_wq {int wait; } ;
struct sock {int sk_shutdown; int sk_wq; } ;
struct TYPE_2__ {struct sock* sk; } ;
struct sctp_association {int wait; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sctp_association*) ;
 int FUNC_5 (struct socket_wq*,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sctp_association *VAR_3)
{
 struct sock *VAR_4 = VAR_3->base.sk;

 if (FUNC_4(VAR_3) <= 0)
  return;

 if (FUNC_6(&VAR_3->wait))
  FUNC_7(&VAR_3->wait);

 if (FUNC_3(VAR_4)) {
  struct socket_wq *VAR_5;

  FUNC_1();
  VAR_5 = FUNC_0(VAR_4->sk_wq);
  if (VAR_5) {
   if (FUNC_6(&VAR_5->wait))
    FUNC_7(&VAR_5->wait);





   if (!(VAR_4->sk_shutdown & VAR_1))
    FUNC_5(VAR_5, VAR_2, VAR_0);
  }
  FUNC_2();
 }
}
