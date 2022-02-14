
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int slock; int wq; } ;
struct TYPE_5__ {scalar_t__ tail; } ;
struct sock {TYPE_1__ sk_lock; TYPE_3__* sk_prot; TYPE_2__ sk_backlog; } ;
struct TYPE_6__ {int (* release_cb ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sock *VAR_0)
{
 FUNC_2(&VAR_0->sk_lock.slock);
 if (VAR_0->sk_backlog.tail)
  FUNC_0(VAR_0);




 if (VAR_0->sk_prot->release_cb)
  VAR_0->sk_prot->release_cb(VAR_0);

 FUNC_1(VAR_0);
 if (FUNC_5(&VAR_0->sk_lock.wq))
  FUNC_6(&VAR_0->sk_lock.wq);
 FUNC_3(&VAR_0->sk_lock.slock);
}
