
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_lingertime; } ;
struct vsock_sock {int peer_shutdown; int close_work_scheduled; int close_work; struct sock sk; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int VAR_8 ;
 int FUNC_4 (struct vsock_sock*,int *) ;
 int FUNC_5 (struct vsock_sock*,int) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static bool FUNC_7(struct vsock_sock *VAR_9)
{
 struct sock *VAR_10 = &VAR_9->sk;

 if (!(VAR_10->sk_state == VAR_5 ||
       VAR_10->sk_state == VAR_4))
  return 1;


 if ((VAR_9->peer_shutdown & VAR_1) == VAR_1) {
  (void)FUNC_4(VAR_9, ((void*)0));
  return 1;
 }

 if ((VAR_10->sk_shutdown & VAR_1) != VAR_1)
  (void)FUNC_5(VAR_9, VAR_1);

 if (FUNC_2(VAR_10, VAR_3) && !(VAR_7->flags & VAR_0))
  FUNC_6(VAR_10, VAR_10->sk_lingertime);

 if (FUNC_2(VAR_10, VAR_2)) {
  return 1;
 }

 FUNC_3(VAR_10);
 FUNC_0(&VAR_9->close_work,
     VAR_8);
 VAR_9->close_work_scheduled = 1;
 FUNC_1(&VAR_9->close_work, VAR_6);
 return 0;
}
