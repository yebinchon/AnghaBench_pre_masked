
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbcpu; int pcpu; } ;
struct parallel_data {TYPE_1__ cpumask; } ;
struct padata_instance {int flags; int cpumask_change_notifier; struct parallel_data* pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct parallel_data*) ;
 int FUNC_3 (struct parallel_data*) ;
 int FUNC_4 (struct parallel_data*,struct parallel_data*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct padata_instance *VAR_3,
      struct parallel_data *VAR_4)
{
 struct parallel_data *VAR_5 = VAR_3->pd;
 int VAR_6 = 0;

 VAR_3->flags |= VAR_2;

 FUNC_4(VAR_3->pd, VAR_4);

 FUNC_5();

 if (!FUNC_1(VAR_5->cpumask.pcpu, VAR_4->cpumask.pcpu))
  VAR_6 |= VAR_0;
 if (!FUNC_1(VAR_5->cpumask.cbcpu, VAR_4->cpumask.cbcpu))
  VAR_6 |= VAR_1;

 FUNC_2(VAR_5);
 FUNC_3(VAR_5);

 if (VAR_6)
  FUNC_0(&VAR_3->cpumask_change_notifier,
          VAR_6,
          &VAR_4->cpumask);

 VAR_3->flags &= ~VAR_2;
}
