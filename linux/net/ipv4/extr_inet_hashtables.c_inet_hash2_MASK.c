
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; scalar_t__ sk_reuseport; } ;
struct inet_listen_hashbucket {int lock; int count; int head; } ;
struct inet_hashinfo {int lhash2; } ;
struct TYPE_2__ {int icsk_listen_portaddr_node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 struct inet_listen_hashbucket* FUNC_3 (struct inet_hashinfo*,struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inet_hashinfo *VAR_1, struct sock *VAR_2)
{
 struct inet_listen_hashbucket *VAR_3;

 if (!VAR_1->lhash2)
  return;

 VAR_3 = FUNC_3(VAR_1, VAR_2);

 FUNC_4(&VAR_3->lock);
 if (VAR_2->sk_reuseport && VAR_2->sk_family == VAR_0)
  FUNC_1(&FUNC_2(VAR_2)->icsk_listen_portaddr_node,
       &VAR_3->head);
 else
  FUNC_0(&FUNC_2(VAR_2)->icsk_listen_portaddr_node,
       &VAR_3->head);
 VAR_3->count++;
 FUNC_5(&VAR_3->lock);
}
