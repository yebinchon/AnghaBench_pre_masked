
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; scalar_t__ sk_family; TYPE_2__* sk_prot; int sk_node; scalar_t__ sk_reuseport; } ;
struct inet_listen_hashbucket {int lock; int count; int head; } ;
struct inet_hashinfo {struct inet_listen_hashbucket* listening_hash; } ;
struct TYPE_3__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_4__ {TYPE_1__ h; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sock*,struct sock*) ;
 int FUNC_5 (struct inet_hashinfo*,struct sock*) ;
 int FUNC_6 (struct sock*,struct inet_listen_hashbucket*) ;
 size_t FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,TYPE_2__*,int) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct sock *VAR_4, struct sock *VAR_5)
{
 struct inet_hashinfo *VAR_6 = VAR_4->sk_prot->h.hashinfo;
 struct inet_listen_hashbucket *VAR_7;
 int VAR_8 = 0;

 if (VAR_4->sk_state != VAR_3) {
  FUNC_4(VAR_4, VAR_5);
  return 0;
 }
 FUNC_1(!FUNC_8(VAR_4));
 VAR_7 = &VAR_6->listening_hash[FUNC_7(VAR_4)];

 FUNC_12(&VAR_7->lock);
 if (VAR_4->sk_reuseport) {
  VAR_8 = FUNC_6(VAR_4, VAR_7);
  if (VAR_8)
   goto unlock;
 }
 if (FUNC_0(VAR_1) && VAR_4->sk_reuseport &&
  VAR_4->sk_family == VAR_0)
  FUNC_3(&VAR_4->sk_node, &VAR_7->head);
 else
  FUNC_2(&VAR_4->sk_node, &VAR_7->head);
 FUNC_5(VAR_6, VAR_4);
 VAR_7->count++;
 FUNC_11(VAR_4, VAR_2);
 FUNC_10(FUNC_9(VAR_4), VAR_4->sk_prot, 1);
unlock:
 FUNC_13(&VAR_7->lock);

 return VAR_8;
}
