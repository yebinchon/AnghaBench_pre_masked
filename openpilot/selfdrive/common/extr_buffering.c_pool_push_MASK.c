
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_bufs; scalar_t__* refcnt; int num_tbufs; int * tbufs; int lock; TYPE_1__* queues; int counter; int * ts; } ;
struct TYPE_4__ {int head; int num; int tail; int* idx; int cv; int efd; int lock; int inited; } ;
typedef TYPE_1__ PoolQueue ;
typedef TYPE_2__ Pool ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(Pool *VAR_1, int VAR_2) {
  FUNC_3(&VAR_1->lock);



  FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->num_bufs);

  VAR_1->ts[VAR_2] = VAR_1->counter;
  VAR_1->counter++;

  FUNC_0(VAR_1->refcnt[VAR_2] > 0);
  VAR_1->refcnt[VAR_2]--;

  int VAR_3 = VAR_1->num_tbufs;
  VAR_1->refcnt[VAR_2] += VAR_3;


  for (int VAR_4=0; VAR_4<VAR_0; VAR_4++) {
    PoolQueue *VAR_5 = &VAR_1->queues[VAR_4];
    if (!VAR_5->inited) continue;

    FUNC_3(&VAR_5->lock);
    if (((VAR_5->head+1) % VAR_5->num) == VAR_5->tail) {

      FUNC_4(&VAR_5->lock);
      continue;
    }

    VAR_1->refcnt[VAR_2]++;

    VAR_5->idx[VAR_5->head] = VAR_2;
    VAR_5->head = (VAR_5->head+1) % VAR_5->num;
    FUNC_0(VAR_5->head != VAR_5->tail);
    FUNC_4(&VAR_5->lock);

    FUNC_1(VAR_5->efd);
    FUNC_2(&VAR_5->cv);
  }

  FUNC_4(&VAR_1->lock);

  for (int VAR_6=0; VAR_6<VAR_3; VAR_6++) {
    FUNC_5(&VAR_1->tbufs[VAR_6], VAR_2);
  }
}
