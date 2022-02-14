
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lock; int cv; int q; } ;
struct TYPE_7__ {void* data; } ;
typedef TYPE_1__ QueueEntry ;
typedef TYPE_2__ Queue ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(Queue *VAR_1, void *VAR_2) {
  QueueEntry *VAR_3 = FUNC_2(1, sizeof(QueueEntry));
  FUNC_1(VAR_3);
  VAR_3->data = VAR_2;

  FUNC_4(&VAR_1->lock);
  FUNC_0(&VAR_1->q, VAR_3, VAR_0);
  FUNC_3(&VAR_1->cv);
  FUNC_5(&VAR_1->lock);
}
