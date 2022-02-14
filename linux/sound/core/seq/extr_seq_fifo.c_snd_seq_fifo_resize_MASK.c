
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int dummy; } ;
struct snd_seq_fifo {int use_lock; int lock; scalar_t__ cells; int * tail; struct snd_seq_event_cell* head; struct snd_seq_pool* pool; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_seq_event_cell*) ;
 int FUNC_2 (struct snd_seq_pool**) ;
 scalar_t__ FUNC_3 (struct snd_seq_pool*) ;
 int FUNC_4 (struct snd_seq_pool*) ;
 struct snd_seq_pool* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct snd_seq_fifo *VAR_2, int VAR_3)
{
 struct snd_seq_pool *VAR_4, *VAR_5;
 struct snd_seq_event_cell *VAR_6, *VAR_7, *VAR_8;

 if (FUNC_0(!VAR_2 || !VAR_2->pool))
  return -VAR_0;


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 == ((void*)0))
  return -VAR_1;
 if (FUNC_3(VAR_4) < 0) {
  FUNC_2(&VAR_4);
  return -VAR_1;
 }

 FUNC_7(&VAR_2->lock);

 VAR_5 = VAR_2->pool;
 VAR_8 = VAR_2->head;

 VAR_2->pool = VAR_4;
 VAR_2->head = ((void*)0);
 VAR_2->tail = ((void*)0);
 VAR_2->cells = 0;

 FUNC_8(&VAR_2->lock);


 FUNC_4(VAR_5);
 FUNC_6(&VAR_2->use_lock);


 for (VAR_6 = VAR_8; VAR_6; VAR_6 = VAR_7) {
  VAR_7 = VAR_6->next;
  FUNC_1(VAR_6);
 }
 FUNC_2(&VAR_5);

 return 0;
}
