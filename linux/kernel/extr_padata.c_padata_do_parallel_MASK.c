
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbcpu; } ;
struct parallel_data {int pqueue; int seq_nr; int refcnt; TYPE_1__ cpumask; } ;
struct padata_priv {int cb_cpu; int cpu; int list; int seq_nr; struct parallel_data* pd; } ;
struct TYPE_4__ {int lock; int list; } ;
struct padata_parallel_queue {int work; TYPE_2__ parallel; } ;
struct padata_instance {int flags; int parallel_wq; int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct parallel_data*,int ) ;
 struct padata_parallel_queue* FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int *) ;
 struct parallel_data* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct padata_instance *VAR_6,
         struct padata_priv *VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 struct padata_parallel_queue *VAR_14;
 struct parallel_data *VAR_15;

 FUNC_12();

 VAR_15 = FUNC_11(VAR_6->pd);

 VAR_13 = -VAR_1;
 if (!(VAR_6->flags & VAR_3) || VAR_6->flags & VAR_4)
  goto out;

 if (!FUNC_5(*VAR_8, VAR_15->cpumask.cbcpu)) {
  if (!FUNC_6(VAR_15->cpumask.cbcpu))
   goto out;


  VAR_11 = *VAR_8 % FUNC_6(VAR_15->cpumask.cbcpu);

  VAR_10 = FUNC_3(VAR_15->cpumask.cbcpu);
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
   VAR_10 = FUNC_4(VAR_10, VAR_15->cpumask.cbcpu);

  *VAR_8 = VAR_10;
 }

 VAR_13 = -VAR_0;
 if ((VAR_6->flags & VAR_5))
  goto out;

 if (FUNC_2(&VAR_15->refcnt) >= VAR_2)
  goto out;

 VAR_13 = 0;
 FUNC_0(&VAR_15->refcnt);
 VAR_7->pd = VAR_15;
 VAR_7->cb_cpu = *VAR_8;

 VAR_7->seq_nr = FUNC_1(&VAR_15->seq_nr);
 VAR_12 = FUNC_8(VAR_15, VAR_7->seq_nr);
 VAR_7->cpu = VAR_12;
 VAR_14 = FUNC_9(VAR_15->pqueue, VAR_12);

 FUNC_14(&VAR_14->parallel.lock);
 FUNC_7(&VAR_7->list, &VAR_14->parallel.list);
 FUNC_15(&VAR_14->parallel.lock);

 FUNC_10(VAR_6->parallel_wq, &VAR_14->work);

out:
 FUNC_13();

 return VAR_13;
}
