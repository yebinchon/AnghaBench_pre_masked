
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; int (* sk_odata ) (struct sock*) ;} ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_user_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct sock*,scalar_t__) ;
 int FUNC_1 (char*,struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct svc_sock *VAR_3 = (struct svc_sock *)VAR_2->sk_user_data;

 FUNC_0("svc: socket %p TCP (listen) state change %d\n",
  VAR_2, VAR_2->sk_state);

 if (VAR_3) {

  FUNC_2();
  VAR_3->sk_odata(VAR_2);
 }
 if (VAR_2->sk_state == VAR_0) {
  if (VAR_3) {
   FUNC_3(VAR_1, &VAR_3->sk_xprt.xpt_flags);
   FUNC_5(&VAR_3->sk_xprt);
  } else
   FUNC_1("svc: socket %p: no user data\n", VAR_2);
 }
}
