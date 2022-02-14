
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int size; int room; int total_elements; int lock; scalar_t__ max_used; struct snd_seq_event_cell* free; struct snd_seq_event_cell* ptr; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; struct snd_seq_pool* pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_seq_event_cell*) ;
 struct snd_seq_event_cell* FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct snd_seq_pool *VAR_3)
{
 int VAR_4;
 struct snd_seq_event_cell *VAR_5;

 if (FUNC_2(!VAR_3))
  return -VAR_0;

 VAR_5 = FUNC_1(sizeof(struct snd_seq_event_cell), VAR_3->size,
     VAR_2);
 if (!VAR_5)
  return -VAR_1;


 FUNC_3(&VAR_3->lock);
 if (VAR_3->ptr) {
  FUNC_4(&VAR_3->lock);
  FUNC_0(VAR_5);
  return 0;
 }

 VAR_3->ptr = VAR_5;
 VAR_3->free = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
  VAR_5 = VAR_3->ptr + VAR_4;
  VAR_5->pool = VAR_3;
  VAR_5->next = VAR_3->free;
  VAR_3->free = VAR_5;
 }
 VAR_3->room = (VAR_3->size + 1) / 2;


 VAR_3->max_used = 0;
 VAR_3->total_elements = VAR_3->size;
 FUNC_4(&VAR_3->lock);
 return 0;
}
