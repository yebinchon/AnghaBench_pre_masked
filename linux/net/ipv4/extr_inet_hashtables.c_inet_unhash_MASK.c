
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; TYPE_2__* sk_prot; int sk_reuseport_cb; int sk_hash; } ;
struct inet_listen_hashbucket {int count; int lock; } ;
struct inet_hashinfo {struct inet_listen_hashbucket* listening_hash; } ;
typedef int spinlock_t ;
struct TYPE_3__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_4__ {TYPE_1__ h; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int * FUNC_2 (struct inet_hashinfo*,int ) ;
 size_t FUNC_3 (struct sock*) ;
 int FUNC_4 (struct inet_hashinfo*,struct sock*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,TYPE_2__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct sock *VAR_1)
{
 struct inet_hashinfo *VAR_2 = VAR_1->sk_prot->h.hashinfo;
 struct inet_listen_hashbucket *VAR_3 = ((void*)0);
 spinlock_t *VAR_4;

 if (FUNC_7(VAR_1))
  return;

 if (VAR_1->sk_state == VAR_0) {
  VAR_3 = &VAR_2->listening_hash[FUNC_3(VAR_1)];
  VAR_4 = &VAR_3->lock;
 } else {
  VAR_4 = FUNC_2(VAR_2, VAR_1->sk_hash);
 }
 FUNC_10(VAR_4);
 if (FUNC_7(VAR_1))
  goto unlock;

 if (FUNC_5(VAR_1->sk_reuseport_cb))
  FUNC_6(VAR_1);
 if (VAR_3) {
  FUNC_4(VAR_2, VAR_1);
   FUNC_0(VAR_1);
   VAR_3->count--;
 } else {
  FUNC_1(VAR_1);
 }
 FUNC_9(FUNC_8(VAR_1), VAR_1->sk_prot, -1);
unlock:
 FUNC_11(VAR_4);
}
