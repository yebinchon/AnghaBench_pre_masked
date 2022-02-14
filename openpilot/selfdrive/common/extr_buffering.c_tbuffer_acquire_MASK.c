
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_idx; int num_bufs; int* reading; int lock; int efd; scalar_t__ stopped; int cv; } ;
typedef TYPE_1__ TBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(TBuffer *VAR_0) {
  FUNC_3(&VAR_0->lock);

  if (VAR_0->stopped) {
    FUNC_4(&VAR_0->lock);
    return -1;
  }

  while (VAR_0->pending_idx == -1) {
    FUNC_2(&VAR_0->cv, &VAR_0->lock);

    if (VAR_0->stopped) {
      FUNC_4(&VAR_0->lock);
      return -1;
    }
  }

  FUNC_1(VAR_0->efd);

  int VAR_1 = VAR_0->pending_idx;
  FUNC_0(VAR_1 < VAR_0->num_bufs);

  VAR_0->reading[VAR_1] = 1;
  VAR_0->pending_idx = -1;

  FUNC_4(&VAR_0->lock);

  return VAR_1;
}
