
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t head; size_t tail; int* idx; int num; int num_bufs; int lock; int efd; scalar_t__ stopped; int cv; } ;
typedef TYPE_1__ PoolQueue ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(PoolQueue *VAR_0) {
  FUNC_3(&VAR_0->lock);

  if (VAR_0->stopped) {
    FUNC_4(&VAR_0->lock);
    return -1;
  }

  while (VAR_0->head == VAR_0->tail) {
    FUNC_2(&VAR_0->cv, &VAR_0->lock);

    if (VAR_0->stopped) {
      FUNC_4(&VAR_0->lock);
      return -1;
    }
  }



  FUNC_0(VAR_0->head != VAR_0->tail);

  int VAR_1 = VAR_0->idx[VAR_0->tail];
  VAR_0->idx[VAR_0->tail] = -1;
  VAR_0->tail = (VAR_0->tail+1) % VAR_0->num;


  if (VAR_0->head == VAR_0->tail) {
    FUNC_1(VAR_0->efd);
  }



  FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->num_bufs);

  FUNC_4(&VAR_0->lock);

  return VAR_1;
}
