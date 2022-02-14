
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parallel_data {int cpu; int reorder_work; int pqueue; int lock; int squeue; struct padata_instance* pinst; } ;
struct TYPE_3__ {int lock; int list; } ;
struct padata_serial_queue {int work; TYPE_1__ serial; } ;
struct padata_priv {int cb_cpu; int list; } ;
struct TYPE_4__ {int list; } ;
struct padata_parallel_queue {TYPE_2__ reorder; } ;
struct padata_instance {int serial_wq; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 struct padata_priv* FUNC_2 (struct parallel_data*,int) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct parallel_data *VAR_0)
{
 int VAR_1;
 struct padata_priv *VAR_2;
 struct padata_serial_queue *VAR_3;
 struct padata_instance *VAR_4 = VAR_0->pinst;
 struct padata_parallel_queue *VAR_5;
 if (!FUNC_8(&VAR_0->lock))
  return;

 while (1) {
  VAR_2 = FUNC_2(VAR_0, 1);






  if (!VAR_2)
   break;

  VAR_1 = VAR_2->cb_cpu;
  VAR_3 = FUNC_3(VAR_0->squeue, VAR_1);

  FUNC_7(&VAR_3->serial.lock);
  FUNC_0(&VAR_2->list, &VAR_3->serial.list);
  FUNC_9(&VAR_3->serial.lock);

  FUNC_5(VAR_1, VAR_4->serial_wq, &VAR_3->work);
 }

 FUNC_10(&VAR_0->lock);
 FUNC_6();

 VAR_5 = FUNC_3(VAR_0->pqueue, VAR_0->cpu);
 if (!FUNC_1(&VAR_5->reorder.list) &&
     FUNC_2(VAR_0, 0))
  FUNC_4(VAR_4->serial_wq, &VAR_0->reorder_work);
}
