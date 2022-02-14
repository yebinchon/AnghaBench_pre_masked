
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipv6_stable_secret {int initialized; int secret; } ;
struct TYPE_2__ {struct ipv6_stable_secret stable_secret; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct inet6_dev *VAR_0)
{
 struct ipv6_stable_secret *VAR_1 = &VAR_0->cnf.stable_secret;

 if (VAR_1->initialized)
  return;
 VAR_1 = &VAR_0->cnf.stable_secret;
 FUNC_0(&VAR_1->secret, sizeof(VAR_1->secret));
 VAR_1->initialized = 1;
}
