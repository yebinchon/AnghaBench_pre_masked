
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slock; } ;
struct sock {TYPE_1__ sk_lock; } ;
struct net {int dummy; } ;


 struct sock* FUNC_0 (struct net*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline struct sock *FUNC_3(struct net *VAR_0)
{
 struct sock *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (FUNC_2(!FUNC_1(&VAR_1->sk_lock.slock))) {



  return ((void*)0);
 }
 return VAR_1;
}
