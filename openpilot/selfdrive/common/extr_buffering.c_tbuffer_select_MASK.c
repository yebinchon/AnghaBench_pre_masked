
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bufs; int pending_idx; int lock; int * reading; } ;
typedef TYPE_1__ TBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(TBuffer *VAR_0) {
  FUNC_1(&VAR_0->lock);

  int VAR_1;
  for (VAR_1=0; VAR_1<VAR_0->num_bufs; VAR_1++) {
    if (!VAR_0->reading[VAR_1] && VAR_1 != VAR_0->pending_idx) {
      break;
    }
  }
  FUNC_0(VAR_1 < VAR_0->num_bufs);

  FUNC_2(&VAR_0->lock);
  return VAR_1;
}
