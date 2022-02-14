
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_domain_attr {int relax_domain_level; } ;
struct sched_domain {int level; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct sched_domain *VAR_3,
     struct sched_domain_attr *VAR_4)
{
 int VAR_5;

 if (!VAR_4 || VAR_4->relax_domain_level < 0) {
  if (VAR_2 < 0)
   return;
  else
   VAR_5 = VAR_2;
 } else
  VAR_5 = VAR_4->relax_domain_level;
 if (VAR_5 < VAR_3->level) {

  VAR_3->flags &= ~(VAR_1|VAR_0);
 } else {

  VAR_3->flags |= (VAR_1|VAR_0);
 }
}
