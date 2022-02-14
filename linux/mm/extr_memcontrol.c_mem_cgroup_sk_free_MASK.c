
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_memcg; } ;
struct TYPE_2__ {int css; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sock *VAR_0)
{
 if (VAR_0->sk_memcg)
  FUNC_0(&VAR_0->sk_memcg->css);
}
