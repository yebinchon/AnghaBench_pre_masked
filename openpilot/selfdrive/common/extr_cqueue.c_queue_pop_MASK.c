
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lock; int q; int cv; } ;
struct TYPE_7__ {void* data; } ;
typedef TYPE_1__ QueueEntry ;
typedef TYPE_2__ Queue ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void* FUNC_7(Queue *VAR_1) {
  FUNC_5(&VAR_1->lock);
  while (FUNC_0(&VAR_1->q)) {
    FUNC_4(&VAR_1->cv, &VAR_1->lock);
  }
  QueueEntry *VAR_2 = FUNC_1(&VAR_1->q);
  FUNC_2(&VAR_1->q, VAR_2, VAR_0);
  FUNC_6(&VAR_1->lock);

  void* VAR_3 = VAR_2->data;
  FUNC_3(VAR_2);
  return VAR_3;
}
