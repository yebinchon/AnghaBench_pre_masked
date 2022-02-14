
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bufs; scalar_t__* refcnt; int* ts; int counter; int lock; int cb_cookie; int (* release_cb ) (int ,int) ;} ;
typedef TYPE_1__ Pool ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(Pool *VAR_0) {
  FUNC_1(&VAR_0->lock);

  int VAR_1;
  for (VAR_1=0; VAR_1<VAR_0->num_bufs; VAR_1++) {
    if (VAR_0->refcnt[VAR_1] == 0) {
      break;
    }
  }

  if (VAR_1 >= VAR_0->num_bufs) {



    int VAR_2 = 0;
    int VAR_3 = VAR_0->ts[0];
    for (int VAR_4=1; VAR_4<VAR_0->num_bufs; VAR_4++) {
      if (VAR_0->ts[VAR_4] < VAR_3) {
        VAR_3 = VAR_0->ts[VAR_4];
        VAR_2 = VAR_4;
      }
    }
    VAR_1 = VAR_2;
    FUNC_0("pool is full! evicted %d\n", VAR_2);


    if (VAR_0->release_cb) {
      VAR_0->release_cb(VAR_0->cb_cookie, VAR_2);
    }
  }

  VAR_0->refcnt[VAR_1]++;

  VAR_0->ts[VAR_1] = VAR_0->counter;
  VAR_0->counter++;

  FUNC_2(&VAR_0->lock);

  return VAR_1;
}
