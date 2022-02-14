
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_listen_hashbucket {int lock; int count; } ;
struct inet_hashinfo {int lhash2; } ;
struct TYPE_2__ {int icsk_listen_portaddr_node; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 struct inet_listen_hashbucket* FUNC_4 (struct inet_hashinfo*,struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inet_hashinfo *VAR_0, struct sock *VAR_1)
{
 struct inet_listen_hashbucket *VAR_2;

 if (!VAR_0->lhash2 ||
     FUNC_0(FUNC_2(&FUNC_3(VAR_1)->icsk_listen_portaddr_node)))
  return;

 VAR_2 = FUNC_4(VAR_0, VAR_1);

 FUNC_5(&VAR_2->lock);
 FUNC_1(&FUNC_3(VAR_1)->icsk_listen_portaddr_node);
 VAR_2->count--;
 FUNC_6(&VAR_2->lock);
}
