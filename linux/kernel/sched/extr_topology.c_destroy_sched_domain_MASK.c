
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_domain {struct sched_domain* shared; int ref; int groups; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct sched_domain*) ;

__attribute__((used)) static void FUNC_3(struct sched_domain *VAR_0)
{





 FUNC_1(VAR_0->groups, 1);

 if (VAR_0->shared && FUNC_0(&VAR_0->shared->ref))
  FUNC_2(VAR_0->shared);
 FUNC_2(VAR_0);
}
