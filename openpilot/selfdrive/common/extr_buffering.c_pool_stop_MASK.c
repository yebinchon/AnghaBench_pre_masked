
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_tbufs; int stopped; int lock; TYPE_1__* queues; int * tbufs; } ;
struct TYPE_4__ {int stopped; int cv; int efd; int lock; int inited; } ;
typedef TYPE_1__ PoolQueue ;
typedef TYPE_2__ Pool ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(Pool *VAR_1) {
  for (int VAR_2=0; VAR_2<VAR_1->num_tbufs; VAR_2++) {
    FUNC_4(&VAR_1->tbufs[VAR_2]);
  }

  FUNC_2(&VAR_1->lock);
  VAR_1->stopped = 1;
  for (int VAR_3=0; VAR_3<VAR_0; VAR_3++) {
    PoolQueue *VAR_4 = &VAR_1->queues[VAR_3];
    if (!VAR_4->inited) continue;

    FUNC_2(&VAR_4->lock);
    VAR_4->stopped = 1;
    FUNC_3(&VAR_4->lock);
    FUNC_0(VAR_4->efd);
    FUNC_1(&VAR_4->cv);
  }
  FUNC_3(&VAR_1->lock);
}
