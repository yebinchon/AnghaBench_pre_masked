
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct inet_connection_sock {int icsk_accept_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 struct inet_connection_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 long FUNC_8 (long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (long) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_6, long VAR_7)
{
 struct inet_connection_sock *VAR_8 = FUNC_2(VAR_6);
 FUNC_0(VAR_5);
 int VAR_9;
 for (;;) {
  FUNC_4(FUNC_10(VAR_6), &VAR_5,
       VAR_2);
  FUNC_5(VAR_6);
  if (FUNC_6(&VAR_8->icsk_accept_queue))
   VAR_7 = FUNC_8(VAR_7);
  FUNC_7();
  FUNC_3(VAR_6);
  VAR_9 = 0;
  if (!FUNC_6(&VAR_8->icsk_accept_queue))
   break;
  VAR_9 = -VAR_1;
  if (VAR_6->sk_state != VAR_3)
   break;
  VAR_9 = FUNC_11(VAR_7);
  if (FUNC_9(VAR_4))
   break;
  VAR_9 = -VAR_0;
  if (!VAR_7)
   break;
 }
 FUNC_1(FUNC_10(VAR_6), &VAR_5);
 return VAR_9;
}
