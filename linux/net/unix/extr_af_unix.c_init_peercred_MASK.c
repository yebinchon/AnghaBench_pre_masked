
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_peer_cred; int sk_peer_pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 FUNC_3(VAR_1->sk_peer_pid);
 if (VAR_1->sk_peer_cred)
  FUNC_2(VAR_1->sk_peer_cred);
 VAR_1->sk_peer_pid = FUNC_1(FUNC_4(VAR_0));
 VAR_1->sk_peer_cred = FUNC_0();
}
