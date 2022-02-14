
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct workqueue_attrs {int cpumask; } ;
struct TYPE_4__ {int pcpu; int cbcpu; } ;
struct parallel_data {TYPE_2__ cpumask; TYPE_1__* pinst; } ;
struct cpumask {int dummy; } ;
struct TYPE_3__ {int parallel_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct workqueue_attrs* FUNC_1 () ;
 int FUNC_2 (int ,struct workqueue_attrs*) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct cpumask const*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct workqueue_attrs*) ;

__attribute__((used)) static int FUNC_7(struct parallel_data *VAR_3,
     const struct cpumask *VAR_4,
     const struct cpumask *VAR_5)
{
 struct workqueue_attrs *VAR_6;
 int VAR_7 = -VAR_0;

 if (!FUNC_0(&VAR_3->cpumask.pcpu, VAR_1))
  goto out;
 FUNC_3(VAR_3->cpumask.pcpu, VAR_4, VAR_2);

 if (!FUNC_0(&VAR_3->cpumask.cbcpu, VAR_1))
  goto free_pcpu_mask;
 FUNC_3(VAR_3->cpumask.cbcpu, VAR_5, VAR_2);

 VAR_6 = FUNC_1();
 if (!VAR_6)
  goto free_cbcpu_mask;


 FUNC_4(VAR_6->cpumask, VAR_3->cpumask.pcpu);
 VAR_7 = FUNC_2(VAR_3->pinst->parallel_wq, VAR_6);
 FUNC_6(VAR_6);
 if (VAR_7 < 0)
  goto free_cbcpu_mask;

 return 0;

free_cbcpu_mask:
 FUNC_5(VAR_3->cpumask.cbcpu);
free_pcpu_mask:
 FUNC_5(VAR_3->cpumask.pcpu);
out:
 return VAR_7;
}
