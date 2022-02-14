
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lock; int q; } ;
struct TYPE_7__ {void* data; } ;
typedef TYPE_1__ QueueEntry ;
typedef TYPE_2__ Queue ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void* FUNC_6(Queue *VAR_1) {
  FUNC_4(&VAR_1->lock);

  void* VAR_2 = ((void*)0);
  if (!FUNC_0(&VAR_1->q)) {
    QueueEntry *VAR_3 = FUNC_1(&VAR_1->q);
    FUNC_2(&VAR_1->q, VAR_3, VAR_0);
    VAR_2 = VAR_3->data;
    FUNC_3(VAR_3);
  }

  FUNC_5(&VAR_1->lock);
  return VAR_2;
}
