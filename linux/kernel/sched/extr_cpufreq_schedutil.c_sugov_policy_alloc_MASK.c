
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_policy {int update_lock; struct cpufreq_policy* policy; } ;
struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 struct sugov_policy* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct sugov_policy *FUNC_2(struct cpufreq_policy *VAR_1)
{
 struct sugov_policy *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->policy = VAR_1;
 FUNC_1(&VAR_2->update_lock);
 return VAR_2;
}
