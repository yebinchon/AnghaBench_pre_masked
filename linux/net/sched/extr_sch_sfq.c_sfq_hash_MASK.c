
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sfq_sched_data {int divisor; int perturbation; } ;


 int FUNC_0 (struct sk_buff const*,int *) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sfq_sched_data *VAR_0,
        const struct sk_buff *VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->perturbation) & (VAR_0->divisor - 1);
}
