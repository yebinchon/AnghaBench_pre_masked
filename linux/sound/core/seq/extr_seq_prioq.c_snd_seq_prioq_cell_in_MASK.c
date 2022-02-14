
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_seq_prioq {int lock; int cells; struct snd_seq_event_cell* tail; struct snd_seq_event_cell* head; } ;
struct TYPE_5__ {int flags; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; TYPE_1__ event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct snd_seq_prioq * VAR_2,
     struct snd_seq_event_cell * VAR_3)
{
 struct snd_seq_event_cell *VAR_4, *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 if (FUNC_3(!VAR_2 || !VAR_3))
  return -VAR_0;


 VAR_8 = (VAR_3->event.flags & VAR_1);

 FUNC_4(&VAR_2->lock, VAR_6);




 if (VAR_2->tail && !VAR_8) {
  if (FUNC_0(&VAR_3->event, &VAR_2->tail->event)) {

   VAR_2->tail->next = VAR_3;
   VAR_2->tail = VAR_3;
   VAR_3->next = ((void*)0);
   VAR_2->cells++;
   FUNC_5(&VAR_2->lock, VAR_6);
   return 0;
  }
 }



 VAR_5 = ((void*)0);
 VAR_4 = VAR_2->head;

 VAR_7 = 10000;
 while (VAR_4 != ((void*)0)) {

  int VAR_9 = FUNC_1(&VAR_3->event, &VAR_4->event);
  if (VAR_9 < 0)

   break;
  else if (VAR_9 == 0 && VAR_8)

   break;


  VAR_5 = VAR_4;
  VAR_4 = VAR_4->next;
  if (! --VAR_7) {
   FUNC_5(&VAR_2->lock, VAR_6);
   FUNC_2("ALSA: seq: cannot find a pointer.. infinite loop?\n");
   return -VAR_0;
  }
 }


 if (VAR_5 != ((void*)0))
  VAR_5->next = VAR_3;
 VAR_3->next = VAR_4;

 if (VAR_2->head == VAR_4)
  VAR_2->head = VAR_3;
 if (VAR_4 == ((void*)0))
  VAR_2->tail = VAR_3;
 VAR_2->cells++;
 FUNC_5(&VAR_2->lock, VAR_6);
 return 0;
}
