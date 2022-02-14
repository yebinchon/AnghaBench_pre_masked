
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dev; struct sock* sk; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct rtable {TYPE_2__ dst; } ;
struct TYPE_3__ {int (* update_pmtu ) (TYPE_2__*,struct sock*,int *,int) ;} ;


 scalar_t__ FUNC_0 (struct sock*) ;
 struct rtable* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_2__*,struct sock*,int *,int) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct sock *VAR_3 = VAR_1->sk;
 struct rtable *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_1->dev && VAR_3 && FUNC_0(VAR_3))
  VAR_4->dst.ops->update_pmtu(&VAR_4->dst, VAR_3, ((void*)0), VAR_2);
}
