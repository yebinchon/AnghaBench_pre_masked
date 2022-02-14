
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_seq_prioq {int lock; int cells; struct snd_seq_event_cell* tail; struct snd_seq_event_cell* head; } ;
struct TYPE_5__ {int client; } ;
struct TYPE_4__ {int client; } ;
struct TYPE_6__ {TYPE_2__ dest; TYPE_1__ source; int type; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; TYPE_3__ event; } ;


 int FUNC_0 (char*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct snd_seq_event_cell*,int,int) ;
 int FUNC_2 (struct snd_seq_event_cell*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct snd_seq_prioq * VAR_0, int VAR_1, int VAR_2)
{
 register struct snd_seq_event_cell *VAR_3, *VAR_4;
 unsigned long VAR_5;
 struct snd_seq_event_cell *VAR_6 = ((void*)0);
 struct snd_seq_event_cell *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9;


 FUNC_3(&VAR_0->lock, VAR_5);
 VAR_3 = VAR_0->head;
 while (VAR_3) {
  VAR_4 = VAR_3->next;
  if (FUNC_1(VAR_3, VAR_1, VAR_2)) {

   if (VAR_3 == VAR_0->head) {
    VAR_0->head = VAR_3->next;
   } else {
    VAR_6->next = VAR_3->next;
   }
   if (VAR_3 == VAR_0->tail)
    VAR_0->tail = VAR_3->next;
   VAR_0->cells--;

   VAR_3->next = ((void*)0);
   if (VAR_7 == ((void*)0)) {
    VAR_7 = VAR_3;
   } else {
    VAR_8->next = VAR_3;
   }
   VAR_8 = VAR_3;
  } else {
   VAR_6 = VAR_3;
  }
  VAR_3 = VAR_4;
 }
 FUNC_4(&VAR_0->lock, VAR_5);


 while (VAR_7) {
  VAR_9 = VAR_7->next;
  FUNC_2(VAR_7);
  VAR_7 = VAR_9;
 }
}
