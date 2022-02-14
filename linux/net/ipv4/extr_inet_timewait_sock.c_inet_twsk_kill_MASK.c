
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_timewait_sock {TYPE_1__* tw_dr; int tw_num; int tw_hash; } ;
struct inet_hashinfo {int bhash_size; struct inet_bind_hashbucket* bhash; } ;
struct inet_bind_hashbucket {int lock; } ;
typedef int spinlock_t ;
struct TYPE_2__ {int tw_count; struct inet_hashinfo* hashinfo; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (struct inet_hashinfo*,int ) ;
 int FUNC_3 (struct inet_timewait_sock*,struct inet_hashinfo*) ;
 int FUNC_4 (struct inet_timewait_sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inet_timewait_sock*) ;

__attribute__((used)) static void FUNC_9(struct inet_timewait_sock *VAR_0)
{
 struct inet_hashinfo *VAR_1 = VAR_0->tw_dr->hashinfo;
 spinlock_t *VAR_2 = FUNC_2(VAR_1, VAR_0->tw_hash);
 struct inet_bind_hashbucket *VAR_3;

 FUNC_6(VAR_2);
 FUNC_5((struct sock *)VAR_0);
 FUNC_7(VAR_2);


 VAR_3 = &VAR_1->bhash[FUNC_1(FUNC_8(VAR_0), VAR_0->tw_num,
   VAR_1->bhash_size)];

 FUNC_6(&VAR_3->lock);
 FUNC_3(VAR_0, VAR_1);
 FUNC_7(&VAR_3->lock);

 FUNC_0(&VAR_0->tw_dr->tw_count);
 FUNC_4(VAR_0);
}
