
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int close_work_scheduled; int close_work; int peer_shutdown; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct sock* FUNC_1 (struct vsock_sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct vsock_sock*) ;
 scalar_t__ FUNC_6 (struct vsock_sock*) ;

__attribute__((used)) static void FUNC_7(struct vsock_sock *VAR_3,
       bool VAR_4)
{
 struct sock *VAR_5 = FUNC_1(VAR_3);

 FUNC_3(VAR_5, VAR_1);
 VAR_3->peer_shutdown = VAR_0;
 if (FUNC_6(VAR_3) <= 0)
  VAR_5->sk_state = VAR_2;
 VAR_5->sk_state_change(VAR_5);
 if (VAR_3->close_work_scheduled &&
     (!VAR_4 || FUNC_0(&VAR_3->close_work))) {
  VAR_3->close_work_scheduled = 0;
  FUNC_5(VAR_3);


  FUNC_2(VAR_5);
 }
}
