
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xpt_flags; } ;
struct svc_sock {TYPE_1__ sk_xprt; int (* sk_odata ) (struct sock*) ;} ;
struct sock {scalar_t__ sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct svc_sock*,struct sock*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct svc_sock *VAR_3 = (struct svc_sock *)VAR_2->sk_user_data;

 if (VAR_3) {
  FUNC_0("svc: socket %p(inet %p), busy=%d\n",
   VAR_3, VAR_2,
   FUNC_5(VAR_0, &VAR_3->sk_xprt.xpt_flags));


  FUNC_1();
  VAR_3->sk_odata(VAR_2);
  if (!FUNC_4(VAR_1, &VAR_3->sk_xprt.xpt_flags))
   FUNC_3(&VAR_3->sk_xprt);
 }
}
