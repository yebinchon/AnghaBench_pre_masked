
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_peer_cred; int sk_peer_pid; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, struct sock *VAR_1)
{
 FUNC_3(VAR_0->sk_peer_pid);
 if (VAR_0->sk_peer_cred)
  FUNC_2(VAR_0->sk_peer_cred);
 VAR_0->sk_peer_pid = FUNC_1(VAR_1->sk_peer_pid);
 VAR_0->sk_peer_cred = FUNC_0(VAR_1->sk_peer_cred);
}
