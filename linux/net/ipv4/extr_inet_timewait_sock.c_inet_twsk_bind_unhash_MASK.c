
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct inet_timewait_sock {struct inet_bind_bucket* tw_tb; int tw_bind_node; } ;
struct inet_hashinfo {int bind_bucket_cachep; } ;
struct inet_bind_bucket {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,struct inet_bind_bucket*) ;

void FUNC_3(struct inet_timewait_sock *VAR_0,
     struct inet_hashinfo *VAR_1)
{
 struct inet_bind_bucket *VAR_2 = VAR_0->tw_tb;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_0->tw_bind_node);
 VAR_0->tw_tb = ((void*)0);
 FUNC_2(VAR_1->bind_bucket_cachep, VAR_2);
 FUNC_1((struct sock *)VAR_0);
}
