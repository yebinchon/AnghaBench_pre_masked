
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_seq_queue {int owner; int klocked; TYPE_1__* timer; int owner_lock; } ;
struct TYPE_3__ {scalar_t__ running; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(int VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 struct snd_seq_queue *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
   continue;
  FUNC_4(&VAR_4->owner_lock, VAR_2);
  if (VAR_4->owner == VAR_1)
   VAR_4->klocked = 1;
  FUNC_5(&VAR_4->owner_lock, VAR_2);
  if (VAR_4->owner == VAR_1) {
   if (VAR_4->timer->running)
    FUNC_3(VAR_4->timer);
   FUNC_2(VAR_4->timer);
  }
  FUNC_0(VAR_4);
 }
}
