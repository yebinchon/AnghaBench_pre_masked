
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bufs; int lock; int * refcnt; } ;
typedef TYPE_1__ Pool ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(Pool *VAR_0, int VAR_1) {
  FUNC_1(&VAR_0->lock);

  FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->num_bufs);

  VAR_0->refcnt[VAR_1]++;

  FUNC_2(&VAR_0->lock);
}
