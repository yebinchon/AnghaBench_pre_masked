
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_bufs; int* refcnt; int* ts; int counter; int lock; } ;
typedef TYPE_1__ Pool ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(Pool *VAR_0, int VAR_1) {
  FUNC_0(VAR_1 > 3);

  FUNC_2(VAR_0, 0, sizeof(*VAR_0));
  VAR_0->num_bufs = VAR_1;

  VAR_0->refcnt = (int*)FUNC_1(VAR_1, sizeof(int));
  VAR_0->ts = (int*)FUNC_1(VAR_1, sizeof(int));

  VAR_0->counter = 1;

  FUNC_3(&VAR_0->lock, ((void*)0));
}
