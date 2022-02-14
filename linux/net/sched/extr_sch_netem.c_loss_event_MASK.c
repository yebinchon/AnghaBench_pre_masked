
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netem_sched_data {int loss_model; int loss_cor; int loss; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (struct netem_sched_data*) ;
 int FUNC_2 (struct netem_sched_data*) ;

__attribute__((used)) static bool FUNC_3(struct netem_sched_data *VAR_0)
{
 switch (VAR_0->loss_model) {
 case 128:

  return VAR_0->loss && VAR_0->loss >= FUNC_0(&VAR_0->loss_cor);

 case 130:





  return FUNC_1(VAR_0);

 case 129:





  return FUNC_2(VAR_0);
 }

 return 0;
}
