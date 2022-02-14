
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_retransmits; int icsk_rto; int icsk_backoff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int,int ) ;
 int FUNC_6 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_5)
{
 struct inet_connection_sock *VAR_6 = FUNC_4(VAR_5);





 if (FUNC_3(VAR_5))
  return;





 if (VAR_6->icsk_retransmits == 0)
  FUNC_0(VAR_0);

 if (FUNC_2(VAR_5) != 0) {




  if (--VAR_6->icsk_retransmits == 0)
   VAR_6->icsk_retransmits = 1;
  FUNC_5(VAR_5, VAR_2,
       FUNC_6(VAR_6->icsk_rto,
           VAR_3),
       VAR_1);
  return;
 }

 VAR_6->icsk_backoff++;

 VAR_6->icsk_rto = FUNC_6(VAR_6->icsk_rto << 1, VAR_1);
 FUNC_5(VAR_5, VAR_2, VAR_6->icsk_rto,
      VAR_1);
 if (VAR_6->icsk_retransmits > VAR_4)
  FUNC_1(VAR_5);
}
