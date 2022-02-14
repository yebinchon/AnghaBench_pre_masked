
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_hash; TYPE_2__* sk_prot; } ;
struct inet_hashinfo {int dummy; } ;
struct hlist_nulls_head {int dummy; } ;
struct inet_ehash_bucket {struct hlist_nulls_head chain; } ;
typedef int spinlock_t ;
struct TYPE_3__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_4__ {TYPE_1__ h; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,struct hlist_nulls_head*) ;
 struct inet_ehash_bucket* FUNC_2 (struct inet_hashinfo*,int ) ;
 int * FUNC_3 (struct inet_hashinfo*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

bool FUNC_9(struct sock *VAR_0, struct sock *VAR_1)
{
 struct inet_hashinfo *VAR_2 = VAR_0->sk_prot->h.hashinfo;
 struct hlist_nulls_head *VAR_3;
 struct inet_ehash_bucket *VAR_4;
 spinlock_t *VAR_5;
 bool VAR_6 = 1;

 FUNC_0(!FUNC_6(VAR_0));

 VAR_0->sk_hash = FUNC_4(VAR_0);
 VAR_4 = FUNC_2(VAR_2, VAR_0->sk_hash);
 VAR_3 = &VAR_4->chain;
 VAR_5 = FUNC_3(VAR_2, VAR_0->sk_hash);

 FUNC_7(VAR_5);
 if (VAR_1) {
  FUNC_0(VAR_0->sk_hash != VAR_1->sk_hash);
  VAR_6 = FUNC_5(VAR_1);
 }
 if (VAR_6)
  FUNC_1(VAR_0, VAR_3);
 FUNC_8(VAR_5);
 return VAR_6;
}
