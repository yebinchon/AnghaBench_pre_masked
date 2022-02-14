
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_pool {int size; scalar_t__ max_used; int output_sleep; scalar_t__ closing; int counter; scalar_t__ total_elements; int * free; int * ptr; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct snd_seq_pool* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct snd_seq_pool *FUNC_4(int VAR_1)
{
 struct snd_seq_pool *VAR_2;


 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 FUNC_3(&VAR_2->lock);
 VAR_2->ptr = ((void*)0);
 VAR_2->free = ((void*)0);
 VAR_2->total_elements = 0;
 FUNC_0(&VAR_2->counter, 0);
 VAR_2->closing = 0;
 FUNC_1(&VAR_2->output_sleep);

 VAR_2->size = VAR_1;


 VAR_2->max_used = 0;
 return VAR_2;
}
