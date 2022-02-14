
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int num_socks; int rcu; struct sock** socks; scalar_t__ reuseport_id; } ;
struct sock {int sk_reuseport_cb; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 struct sock_reuseport* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sock *VAR_2)
{
 struct sock_reuseport *VAR_3;
 int VAR_4;

 FUNC_5(&VAR_1);
 VAR_3 = FUNC_4(VAR_2->sk_reuseport_cb,
       FUNC_2(&VAR_1));





 if (VAR_3->reuseport_id)
  FUNC_0(VAR_2);

 FUNC_3(VAR_2->sk_reuseport_cb, ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_3->num_socks; VAR_4++) {
  if (VAR_3->socks[VAR_4] == VAR_2) {
   VAR_3->socks[VAR_4] = VAR_3->socks[VAR_3->num_socks - 1];
   VAR_3->num_socks--;
   if (VAR_3->num_socks == 0)
    FUNC_1(&VAR_3->rcu, VAR_0);
   break;
  }
 }
 FUNC_6(&VAR_1);
}
