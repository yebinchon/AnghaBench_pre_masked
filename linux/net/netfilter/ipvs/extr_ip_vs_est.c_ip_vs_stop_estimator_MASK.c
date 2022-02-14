
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int est_lock; } ;
struct ip_vs_estimator {int list; } ;
struct ip_vs_stats {struct ip_vs_estimator est; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct netns_ipvs *VAR_0, struct ip_vs_stats *VAR_1)
{
 struct ip_vs_estimator *VAR_2 = &VAR_1->est;

 FUNC_1(&VAR_0->est_lock);
 FUNC_0(&VAR_2->list);
 FUNC_2(&VAR_0->est_lock);
}
