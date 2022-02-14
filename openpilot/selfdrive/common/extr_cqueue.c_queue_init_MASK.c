
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cv; int lock; int q; } ;
typedef TYPE_1__ Queue ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(Queue *VAR_0) {
  FUNC_1(VAR_0, 0, sizeof(*VAR_0));
  FUNC_0(&VAR_0->q);
  FUNC_3(&VAR_0->lock, ((void*)0));
  FUNC_2(&VAR_0->cv, ((void*)0));
}
