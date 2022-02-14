
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {int lock; int cells; struct snd_seq_event_cell* tail; struct snd_seq_event_cell* head; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; int event; } ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct snd_seq_event_cell *FUNC_4(struct snd_seq_prioq *VAR_0,
        void *VAR_1)
{
 struct snd_seq_event_cell *VAR_2;
 unsigned long VAR_3;

 if (VAR_0 == ((void*)0)) {
  FUNC_1("ALSA: seq: snd_seq_prioq_cell_in() called with NULL prioq\n");
  return ((void*)0);
 }
 FUNC_2(&VAR_0->lock, VAR_3);

 VAR_2 = VAR_0->head;
 if (VAR_2 && VAR_1 && !FUNC_0(&VAR_2->event, VAR_1))
  VAR_2 = ((void*)0);
 if (VAR_2) {
  VAR_0->head = VAR_2->next;


  if (VAR_0->tail == VAR_2)
   VAR_0->tail = ((void*)0);

  VAR_2->next = ((void*)0);
  VAR_0->cells--;
 }

 FUNC_3(&VAR_0->lock, VAR_3);
 return VAR_2;
}
