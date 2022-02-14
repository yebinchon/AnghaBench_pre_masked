
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owned; int dep_map; int slock; } ;
struct sock {TYPE_1__ sk_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct sock *VAR_1, int VAR_2)
{
 FUNC_2();
 FUNC_4(&VAR_1->sk_lock.slock);
 if (VAR_1->sk_lock.owned)
  FUNC_0(VAR_1);
 VAR_1->sk_lock.owned = 1;
 FUNC_5(&VAR_1->sk_lock.slock);



 FUNC_3(&VAR_1->sk_lock.dep_map, VAR_2, 0, VAR_0);
 FUNC_1();
}
