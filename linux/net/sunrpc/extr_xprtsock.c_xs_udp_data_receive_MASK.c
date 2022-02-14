
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int recv_mutex; int xprt; struct sock* inet; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sk_buff* FUNC_4 (struct sock*,int ,int,int*) ;
 int FUNC_5 (struct sock_xprt*) ;
 int FUNC_6 (int *,struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sock_xprt *VAR_0)
{
 struct sk_buff *VAR_1;
 struct sock *VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->recv_mutex);
 VAR_2 = VAR_0->inet;
 if (VAR_2 == ((void*)0))
  goto out;
 for (;;) {
  VAR_1 = FUNC_4(VAR_2, 0, 1, &VAR_3);
  if (VAR_1 == ((void*)0))
   break;
  FUNC_6(&VAR_0->xprt, VAR_2, VAR_1);
  FUNC_1(VAR_1);
  FUNC_0();
 }
 FUNC_5(VAR_0);
out:
 FUNC_3(&VAR_0->recv_mutex);
}
