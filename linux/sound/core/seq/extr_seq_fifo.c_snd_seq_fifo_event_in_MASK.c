
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int use_lock; int input_sleep; int lock; int cells; struct snd_seq_event_cell* head; struct snd_seq_event_cell* tail; int overflow; int pool; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;
struct snd_seq_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct snd_seq_event*,struct snd_seq_event_cell**,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct snd_seq_fifo *VAR_3,
     struct snd_seq_event *VAR_4)
{
 struct snd_seq_event_cell *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_1(!VAR_3))
  return -VAR_1;

 FUNC_4(&VAR_3->use_lock);
 VAR_7 = FUNC_2(VAR_3->pool, VAR_4, &VAR_5, 1, ((void*)0), ((void*)0));
 if (VAR_7 < 0) {
  if ((VAR_7 == -VAR_2) || (VAR_7 == -VAR_0))
   FUNC_0(&VAR_3->overflow);
  FUNC_3(&VAR_3->use_lock);
  return VAR_7;
 }


 FUNC_5(&VAR_3->lock, VAR_6);
 if (VAR_3->tail != ((void*)0))
  VAR_3->tail->next = VAR_5;
 VAR_3->tail = VAR_5;
 if (VAR_3->head == ((void*)0))
  VAR_3->head = VAR_5;
 VAR_5->next = ((void*)0);
 VAR_3->cells++;
 FUNC_6(&VAR_3->lock, VAR_6);


 if (FUNC_7(&VAR_3->input_sleep))
  FUNC_8(&VAR_3->input_sleep);

 FUNC_3(&VAR_3->use_lock);

 return 0;

}
