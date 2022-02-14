
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_group {int ref; } ;
struct sched_domain {struct sched_domain* child; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cpumask*,int ) ;
 scalar_t__ FUNC_3 () ;
 struct sched_group* FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (struct sched_domain*) ;
 struct cpumask* FUNC_6 (struct sched_group*) ;

__attribute__((used)) static struct sched_group *
FUNC_7(struct sched_domain *VAR_1, int VAR_2)
{
 struct sched_group *VAR_3;
 struct cpumask *VAR_4;

 VAR_3 = FUNC_4(sizeof(struct sched_group) + FUNC_3(),
   VAR_0, FUNC_1(VAR_2));

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_1->child)
  FUNC_2(VAR_4, FUNC_5(VAR_1->child));
 else
  FUNC_2(VAR_4, FUNC_5(VAR_1));

 FUNC_0(&VAR_3->ref);
 return VAR_3;
}
