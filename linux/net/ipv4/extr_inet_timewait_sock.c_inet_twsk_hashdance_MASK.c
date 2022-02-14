
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_prot; int sk_hash; } ;
struct inet_timewait_sock {int tw_refcnt; TYPE_1__* tw_tb; } ;
struct inet_sock {int inet_num; } ;
struct inet_hashinfo {int bhash_size; struct inet_bind_hashbucket* bhash; } ;
struct inet_ehash_bucket {int chain; } ;
struct inet_connection_sock {TYPE_1__* icsk_bind_hash; } ;
struct inet_bind_hashbucket {int lock; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int owners; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 size_t FUNC_2 (int ,int ,int ) ;
 struct inet_connection_sock* FUNC_3 (struct sock*) ;
 struct inet_ehash_bucket* FUNC_4 (struct inet_hashinfo*,int ) ;
 int * FUNC_5 (struct inet_hashinfo*,int ) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct inet_timewait_sock*,int *) ;
 int FUNC_8 (struct inet_timewait_sock*,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct inet_timewait_sock*) ;

void FUNC_15(struct inet_timewait_sock *VAR_0, struct sock *VAR_1,
      struct inet_hashinfo *VAR_2)
{
 const struct inet_sock *VAR_3 = FUNC_6(VAR_1);
 const struct inet_connection_sock *VAR_4 = FUNC_3(VAR_1);
 struct inet_ehash_bucket *VAR_5 = FUNC_4(VAR_2, VAR_1->sk_hash);
 spinlock_t *VAR_6 = FUNC_5(VAR_2, VAR_1->sk_hash);
 struct inet_bind_hashbucket *VAR_7;




 VAR_7 = &VAR_2->bhash[FUNC_2(FUNC_14(VAR_0), VAR_3->inet_num,
   VAR_2->bhash_size)];
 FUNC_12(&VAR_7->lock);
 VAR_0->tw_tb = VAR_4->icsk_bind_hash;
 FUNC_0(!VAR_4->icsk_bind_hash);
 FUNC_7(VAR_0, &VAR_0->tw_tb->owners);
 FUNC_13(&VAR_7->lock);

 FUNC_12(VAR_6);

 FUNC_8(VAR_0, &VAR_5->chain);


 if (FUNC_1(VAR_1))
  FUNC_11(FUNC_10(VAR_1), VAR_1->sk_prot, -1);

 FUNC_13(VAR_6);
 FUNC_9(&VAR_0->tw_refcnt, 3);
}
