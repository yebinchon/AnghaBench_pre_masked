
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int lock; scalar_t__ closing; scalar_t__ total_elements; int * free; struct snd_seq_event_cell* ptr; int counter; int output_sleep; } ;
struct snd_seq_event_cell {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct snd_seq_event_cell*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct snd_seq_pool *VAR_1)
{
 struct snd_seq_event_cell *VAR_2;

 if (FUNC_3(!VAR_1))
  return -VAR_0;


 if (FUNC_6(&VAR_1->output_sleep))
  FUNC_7(&VAR_1->output_sleep);

 while (FUNC_0(&VAR_1->counter) > 0)
  FUNC_2(1);


 FUNC_4(&VAR_1->lock);
 VAR_2 = VAR_1->ptr;
 VAR_1->ptr = ((void*)0);
 VAR_1->free = ((void*)0);
 VAR_1->total_elements = 0;
 FUNC_5(&VAR_1->lock);

 FUNC_1(VAR_2);

 FUNC_4(&VAR_1->lock);
 VAR_1->closing = 0;
 FUNC_5(&VAR_1->lock);

 return 0;
}
