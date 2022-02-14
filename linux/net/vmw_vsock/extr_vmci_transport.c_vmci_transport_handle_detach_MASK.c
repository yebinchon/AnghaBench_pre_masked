
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ svm_cid; } ;
struct vsock_sock {TYPE_1__ local_addr; int peer_shutdown; } ;
struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int (* sk_error_report ) (struct sock*) ;int sk_err; } ;
struct TYPE_4__ {int qp_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct vsock_sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_6)
{
 struct vsock_sock *VAR_7;

 VAR_7 = FUNC_5(VAR_6);
 if (!FUNC_3(FUNC_4(VAR_7)->qp_handle)) {
  FUNC_0(VAR_6, VAR_2);




  VAR_7->peer_shutdown = VAR_1;
  if (VAR_7->local_addr.svm_cid == VAR_5 ||
      FUNC_6(VAR_7) <= 0) {
   if (VAR_6->sk_state == VAR_4) {
    VAR_6->sk_state = VAR_3;
    VAR_6->sk_err = VAR_0;
    VAR_6->sk_error_report(VAR_6);
    return;
   }
   VAR_6->sk_state = VAR_3;
  }
  VAR_6->sk_state_change(VAR_6);
 }
}
