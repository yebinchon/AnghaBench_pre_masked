
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int xprt; int recv_mutex; int * sock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,size_t) ;
 int FUNC_5 (struct sock_xprt*) ;
 size_t FUNC_6 (struct sock_xprt*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock_xprt *VAR_3)
{
 size_t VAR_4 = 0;
 ssize_t VAR_5 = 0;

 FUNC_2(&VAR_3->recv_mutex);
 if (VAR_3->sock == ((void*)0))
  goto out;
 for (;;) {
  VAR_5 = FUNC_6(VAR_3, VAR_1);
  if (VAR_5 < 0)
   break;
  VAR_4 += VAR_5;
  FUNC_0();
 }
 if (VAR_5 == -VAR_0)
  FUNC_1(VAR_3->sock, VAR_2);
 else
  FUNC_5(VAR_3);
out:
 FUNC_3(&VAR_3->recv_mutex);
 FUNC_4(&VAR_3->xprt, VAR_5, VAR_4);
}
