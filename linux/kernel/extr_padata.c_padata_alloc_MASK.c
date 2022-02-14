
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parallel_data {int dummy; } ;
struct TYPE_2__ {int cbcpu; int pcpu; } ;
struct padata_instance {void* parallel_wq; void* serial_wq; TYPE_1__ cpumask; int node; int lock; int kobj; int cpumask_change_notifier; scalar_t__ flags; int pd; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (char*,int,int,char const*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct cpumask const*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (struct padata_instance*) ;
 int FUNC_9 (int *,int *) ;
 struct padata_instance* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 struct parallel_data* FUNC_12 (struct padata_instance*,struct cpumask const*,struct cpumask const*) ;
 int VAR_5 ;
 int FUNC_13 (struct padata_instance*,struct cpumask const*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,struct parallel_data*) ;

__attribute__((used)) static struct padata_instance *FUNC_16(const char *VAR_6,
         const struct cpumask *VAR_7,
         const struct cpumask *VAR_8)
{
 struct padata_instance *VAR_9;
 struct parallel_data *VAR_10 = ((void*)0);

 VAR_9 = FUNC_10(sizeof(struct padata_instance), VAR_0);
 if (!VAR_9)
  goto err;

 VAR_9->parallel_wq = FUNC_2("%s_parallel", VAR_3, 0,
          VAR_6);
 if (!VAR_9->parallel_wq)
  goto err_free_inst;

 FUNC_7();

 VAR_9->serial_wq = FUNC_2("%s_serial", VAR_2 |
        VAR_1, 1, VAR_6);
 if (!VAR_9->serial_wq)
  goto err_put_cpus;

 if (!FUNC_1(&VAR_9->cpumask.pcpu, VAR_0))
  goto err_free_serial_wq;
 if (!FUNC_1(&VAR_9->cpumask.cbcpu, VAR_0)) {
  FUNC_6(VAR_9->cpumask.pcpu);
  goto err_free_serial_wq;
 }
 if (!FUNC_13(VAR_9, VAR_7) ||
     !FUNC_13(VAR_9, VAR_8))
  goto err_free_masks;

 VAR_10 = FUNC_12(VAR_9, VAR_7, VAR_8);
 if (!VAR_10)
  goto err_free_masks;

 FUNC_15(VAR_9->pd, VAR_10);

 FUNC_4(VAR_9->cpumask.pcpu, VAR_7);
 FUNC_4(VAR_9->cpumask.cbcpu, VAR_8);

 VAR_9->flags = 0;

 FUNC_0(&VAR_9->cpumask_change_notifier);
 FUNC_9(&VAR_9->kobj, &VAR_5);
 FUNC_11(&VAR_9->lock);





 FUNC_14();

 return VAR_9;

err_free_masks:
 FUNC_6(VAR_9->cpumask.pcpu);
 FUNC_6(VAR_9->cpumask.cbcpu);
err_free_serial_wq:
 FUNC_5(VAR_9->serial_wq);
err_put_cpus:
 FUNC_14();
 FUNC_5(VAR_9->parallel_wq);
err_free_inst:
 FUNC_8(VAR_9);
err:
 return ((void*)0);
}
