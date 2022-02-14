
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int num; int* idx; int inited; int cv; int lock; int efd; TYPE_2__* pool; } ;
typedef TYPE_1__ PoolQueue ;
typedef TYPE_2__ Pool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(PoolQueue *VAR_0) {
  Pool *VAR_1 = VAR_0->pool;

  FUNC_5(&VAR_1->lock);
  FUNC_5(&VAR_0->lock);

  for (int VAR_2=0; VAR_2<VAR_0->num; VAR_2++) {
    if (VAR_0->idx[VAR_2] != -1) {
      FUNC_2(VAR_1, VAR_0->idx[VAR_2]);
    }
  }

  FUNC_0(VAR_0->efd);
  FUNC_1(VAR_0->idx);

  VAR_0->inited = 0;

  FUNC_6(&VAR_0->lock);

  FUNC_4(&VAR_0->lock);
  FUNC_3(&VAR_0->cv);

  FUNC_6(&VAR_1->lock);
}
